#pragma once
#include "Device.h"


Device::Device(int dev_num, const char* ip, int port, int substation_number, std::string name)
{
	this->ip = ip;
	this->device_number = dev_num;
	this->port = port;
	this->device_name = name;
	this->substation_number = substation_number;
}

Device::Device(int dev_num, const char* ip, int substation_number, std::string name)
{
	this->ip = ip;
	this->device_number = dev_num;
	this->port = 502;
	this->device_name = name;
	this->substation_number = substation_number;
}
