#pragma once
#include "Device.h"


Device::Device(int dev_num, const char* ip, int port, int substation_number, String^ name, int district)
{
	this->ip = ip;
	this->device_number = dev_num;
	this->port = port;
	this->device_name = name;
	this->substation_number = substation_number;
	this->district = district;
}

Device::Device(int dev_num, const char* ip,  int substation_number, String^ name, int district)
{
	this->ip = ip;
	this->device_number = dev_num;
	this->port = 502;
	this->device_name = name;
	this->substation_number = substation_number;
	this->district = district;
}


// Фильтрация сообщений 
void Device::filterList(List<String^>^ param)
{
	for each (String^ str in param)
	{
		EntityPredicate ent(str);
		filteredList->AddRange(list->FindAll(gcnew Predicate<String^>(ent,&EntityPredicate::hasNote)));
	}
}


EntityPredicate::EntityPredicate(String^ str)
{
	note = str;
}

bool EntityPredicate::hasNote(String^ str)
{
	return str->Contains(note);
}
