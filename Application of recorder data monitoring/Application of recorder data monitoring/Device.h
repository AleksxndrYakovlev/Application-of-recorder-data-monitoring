#pragma once
#include <map>
#include <string>
#include <list>

class Device
{
public:
	Device(int dev_num,const char* ip,int port, int substation_number, std::string name, int district);
	Device(int dev_num, const char* ip, int substation_number, std::string name, int district);
	int device_number;
	std::string device_name;
	int substation_number;
	const char* ip;
	int port;
	int district;
	std::list<std::string> notes;
};