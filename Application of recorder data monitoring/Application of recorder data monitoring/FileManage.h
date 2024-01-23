#pragma once

using namespace System;
using namespace System::Collections::Generic;

ref class FileManage
{
public:
	void writeEvents(List<System::String^>^ list, String^ fileName); // ������ � ����
	List<String^>^ readEvents(System::String^ fileName); // ���������� �� �����

	List<String^>^ filterList(List<String^>^ param); //���������� �� ����������

private:
	List<String^>^ filteredList; // ������ ��������������� ���������
	List<String^>^ list; 
};

private value class EntityPredicate
{
	String^ note;
public:
	EntityPredicate(String^ str);
	bool hasNote(String^ str);
};
