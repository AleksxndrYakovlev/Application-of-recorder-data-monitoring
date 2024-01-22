#pragma once
#include <modbus.h>
#include "CodeMsg.h"

ref class ModbusConnection
{
public:
	ModbusConnection(Device^ dev);
	void modbus_read(Device^ dev);

private:
	modbus_t* ctx = NULL;
	int address = 2000;
	int amount = 8001;
	int error;
	// Маски для обработки данных
	uint16_t mask_month = 0b0000000000001111;
	uint16_t mask_day = 0b0000000111110000;
	uint16_t mask_hour = 0b1111111000000000;
	uint16_t mask_minutes = 0b0000000011111111;
	uint16_t mask_seconds = 0b1111111100000000;
	// Для расшифровки кодов сообщений
	static CodeMsg^ msg;
	~ModbusConnection();

};