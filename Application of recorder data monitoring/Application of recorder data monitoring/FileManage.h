#pragma once

using namespace System;
using namespace System::Collections::Generic;

ref class FileManage
{
public:
	void writeEvents(List<System::String^>^ list, String^ fileName); // Запись в файл
	List<String^>^ readEvents(System::String^ fileName); // Считывание из файла

	List<String^>^ filterList(List<String^>^ param); //Фильтрация по сообщениям

private:
	List<String^>^ filteredList; // Список отфильтрованных сообщений
	List<String^>^ list; 
};

private value class EntityPredicate
{
	String^ note;
public:
	EntityPredicate(String^ str);
	bool hasNote(String^ str);
};
