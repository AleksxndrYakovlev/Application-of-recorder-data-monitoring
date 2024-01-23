#pragma once
#include "modbus.h"
#include "Device.h"
#include "ModbusConnection.h"



ModbusConnection::ModbusConnection(Device^ dev)
{
	ctx = modbus_new_tcp(dev->ip, dev->port);
	if (ctx == NULL)
	{
		// Не удалось создать ctx
	}
	int mb = modbus_connect(ctx);
	if (mb == -1)
	{
		// Нет подключения по MODBUS
		modbus_close(ctx);
		modbus_free(ctx);
	}
	
}

void ModbusConnection::modbus_read(Device^ dev) // Считывание по MODBUS TCP/IP
{
	uint16_t data[8001];
	error = modbus_read_registers(ctx, address, amount, data); // Считывание непосредственно с контроллера 
	if (error != -1)
	{
		int min, sec, msec, hour, day, month, code;
		int start = data[0];
		String^ date;
		String^ time;
		String^ note = "";
		String^ full_note;
		CodeMsg^ msg = CodeMsg::getInstance();
		if (data[start + 3] != 0)
		{
			for (int i = start; i < 8000; i += 4)  // Обработка полученных данных
			{
				month = data[i] & mask_month;
				day = (data[i] & mask_day) >> 4;
				hour = (data[i] & mask_hour) >> 9;
				min = data[i + 1] & mask_minutes;
				sec = (data[i + 1] & mask_seconds) >> 8;
				msec = data[i + 2];
				time = Convert::ToString(hour) + ":" + Convert::ToString(min) + ":" + Convert::ToString(sec) + "." + Convert::ToString(msec);
				date = Convert::ToString(day) + "." + Convert::ToString(month);
				code = data[i + 3];
				note = msg->getNote(dev->device_number, code);
				full_note = time + date + note;
				dev->list->Add(full_note);
			}
			for (int i = 1; i < start; i += 4)
			{
				month = data[i] & mask_month;
				day = (data[i] & mask_day) >> 4;
				hour = (data[i] & mask_hour) >> 9;
				min = data[i + 1] & mask_minutes;
				sec = (data[i + 1] & mask_seconds) >> 8;
				msec = data[i + 2];
				time = Convert::ToString(hour) + ":" + Convert::ToString(min) + ":" + Convert::ToString(sec) + "." + Convert::ToString(msec);
				date = Convert::ToString(day) + "." + Convert::ToString(month);
				code = data[i + 3];
				note = msg->getNote(dev->device_number, code);
				full_note = time + date + note;
				dev->list->Add(full_note);
			}
		}
		else
		{
			for (int i = 1; i < start; i += 4)  // Обработка полученных данных
			{
				if (data[i + 3] != 0)
				{
					month = data[i] & mask_month;
					day = (data[i] & mask_day) >> 4;
					hour = (data[i] & mask_hour) >> 9;
					min = data[i + 1] & mask_minutes;
					sec = (data[i + 1] & mask_seconds) >> 8;
					msec = data[i + 2];
					time = Convert::ToString(hour) + ":" + Convert::ToString(min) + ":" + Convert::ToString(sec) + "." + Convert::ToString(msec);
					date = Convert::ToString(day) + "." + Convert::ToString(month);
					code = data[i + 3];
					note = msg->getNote(dev->device_number, code);
					full_note = time + date + note;
					dev->list->Add(full_note);
				}
				else
				{
					break;
				}
			}
		}
	}
	
}

ModbusConnection::~ModbusConnection()
{
	if (modbus_connect(ctx) != -1)
	{
		// Очищение памяти
		modbus_close(ctx);
		modbus_free(ctx);
	}
};
