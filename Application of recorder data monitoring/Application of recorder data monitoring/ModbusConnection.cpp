#pragma once
#include "modbus.h"
#include <list>
#include <string>
#include <map>
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
		modbus_free(ctx);
	}
}

void ModbusConnection::modbus_read(Device^ dev) // Считывание по MODBUS TCP/IP
{
	uint16_t data[8001];
	error = modbus_read_registers(ctx, address, amount, data); // Считывание непосредственно с контроллера 
	int min, sec, msec, hour, day, month, code;
	String^ date;
	String^ time;
	String^ note="";
	String^ full_note;
	msg = msg->getInstance();
	for (int i = 0; i < 8000; i += 5)  // Обработка полученных данных
	{
		month = data[i + 1] & mask_month;
		day = (data[i + 1] & mask_day) >> 4;
		hour = (data[i + 1] & mask_hour) >> 9;
		min = data[i + 2] & mask_minutes;
		sec = (data[i + 2] & mask_seconds) >> 8;
		msec = data[i + 3];
		time = Convert::ToString(hour) + ":" + Convert::ToString(min) + ":" + Convert::ToString(sec) + "." + Convert::ToString(msec);
		date = Convert::ToString(day) + "." + Convert::ToString(month);
		code = data[i + 4];
		note = msg->getNote(dev->device_number, code);
		full_note = time + date + note;
		dev->list->Add(full_note);
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
