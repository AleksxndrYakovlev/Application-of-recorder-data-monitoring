#pragma once
#include "pch.h"
#include "modbus.h"
#include <list>
#include <string>
#include <map>
#include "Device.cpp"


class ModbusConnection
{
public:
	ModbusConnection(const char* ip, int port);
	void modbus_read(int device_number);

private:
	modbus_t* ctx = NULL;
	int address = 2000;
	int amount = 8001;
	int error;
	std::list<std::string> notes;
	uint16_t data[8001];
	// Маски для обработки данных
	uint16_t mask_month = 0b0000000000001111;
	uint16_t mask_day = 0b0000000111110000;
	uint16_t mask_hour = 0b1111111000000000;
	uint16_t mask_minutes = 0b0000000011111111;
	uint16_t mask_seconds = 0b1111111100000000;
	~ModbusConnection();

};

ModbusConnection::ModbusConnection(const char* ip, int port)
{
	ctx = modbus_new_tcp(ip, port);
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

void ModbusConnection::modbus_read(int device_number) // Считывание по MODBUS TCP/IP
{
	error = modbus_read_registers(ctx, address, amount, data); // Считывание непосредственно с контроллера 
	int min, sec, msec, hour, day, month, code;
	std::string date;
	std::string time;
	std::string note;
	std::string full_note;
	Device* dev=new Device();
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
		switch (device_number)
		{
		case 1:
			note = dev->codes_cell.at(code);
		case 2:
			note = dev->codes_aggregate.at(code);
		case 3:
			note = dev->codes_control2.at(code);
		case 4:
			note = dev->codes_control3_tp4.at(code);
		case 5:
			note = dev->codes_control3_tp41.at(code);
		case 6:
			note = dev->codes_control3_tp16.at(code);
		default:
			break;
		}


	}
}

ModbusConnection::~ModbusConnection()
{

};
