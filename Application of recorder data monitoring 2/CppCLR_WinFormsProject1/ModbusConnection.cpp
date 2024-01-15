#pragma once
#include "pch.h"
#include "modbus.h"

class ModbusConnection
{
public:
	ModbusConnection(const char* ip, int port);
	void modbus_read();

private:
	modbus_t* ctx = NULL;
	uint16_t data[50];
	~ModbusConnection();
};

ModbusConnection::ModbusConnection(const char* ip, int port)
{
	for (int i = 0; i < 50; i++)
	{
		data[i] = 0;
	}
	ctx = modbus_new_tcp(ip, port);
	int mb = modbus_connect(ctx);
}

void ModbusConnection::modbus_read()
{
	modbus_read_registers(ctx, 0, 5, data);
}

ModbusConnection::~ModbusConnection()
{

};
