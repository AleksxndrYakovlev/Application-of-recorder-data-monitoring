#pragma once
#include "modbus.h"

class ModbusConnection
{
public:
	ModbusConnection(const char* ip, int port);
	void modbus_read();

private:
	modbus_t* ctx=NULL;
	uint16_t data[50];
	~ModbusConnection();
};