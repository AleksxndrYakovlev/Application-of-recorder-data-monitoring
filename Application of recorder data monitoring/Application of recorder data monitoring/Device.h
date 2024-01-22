#pragma once

using namespace System;
using namespace System::Collections::Generic;

ref class Device
{
public:
	Device(int dev_num,const char* ip,int port, int substation_number, String^ name, int district);
	Device(int dev_num, const char* ip, int substation_number, String^ name, int district);
	int device_number;
	String^ device_name;
	int substation_number;
	const char* ip;
	int port;
	int district;

	List<String^>^ list; // Список всех сообщений  
	List<String^>^ filteredList; // Список отфильтрованных сообщений

	//Фильтрация по сообщениям
	void filterList(List<String^>^ param);


};

private value class EntityPredicate
{
	String^ note;
public:
	EntityPredicate(String^ str);
	bool hasNote(String^ str);
};