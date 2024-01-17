#pragma once
#include "modbus.h"
#include <list>
#include <string>
#include <map>
#include "Device.h"
#include "ModbusConnection.h"



ModbusConnection::ModbusConnection(Device* dev)
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
		modbus_free(ctx);
	}
}

void ModbusConnection::modbus_read(Device* dev) // Считывание по MODBUS TCP/IP
{
	error = modbus_read_registers(ctx, address, amount, data); // Считывание непосредственно с контроллера 
	int min, sec, msec, hour, day, month, code;
	std::string date;
	std::string time;
	std::string note="";
	std::string full_note;
	//Device* dev=new Device();
	for (int i = 0; i < 8000; i += 5)  // Обработка полученных данных
	{
		month = data[i + 1] & mask_month;
		day = (data[i + 1] & mask_day) >> 4;
		hour = (data[i + 1] & mask_hour) >> 9;
		min = data[i + 2] & mask_minutes;
		sec = (data[i + 2] & mask_seconds) >> 8;
		msec = data[i + 3];
		time = std::to_string(hour) + ":" + std::to_string(min) + ":" + std::to_string(sec) + "." + std::to_string(msec);
		date = std::to_string(day) + "." + std::to_string(month);
		code = data[i + 4];
		switch (dev->device_number)
		{
		case 1:
			note = dev->codes_cell.at(code);
			break;
		case 2:
			note = dev->codes_aggregate.at(code);
			break;
		case 3:
			note = dev->codes_control2.at(code);
			break;
		case 4:
			note = dev->codes_control3_tp4.at(code);
			break;
		case 5:
			note = dev->codes_control3_tp41.at(code);
			break;
		case 6:
			note = dev->codes_control3_tp16.at(code);
			break;
		default:
			break;
		}
		full_note = time + date + note;
		dev->notes.push_back(full_note);

	}
}

ModbusConnection::~ModbusConnection()
{

};
