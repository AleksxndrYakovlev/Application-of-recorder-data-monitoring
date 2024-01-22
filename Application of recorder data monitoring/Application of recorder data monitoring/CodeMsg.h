#pragma once
#include <cliext/map>

using namespace cliext;
using namespace System;
using namespace System::Collections::Generic;


ref class CodeMsg
{
public:
	
	String^ getNote(int device_number,int code);
	List<String^>^ getList(int device_number);
	static CodeMsg^ getInstance();
	
private:
	static CodeMsg^ instance;
	CodeMsg();
	Dictionary<int, String^>^ codes_cell; // ����������� ����� �������� ������
	List<String^>^ cellList;
	/*{
	{ 1, "�� �������"}, { 2,"�� ��������" }, { 3,"��� ������� ��" }, { 4,"���� ������� ��" },
	{ 5,"������� �� ��������� ��" }, { 6,"������� �� ���������� ��" }, { 7,"������������� ��" },
	{ 8,"������ ��" }, { 9,"��������� �� �� ����������" }, { 10,"��� �� ��" },
	{ 11,"��� �� ��" }, { 12,"��� ������� ���" },
	{ 13,"���� ������� ���" }, { 14,"��������� ��� �� ����������" }, { 15,"������������� ���" },
	{ 16,"������� �� ������� ��� �� ��" }, { 17,"������� �� ������� ��� �� ��" }, { 18,"������� ��� �������� ������ �� �� �����������" },
	{ 19,"������� ��� �������� ������ �� �� �����������" }, { 20,"�� ������� �����������" },
	{ 21,"�� �������� �����������" }, { 22,"��� ��������� �� �� �����������" }, { 23,"��� ��������� �� �� �����������" },
	{ 24,"������� �������������� �����" }, { 25,"�������������� ����� ��������" },
	{ 26,"���� ������ ������ '��������� ��'" }, { 27,"���� ������ ������ '������������ ������'" }, { 28,"���� ������ ������ '�������� ���'" },
	{ 29,"����������� ���������� �� ����" }, { 31,"��������� �������� ������������" },
	{ 32,"��������� ����" }, { 33,"��������� ��" }, { 34,"������� �� ��������� ���" },
	{ 35,"���������� ���" }, { 36,"���������� ���" }, { 37,"������� �� ������� ��� �� �� ������" },
	{ 38,"������� �� ������� ��� �� �� ������" }, { 54,"���������" },
	{ 55,"������ ������������" }, { 61,"�������� ������ �������" },
	{ 100,"DgnPLC: ��� ��� ����� CMOS05" }, { 101,"DgnPLC:������ ������ ����� � ��" },
	{ 102,"DgnPLC:�� ����� ��" }, { 103,"DgnPLC:����� ����� ��������� ������� (RTC)" },
	{ 104,"DgnPLC:������� �������� ������ ����� PC104 �� ��������������� - ������ ��� �� ��������������" },
	{ 105,"DgnPLC:������ 5" }, { 106,"DgnPLC:���������� ������������� ������� �����" }, { 107,"DgnPLC:������ 7" },
	{ 108,"DgnPLC:������� �� �� ������� ���(����������� �������������)" }, { 109,"DgnPLC:������ �����-������ (���) � ������� �������" },
	{ 110,"DgnPLC:������� ������������ UART C750 ��� ������������ ��� ������� ����������� � �������� ��" }, { 111,"DgnPLC:��� ����� � ����� �� ������������" },
	{ 112,"DgnPLC:������ �����-������ � ������� ������ �� ������������" }, { 113,"DgnPLC:������ ������ Modbus TCP/IP/Ethernet" },
	{ 114,"DgnPLC:������ ������� ����������� ������" }, { 115,"DgnPLC:������ 15" }
};*/

	Dictionary<int, String^>^ codes_aggregate; // ����������� ����� �������
	List<String^>^ aggregateList;
	/*{
		{1, "������� ����� ��"}, { 2,"������� ����� ��" }, { 3,"������� ����� ��" }, { 4,"�� ��������" }, { 5,"�� �������" },
		{ 6,"�� �����������" }, { 7,"������ �� " }, { 8,"������ ������ ��� ��" }, { 9,"������ ������ ���� ��" },
		{ 10,"������� �� '��������� ��'" }, { 11,"������� �� '�������� ��'" }, { 12,"�������������� � ���������� ����������� ���1" },
		{ 13,"�������������� � ���������� ����������� ���2" }, { 14,"�������� ���1" }, { 15,"�������� ���2" },
		{ 16,"������� '��������� �������' �� ��������� ���1" }, { 17,"������� '��������� �������' �� ��������� ���2" },
		{ 18,"������� '��������� �������' �� ����������" }, { 19,"������� ������" }, { 20,"������� ������������" },
		{ 21,"�������� ������" }, { 22,"������������ ������� ������" }, { 23,"��������� ������ a1" }, { 24,"��������� ������ a4" },
		{ 25,"��������� ������ b3" }, { 26,"��������� ������ b6" }, { 27,"��������� ������ c5" }, { 28,"��������� ������ c2" },
		{ 29,"���������� ���������������" }, { 30,"���������� (180�)" }, { 31,"������ �� ���" },
		{ 32,"����������� �� ���" }, { 33,"������ �� ���" }, { 34,"����������� �� ���" }, { 35,"������������� ��" },
		{ 36,"���� �� �������" }, { 37,"��� �� �������" }, { 38,"������� '������ 1'" }, { 39,"������� '������ 2'" },
		{ 40,"���� �� ������� � ��� �� ���" }, { 41,"�������� ������ �������" }, { 42,"���� '��������� �������' ����������" },
		{ 43,"���� '��������� �������' �� ����������" }, { 44,"������ ����� � ����" }, { 54,"���������" },
		{ 55,"������ ������������" }, { 100,"DgnPLC: ��� ��� ����� CMOS05" }, { 101,"DgnPLC:������ ������ ����� � ��" },
		{ 102,"DgnPLC:�� ����� ��" }, { 103,"DgnPLC:����� ����� ��������� ������� (RTC)" }, { 104,"DgnPLC:������� �������� ������ ����� PC104 �� ��������������� - ������ ��� �� ��������������" },
		{ 105,"DgnPLC:������ 5" }, { 106,"DgnPLC:���������� ������������� ������� �����" }, { 107,"DgnPLC:������ 7" },
		{ 108,"DgnPLC:������� �� �� ������� ���(����������� �������������)" }, { 109,"DgnPLC:������ �����-������ (���) � ������� �������" },
		{ 110,"DgnPLC:������� ������������ UART C750 ��� ������������ ��� ������� ����������� � �������� ��" },
		{ 111,"DgnPLC:��� ����� � ����� �� ������������" }, { 112,"DgnPLC:������ �����-������ � ������� ������ �� ������������" },
		{ 113,"DgnPLC:������ ������ Modbus TCP/IP/Ethernet" }, { 114,"DgnPLC:������ ������� ����������� ������" }, { 115,"DgnPLC:������ 15" }
	};*/

	Dictionary<int, String^>^ codes_control2; // ����������� ����� ���� ���������� ��2
	List<String^>^ controlList2;
	/*{
		{1, "���� 1 �������"}, { 2,"���� 2 �������" }, { 3,"���� 1 ��������" }, { 4,"���� 2 ��������" }, { 5,"��� � �������� ������" }, { 6,"��� ���������" },
		{ 7,"����� ���" }, { 8,"��� �� �����" }, { 9,"���� �� �����" }, { 10,"��� ������� ���" }, { 11,"���� ������� ���" }, { 12,"��� ��������" },
		{ 13,"��� �������" }, { 14,"��� ���� 1" }, { 15,"��� ����2" }, { 16,"����� �� ���� 1" }, { 17,"����� �� ���� 1" }, { 18,"����� �� ���� 2" },
		{ 19,"����� �� ���� 2" }, { 20,"���� ���������� ���� 2" }, { 21,"��� ���������� ���� 2" }, { 22,"���� �� ��� 1" }, { 23,"��� �� ��� 1" }, { 24,"���� �� ��� 2" },
		{ 25,"��� �� ��� 2" }, { 26,"������� �� '�������� ���� 1'" }, { 27,"������� �� '�������� ���� 2'" }, { 28,"������� �� '��������� ���� 1'" },
		{ 29,"������� �� '��������� ���� 2'" }, { 30,"�� ����� ����" }, { 31,"U ���� 'AB'' �� �����" },
		{ 32,"U ���� '�C' �� �����" }, { 33,"U ���� '�A' �� �����" }, { 34,"������ ����� � ����" }, { 35,"����� ��" }, { 54,"������ ���" },
		{ 55,"������� �� ��� ���. ���. ���� 1" }, { 56,"������� �� ���  ���. ���. ���� 2" }, { 58,"������� �� ���  ���. ����. ���� 1" },
		{ 59,"������� �� ���  ���. ����. ���� 2" }, { 61,"�������� ������ �������" },
		{ 100,"DgnPLC: ��� ��� ����� CMOS05" }, { 101,"DgnPLC:������ ������ ����� � ��" }, { 102,"DgnPLC:�� ����� ��" }, { 103,"DgnPLC:����� ����� ��������� ������� (RTC)" },
		{ 104,"DgnPLC:������� �������� ������ ����� PC104 �� ��������������� - ������ ��� �� ��������������" }, { 105,"DgnPLC:������ 5" }, { 106,"DgnPLC:���������� ������������� ������� �����" },
		{ 107,"DgnPLC:������ 7" }, { 108,"DgnPLC:������� �� �� ������� ���(����������� �������������)" }, { 109,"DgnPLC:������ �����-������ (���) � ������� �������" },
		{ 110,"DgnPLC:������� ������������ UART C750 ��� ������������ ��� ������� ����������� � �������� ��" }, { 111,"DgnPLC:��� ����� � ����� �� ������������" },
		{ 112,"DgnPLC:������ �����-������ � ������� ������ �� ������������" }, { 113,"DgnPLC:������ ������ Modbus TCP/IP/Ethernet" }, { 114,"DgnPLC:������ ������� ����������� ������" },
		{ 115,"DgnPLC:������ 15" }
	};*/

	Dictionary<int, String^>^ codes_control3_tp4; // ����������� ����� ���� ���������� ��3 ��4
	List<String^>^ controlList3_tp4;
	/*{
		{1, "���� 1 �������"}, { 2,"���� 2 �������" }, { 3,"���� 1 ��������" }, { 4,"���� 2 ��������" }, { 8,"��� �� �����" }, { 9,"���� �� �����" }, { 12,"��� ��������" },
		{ 13,"��� �������" }, { 14,"��� ���� 1" }, { 15,"��� ����2" }, { 16,"����� �� ���� 1" }, { 17,"����� �� ���� 1" }, { 18,"����� �� ���� 2" }, { 19,"����� �� ���� 2" },
		{ 20,"���� ���������� ���� 2" }, { 21,"��� ���������� ���� 2" }, { 22,"���� �� ��� 1" }, { 23,"��� �� ��� 1" }, { 24,"���� �� ��� 2" },
		{ 25,"��� �� ��� 2" }, { 26,"������� �� '�������� ���� 1'" }, { 27,"������� �� '�������� ���� 2'" }, { 28,"������� �� '��������� ���� 1'" },
		{ 29,"������� �� '��������� ���� 2'" }, { 30,"�� ����� ����" }, { 31,"U ���� 'AB' �� �����" },
		{ 32,"U ���� '�C' �� �����" }, { 33,"U ���� '�A' �� �����" }, { 34,"������ ����� � ����" }, { 35,"����� ��" }, { 36,"���� 3 �������" }, { 37,"���� 3 ��������" },
		{ 38,"��� ���� 3" }, { 39,"����� �� ���� 3" }, { 40,"����� �� ���� 3" }, { 41,"���� �� ��� 3" }, { 42,"��� �� ��� 3" }, { 43,"������� �� '�������� ���� 3'" },
		{ 44,"������� �� '��������� ���� 3'" }, { 45,"��� 1-2 � �������� ������" }, { 46,"��� 3-2 � �������� ������" }, { 47,"��� 45 � �������� ������" },
		{ 48,"���1-2 ���������" }, { 49,"���3-2 ���������" }, { 50,"���45 ���������" }, { 51,"����� ���1-2" }, { 52,"����� ���3-2" }, { 53,"����� ���45" },
		{ 54,"������ ���" }, { 55,"������� �� ��� ���. ���. ���� 1" }, { 56,"������� �� ���  ���. ���. ���� 2" }, { 57,"������� �� ���  ���. ���. ���� 3" },
		{ 58,"������� �� ���  ���. ����. ���� 1" }, { 59,"������� �� ���  ���. ����. ���� 2" }, { 60,"������� �� ���  ���. ����. ���� 3" },
		{ 61,"�������� ������ �������" }, { 62,"���� ������� ��� ��� 1-2" }, { 63,"���� ������� ��� ��� 3-2" }, { 64,"���� ������� ��� ��� 45" },
		{ 65,"��� ������� ��� ��� 1-2" }, { 66,"��� ������� ��� ��� 3-2" }, { 67,"��� ������� ��� ��� 45" },
		{ 100,"DgnPLC: ��� ��� ����� CMOS05" }, { 101,"DgnPLC:������ ������ ����� � ��" }, { 102,"DgnPLC:�� ����� ��" }, { 103,"DgnPLC:����� ����� ��������� ������� (RTC)" },
		{ 104,"DgnPLC:������� �������� ������ ����� PC104 �� ��������������� - ������ ��� �� ��������������" }, { 105,"DgnPLC:������ 5" }, { 106,"DgnPLC:���������� ������������� ������� �����" },
		{ 107,"DgnPLC:������ 7" }, { 108,"DgnPLC:������� �� �� ������� ���(����������� �������������)" }, { 109,"DgnPLC:������ �����-������ (���) � ������� �������" },
		{ 110,"DgnPLC:������� ������������ UART C750 ��� ������������ ��� ������� ����������� � �������� ��" }, { 111,"DgnPLC:��� ����� � ����� �� ������������" },
		{ 112,"DgnPLC:������ �����-������ � ������� ������ �� ������������" }, { 113,"DgnPLC:������ ������ Modbus TCP/IP/Ethernet" },
		{ 114,"DgnPLC:������ ������� ����������� ������" }, { 115,"DgnPLC:������ 15" }
	};*/

	Dictionary<int, String^>^ codes_control3_tp41; // ����������� ����� ���� ���������� ��3 ��41
	List<String^>^ controlList3_tp41;
	/*{
		{1,"���� 1 �������"},{2,"���� 2 �������"},{3,"���� 1 ��������"},{4,"���� 2 ��������"},{8,"��� �� �����"},{9,"���� �� �����"},{12,"��� ��������"},
		{13,"��� �������"},{14,"��� ���� 1"},{15,"��� ����2"},{16,"����� �� ���� 1"},{17,"����� �� ���� 1"},{18,"����� �� ���� 2"},{19,"����� �� ���� 2"},
		{20,"���� ���������� ���� 2"},{21,"��� ���������� ���� 2"},{22,"���� �� ��� 1"},{23,"��� �� ��� 1"},{24,"���� �� ��� 2"},
		{25,"��� �� ��� 2"},{26,"������� �� '�������� ���� 1'"},{27,"������� �� '�������� ���� 2'"},{28,"������� �� '��������� ���� 1'"},
		{29,"������� �� '��������� ���� 2'"},{30,"�� ����� ����"},{31,"U ���� 'AB' �� �����"},
		{32,"U ���� '�C' �� �����"},{33,"U ���� '�A' �� �����"},{34,"������ ����� � ����"},{35,"����� ��"},{36,"���� 3 �������"},
		{37,"���� 3 ��������"},{38,"��� ���� 3"},{39,"����� �� ���� 3"},{40,"����� �� ���� 3"},{41,"���� �� ��� 3"},{42,"��� �� ��� 3"},
		{43,"������� �� '�������� ���� 3'"},{44,"������� �� '��������� ���� 3'"},{45,"��� 1-2 � �������� ������"},{46,"��� 2-3 � �������� ������"},
		{47,"��� 1-3 � �������� ������"},{48,"���1-2 ���������"},{49,"���2-3 ���������"},{50,"���1-3 ���������"},{51,"����� ���1-2"},
		{52,"����� ���2-3"},{53,"����� ���1-3"},{54,"������ ���"},{55,"������� �� ��� ���. ���. ���� 1"},{56,"������� �� ���  ���. ���. ���� 2"},
		{57,"������� �� ���  ���. ���. ���� 3"},{58,"������� �� ���  ���. ����. ���� 1"},{59,"������� �� ���  ���. ����. ���� 2"},
		{60,"������� �� ���  ���. ����. ���� 3"},{61,"�������� ������ �������"},{62,"���� ������� ��� ��� 1-2"},{63,"���� ������� ��� ��� 2-3"},
		{64,"���� ������� ��� ��� 1-3"},{65,"��� ������� ��� ��� 1-2"},{66,"��� ������� ��� ��� 2-3"},{67,"��� ������� ��� ��� 1-3"},
		{100,"DgnPLC: ��� ��� ����� CMOS05"},{101,"DgnPLC:������ ������ ����� � ��"},{102,"DgnPLC:�� ����� ��"},{103,"DgnPLC:����� ����� ��������� ������� (RTC)"},
		{104,"DgnPLC:������� �������� ������ ����� PC104 �� ��������������� - ������ ��� �� ��������������"},{105,"DgnPLC:������ 5"},{106,"DgnPLC:���������� ������������� ������� �����"},
		{107,"DgnPLC:������ 7"},{108,"DgnPLC:������� �� �� ������� ���(����������� �������������)"},{109,"DgnPLC:������ �����-������ (���) � ������� �������"},
		{110,"DgnPLC:������� ������������ UART C750 ��� ������������ ��� ������� ����������� � �������� ��"},{111,"DgnPLC:��� ����� � ����� �� ������������"},
		{112,"DgnPLC:������ �����-������ � ������� ������ �� ������������"},{113,"DgnPLC:������ ������ Modbus TCP/IP/Ethernet"},
		{114,"DgnPLC:������ ������� ����������� ������"},{115,"DgnPLC:������ 15"}
	};*/

	Dictionary<int, String^>^ codes_control3_tp16; // ����������� ����� ���� ���������� ��3 ��16
	List<String^>^ controlList3_tp16;
	/*{
		{1,"���� 1 �������"},{2,"���� 2 �������"},{3,"���� 1 ��������"},{4,"���� 2 ��������"},{8,"��� �� �����"},{9,"���� �� �����"},{12,"��� ��������"},
		{13,"��� �������"},{14,"��� ��� ���� ���� 1"},{16,"����� �� ���� 1"},{17,"����� �� ���� 1"},{18,"����� �� ���� 2"},{19,"����� �� ���� 2"},
		{20,"���� ���������� ���� 2"},{21,"��� ���������� ���� 2"},{22,"���� �� ��� 1"},{23,"��� �� ��� 1"},{24,"���� �� ��� 2"},
		{25,"��� �� ��� 2"},{26,"������� �� '�������� ���� 1'"},{27,"������� �� '�������� ���� 2'"},{28,"������� �� '��������� ���� 1'"},
		{29,"������� �� '��������� ���� 2'"},{30,"�� ����� ����"},{31,"U ���� 'AB' �� �����"},
		{32,"U ���� '�C' �� �����"},{33,"U ���� '�A' �� �����"},{34,"������ ����� � ����"},{35,"����� ��"},{36,"���� 3 �������"},
		{37,"���� 3 ��������"},{38,"��� ��� ���� ���� 3"},{39,"����� �� ���� 3"},{40,"����� �� ���� 3"},{41,"���� �� ��� 3"},{42,"��� �� ���3"},
		{43,"������� �� '�������� ���� 3'"},{44,"������� �� '��������� ���� 3'"},{45,"��� 1 � �������� ������"},{46,"��� 2 � �������� ������"},
		{47,"��� 3 � �������� ������"},{48,"���1 ���������"},{49,"���2 ���������"},{50,"���3 ���������"},{51,"����� ���1"},{52,"����� ���2"},{53,"����� ���3"},
		{54,"������ ���"},{55,"������� �� ��� ���. ���. ���� 1"},{56,"������� �� ���  ���. ���. ���� 2"},{57,"������� �� ���  ���. ���. ���� 3"},
		{58,"������� �� ���  ���. ����. ���� 1"},{59,"������� �� ���  ���. ����. ���� 2"},{60,"������� �� ���  ���. ����. ���� 3"},
		{61,"�������� ������ �������"},{62,"���� ������� ��� ��� 1"},{63,"���� ������� ��� ��� 2"},{64,"���� ������� ��� ��� 3"},
		{65,"��� ������� ��� ��� 1"},{66,"��� ������� ��� ��� 2"},{67,"��� ������� ��� ��� 3"},
		{100,"DgnPLC: ��� ��� ����� CMOS05"},{101,"DgnPLC:������ ������ ����� � ��"},{102,"DgnPLC:�� ����� ��"},{103,"DgnPLC:����� ����� ��������� ������� (RTC)"},
		{104,"DgnPLC:������� �������� ������ ����� PC104 �� ��������������� - ������ ��� �� ��������������"},{105,"DgnPLC:������ 5"},
		{106,"DgnPLC:���������� ������������� ������� �����"},{107,"DgnPLC:������ 7"},{108,"DgnPLC:������� �� �� ������� ���(����������� �������������)"},
		{109,"DgnPLC:������ �����-������ (���) � ������� �������"},{110,"DgnPLC:������� ������������ UART C750 ��� ������������ ��� ������� ����������� � �������� ��"},
		{111,"DgnPLC:��� ����� � ����� �� ������������"},{112,"DgnPLC:������ �����-������ � ������� ������ �� ������������"},
		{113,"DgnPLC:������ ������ Modbus TCP/IP/Ethernet"},{114,"DgnPLC:������ ������� ����������� ������"},{115,"DgnPLC:������ 15"}
	};*/
};

