#pragma once
#include "Device.h"


Device::Device(int dev_num, const char* ip, int port)
{
	this->ip = ip;
	this->device_number = dev_num;
	this->port = port;
}

Device::~Device()
{

}
