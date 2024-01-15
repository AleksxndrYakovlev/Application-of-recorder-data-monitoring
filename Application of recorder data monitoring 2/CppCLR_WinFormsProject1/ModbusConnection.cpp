#include "ModbusConnection.h"


ModbusConnection::ModbusConnection(const char* ip, int port)
{
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
