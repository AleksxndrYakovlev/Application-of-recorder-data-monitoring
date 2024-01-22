#include "CodeMsg.h"

using namespace System::Collections::Generic;


// ��������� ������� 
String^ CodeMsg::getNote(int device_number,int code)
{
	String^ note = "";
	switch (device_number)
	{
	case 1:
		codes_cell->TryGetValue(code,note);
		break;
	case 2:
		codes_aggregate->TryGetValue(code, note);
		break;
	case 3:
		codes_control2->TryGetValue(code, note);
		break;
	case 4:
		codes_control3_tp4->TryGetValue(code, note);
		break;
	case 5:
		codes_control3_tp41->TryGetValue(code, note);
		break;
	case 6:
		codes_control3_tp16->TryGetValue(code, note);
		break;
	default:
		break;
	}
	return note;
}

List<String^>^ CodeMsg::getList(int device_number)
{
	switch (device_number)
	{
	case 1:
		return cellList;
		break;
	case 2:
		return aggregateList;
		break;
	case 3:
		return controlList2;
		break;
	case 4:
		return controlList3_tp4;
		break;
	case 5:
		return controlList3_tp41;
		break;
	case 6:
		return controlList3_tp16;
		break;
	default:
		break;
	}
}

CodeMsg^ CodeMsg::getInstance()
{
	if (!instance)
	{
		instance = gcnew CodeMsg();
	}
	return instance;
}

CodeMsg::CodeMsg()
{
	// ����������� �������� ������
	codes_cell = gcnew Dictionary<int, String^>();
	
	codes_cell->Add(1, "�� �������"); codes_cell->Add(14, "��������� ��� �� ����������"); codes_cell->Add(27, "���� ������ ������ '������������ ������'"); codes_cell->Add(61, "�������� ������ �������");
	codes_cell->Add(2, "�� ��������"); codes_cell->Add(15, "������������� ���"); codes_cell->Add(28, "���� ������ ������ '�������� ���'"); codes_cell->Add(100, "DgnPLC: ��� ��� ����� CMOS05");
	codes_cell->Add(3, "��� ������� ��"); codes_cell->Add(16, "������� �� ������� ��� �� ��"); codes_cell->Add(29, "����������� ���������� �� ����"); codes_cell->Add(101, "DgnPLC:������ ������ ����� � ��");
	codes_cell->Add(4, "���� ������� ��"); codes_cell->Add(17, "������� �� ������� ��� �� ��"); codes_cell->Add(31, "��������� �������� ������������"); codes_cell->Add(102, "DgnPLC:�� ����� ��");
	codes_cell->Add(5, "������� �� ��������� ��"); codes_cell->Add(18, "������� ��� �������� ������ �� �� �����������"); codes_cell->Add(32, "��������� ����"); codes_cell->Add(103, "DgnPLC:����� ����� ��������� ������� (RTC)");
	codes_cell->Add(6, "������� �� ���������� ��"); codes_cell->Add(19, "������� ��� �������� ������ �� �� �����������"); codes_cell->Add(33, "��������� ��"); codes_cell->Add(104, "DgnPLC:������� �������� ������ ����� PC104 �� ��������������� - ������ ��� �� ��������������");
	codes_cell->Add(7, "������������� ��"); codes_cell->Add(20, "�� ������� �����������"); codes_cell->Add(34, "������� �� ��������� ���"); codes_cell->Add(105, "DgnPLC:������ 5");
	codes_cell->Add(8, "������ ��"); codes_cell->Add(21, "�� �������� �����������"); codes_cell->Add(35, "���������� ���"); codes_cell->Add(106, "DgnPLC:���������� ������������� ������� �����");
	codes_cell->Add(9, "��������� �� �� ����������"); codes_cell->Add(22, "��� ��������� �� �� �����������"); codes_cell->Add(36, "���������� ���"); codes_cell->Add(107, "DgnPLC:������ 7");
	codes_cell->Add(10, "��� �� ��"); codes_cell->Add(23, "��� ��������� �� �� �����������"); codes_cell->Add(37, "������� �� ������� ��� �� �� ������"); codes_cell->Add(1, "�� �������");
	codes_cell->Add(11, "��� �� ��"); codes_cell->Add(24, "������� �������������� �����"); codes_cell->Add(38, "������� �� ������� ��� �� �� ������"); codes_cell->Add(108, "DgnPLC:������� �� �� ������� ���(����������� �������������)");
	codes_cell->Add(12, "��� ������� ���"); codes_cell->Add(25, "�������������� ����� ��������"); codes_cell->Add(54, "���������"); codes_cell->Add(109, "DgnPLC:������ �����-������ (���) � ������� �������");
	codes_cell->Add(13, "���� ������� ���"); codes_cell->Add(26, "���� ������ ������ '��������� ��'"); codes_cell->Add(55, "������ ������������"); codes_cell->Add(110, "DgnPLC:������� ������������ UART C750 ��� ������������ ��� ������� ����������� � �������� ��");
	codes_cell->Add(111, "DgnPLC:��� ����� � ����� �� ������������"); codes_cell->Add(112, "DgnPLC:������ �����-������ � ������� ������ �� ������������"); 
	codes_cell->Add(113, "DgnPLC:������ ������ Modbus TCP/IP/Ethernet"); codes_cell->Add(114, "DgnPLC:������ ������� ����������� ������"); codes_cell->Add(115, "DgnPLC:������ 15");

	cellList->Add(codes_cell->Values->ToString());


	// ����������� �������
	codes_aggregate = gcnew Dictionary<int, String^>();
	codes_aggregate->Add(1, "������� ����� ��"); codes_aggregate->Add(2, "������� ����� ��"); codes_aggregate->Add(3, "������� ����� ��"); codes_aggregate->Add(4, "�� ��������");
	codes_aggregate->Add(5, "�� �������"); codes_aggregate->Add(6, "�� �����������"); codes_aggregate->Add(7, "������ �� "); codes_aggregate->Add(8, "������ ������ ��� ��");
	codes_aggregate->Add(9, "������ ������ ���� ��"); codes_aggregate->Add(10, "������� �� '��������� ��'"); codes_aggregate->Add(11, "������� �� '�������� ��'"); codes_aggregate->Add(12, "�������������� � ���������� ����������� ���1");
	codes_aggregate->Add(13, "�������������� � ���������� ����������� ���2"); codes_aggregate->Add(14, "�������� ���1"); codes_aggregate->Add(15, "�������� ���2"); codes_aggregate->Add(16, "������� '��������� �������' �� ��������� ���1");
	codes_aggregate->Add(17, "������� '��������� �������' �� ��������� ���2"); codes_aggregate->Add(18, "������� '��������� �������' �� ����������"); codes_aggregate->Add(19, "������� ������"); codes_aggregate->Add(20, "������� ������������");
	codes_aggregate->Add(21, "�������� ������"); codes_aggregate->Add(22, "������������ ������� ������"); codes_aggregate->Add(23, "��������� ������ a1"); codes_aggregate->Add(24, "��������� ������ a4");
	codes_aggregate->Add(25, "��������� ������ b3"); codes_aggregate->Add(26, "��������� ������ b6"); codes_aggregate->Add(27, "��������� ������ c5"); codes_aggregate->Add(28, "��������� ������ c2");
	codes_aggregate->Add(29, "���������� ���������������"); codes_aggregate->Add(30, "���������� (180�)"); codes_aggregate->Add(31, "������ �� ���"); codes_aggregate->Add(32, "����������� �� ���");
	codes_aggregate->Add(33, "������ �� ���"); codes_aggregate->Add(34, "����������� �� ���"); codes_aggregate->Add(35, "������������� ��"); codes_aggregate->Add(36, "���� �� �������");
	codes_aggregate->Add(37, "��� �� �������"); codes_aggregate->Add(38, "������� '������ 1'"); codes_aggregate->Add(39, "������� '������ 2'"); codes_aggregate->Add(40, "���� �� ������� � ��� �� ���");
	codes_aggregate->Add(41, "�������� ������ �������"); codes_aggregate->Add(42, "���� '��������� �������' ����������"); codes_aggregate->Add(43, "���� '��������� �������' �� ����������"); codes_aggregate->Add(44, "������ ����� � ����");
	codes_aggregate->Add(54, "���������"); codes_aggregate->Add(55, "������ ������������"); codes_aggregate->Add(100, "DgnPLC: ��� ��� ����� CMOS05"); codes_aggregate->Add(101, "DgnPLC:������ ������ ����� � ��");
	codes_aggregate->Add(102, "DgnPLC:�� ����� ��"); codes_aggregate->Add(103, "DgnPLC:����� ����� ��������� ������� (RTC)"); codes_aggregate->Add(104, "DgnPLC:������� �������� ������ ����� PC104 �� ��������������� - ������ ��� �� ��������������"); codes_aggregate->Add(105, "DgnPLC:������ 5");
	codes_aggregate->Add(106, "DgnPLC:���������� ������������� ������� �����"); codes_aggregate->Add(107, "DgnPLC:������ 7"); codes_aggregate->Add(108, "DgnPLC:������� �� �� ������� ���(����������� �������������)"); codes_aggregate->Add(109, "DgnPLC:������ �����-������ (���) � ������� �������");
	codes_aggregate->Add(110, "DgnPLC:������� ������������ UART C750 ��� ������������ ��� ������� ����������� � �������� ��"); codes_aggregate->Add(111, "DgnPLC:��� ����� � ����� �� ������������");
	codes_aggregate->Add(112, "DgnPLC:������ �����-������ � ������� ������ �� ������������"); codes_aggregate->Add(113, "DgnPLC:������ ������ Modbus TCP/IP/Ethernet");
	codes_aggregate->Add(114, "DgnPLC:������ ������� ����������� ������"); codes_aggregate->Add(115, "DgnPLC:������ 15");
	
	aggregateList->Add(codes_aggregate->Values->ToString());

	// ����������� ���� ���������� ��2
	codes_control2 = gcnew Dictionary<int, String^>();
	codes_control2->Add(1, "���� 1 �������"); codes_control2->Add(2, "���� 2 �������"); codes_control2->Add(3, "���� 1 ��������"); codes_control2->Add(4, "���� 2 ��������");
	codes_control2->Add(5, "��� � �������� ������"); codes_control2->Add(6, "��� ���������"); codes_control2->Add(7, "����� ���"); codes_control2->Add(8, "��� �� �����");
	codes_control2->Add(9, "���� �� �����"); codes_control2->Add(10, "��� ������� ���"); codes_control2->Add(11, "���� ������� ���"); codes_control2->Add(12, "��� ��������");
	codes_control2->Add(13, "��� �������"); codes_control2->Add(14, "��� ���� 1"); codes_control2->Add(15, "��� ����2"); codes_control2->Add(16, "����� �� ���� 1");
	codes_control2->Add(17, "����� �� ���� 1"); codes_control2->Add(18, "����� �� ���� 2"); codes_control2->Add(19, "����� �� ���� 2"); codes_control2->Add(20, "���� ���������� ���� 2");
	codes_control2->Add(21, "��� ���������� ���� 2"); codes_control2->Add(22, "���� �� ��� 1"); codes_control2->Add(23, "��� �� ��� 1"); codes_control2->Add(24, "���� �� ��� 2");
	codes_control2->Add(25, "��� �� ��� 2"); codes_control2->Add(26, "������� �� '�������� ���� 1'"); codes_control2->Add(27, "������� �� '�������� ���� 2'"); codes_control2->Add(28, "������� �� '��������� ���� 1'");
	codes_control2->Add(29, "������� �� '��������� ���� 2'"); codes_control2->Add(30, "�� ����� ����"); codes_control2->Add(31, "U ���� 'AB'' �� �����"); codes_control2->Add(32, "U ���� '�C' �� �����");
	codes_control2->Add(33, "U ���� '�A' �� �����"); codes_control2->Add(34, "������ ����� � ����"); codes_control2->Add(35, "����� ��"); codes_control2->Add(54, "������ ���");
	codes_control2->Add(55, "������� �� ��� ���. ���. ���� 1"); codes_control2->Add(56, "������� �� ���  ���. ���. ���� 2"); codes_control2->Add(58, "������� �� ���  ���. ����. ���� 1"); codes_control2->Add(59, "������� �� ���  ���. ����. ���� 2");
	codes_control2->Add(61, "�������� ������ �������"); codes_control2->Add(100, "DgnPLC: ��� ��� ����� CMOS05"); codes_control2->Add(101, "DgnPLC:������ ������ ����� � ��"); codes_control2->Add(102, "DgnPLC:�� ����� ��");
	codes_control2->Add(103, "DgnPLC:����� ����� ��������� ������� (RTC)"); codes_control2->Add(104, "DgnPLC:������� �������� ������ ����� PC104 �� ��������������� - ������ ��� �� ��������������"); 
	codes_control2->Add(105, "DgnPLC:������ 5"); codes_control2->Add(106, "DgnPLC:���������� ������������� ������� �����"); codes_control2->Add(107, "DgnPLC:������ 7"); codes_control2->Add(108, "DgnPLC:������� �� �� ������� ���(����������� �������������)");
	codes_control2->Add(109, "DgnPLC:������ �����-������ (���) � ������� �������"); codes_control2->Add(110, "DgnPLC:������� ������������ UART C750 ��� ������������ ��� ������� ����������� � �������� ��"); 
	codes_control2->Add(111, "DgnPLC:��� ����� � ����� �� ������������"); codes_control2->Add(112, "DgnPLC:������ �����-������ � ������� ������ �� ������������");
	codes_control2->Add(113, "DgnPLC:������ ������ Modbus TCP/IP/Ethernet"); codes_control2->Add(114, "DgnPLC:������ ������� ����������� ������"); 
	codes_control2->Add(115, "DgnPLC:������ 15");
	
	controlList2->Add(codes_control2->Values->ToString());
	
	// ����������� ���� ���������� ��3_��4
	codes_control3_tp4 = gcnew Dictionary<int,String^>();

	codes_control3_tp4->Add(1, "���� 1 �������"); codes_control3_tp4->Add(2, "���� 2 �������"); codes_control3_tp4->Add(3, "���� 1 ��������"); codes_control3_tp4->Add(4, "���� 2 ��������");
	codes_control3_tp4->Add(8, "��� �� �����"); codes_control3_tp4->Add(9, "���� �� �����"); codes_control3_tp4->Add(12, "��� ��������"); codes_control3_tp4->Add(13, "��� �������");
	codes_control3_tp4->Add(14, "��� ���� 1"); codes_control3_tp4->Add(15, "��� ����2"); codes_control3_tp4->Add(16, "����� �� ���� 1"); codes_control3_tp4->Add(17, "����� �� ���� 1");
	codes_control3_tp4->Add(18, "����� �� ���� 2"); codes_control3_tp4->Add(19, "����� �� ���� 2"); codes_control3_tp4->Add(20, "���� ���������� ���� 2"); codes_control3_tp4->Add(21, "��� ���������� ���� 2");
	codes_control3_tp4->Add(22, "���� �� ��� 1"); codes_control3_tp4->Add(23, "��� �� ��� 1"); codes_control3_tp4->Add(24, "���� �� ��� 2"); codes_control3_tp4->Add(25, "��� �� ��� 2");
	codes_control3_tp4->Add(26, "������� �� '�������� ���� 1'"); codes_control3_tp4->Add(27, "������� �� '�������� ���� 2'"); codes_control3_tp4->Add(28, "������� �� '��������� ���� 1'"); codes_control3_tp4->Add(29, "������� �� '��������� ���� 2'");
	codes_control3_tp4->Add(30, "�� ����� ����"); codes_control3_tp4->Add(31, "U ���� 'AB' �� �����"); codes_control3_tp4->Add(32, "U ���� '�C' �� �����"); codes_control3_tp4->Add(33, "U ���� '�A' �� �����");
	codes_control3_tp4->Add(34, "������ ����� � ����"); codes_control3_tp4->Add(35, "����� ��"); codes_control3_tp4->Add(36, "���� 3 �������"); codes_control3_tp4->Add(37, "���� 3 ��������");
	codes_control3_tp4->Add(38, "��� ���� 3"); codes_control3_tp4->Add(39, "����� �� ���� 3"); codes_control3_tp4->Add(40, "����� �� ���� 3"); codes_control3_tp4->Add(41, "���� �� ��� 3");
	codes_control3_tp4->Add(42, "��� �� ��� 3"); codes_control3_tp4->Add(43, "������� �� '�������� ���� 3'"); codes_control3_tp4->Add(44, "������� �� '��������� ���� 3'"); codes_control3_tp4->Add(45, "��� 1-2 � �������� ������");
	codes_control3_tp4->Add(46, "��� 3-2 � �������� ������"); codes_control3_tp4->Add(47, "��� 45 � �������� ������"); codes_control3_tp4->Add(48, "���1-2 ���������"); codes_control3_tp4->Add(49, "���3-2 ���������");
	codes_control3_tp4->Add(50, "���45 ���������"); codes_control3_tp4->Add(51, "����� ���1-2"); codes_control3_tp4->Add(52, "����� ���3-2"); codes_control3_tp4->Add(53, "����� ���45");
	codes_control3_tp4->Add(54, "������ ���"); codes_control3_tp4->Add(55, "������� �� ��� ���. ���. ���� 1"); codes_control3_tp4->Add(56, "������� �� ���  ���. ���. ���� 2"); codes_control3_tp4->Add(57, "������� �� ���  ���. ���. ���� 3");
	codes_control3_tp4->Add(58, "������� �� ���  ���. ����. ���� 1"); codes_control3_tp4->Add(59, "������� �� ���  ���. ����. ���� 2"); codes_control3_tp4->Add(60, "������� �� ���  ���. ����. ���� 3"); codes_control3_tp4->Add(61, "�������� ������ �������");
	codes_control3_tp4->Add(62, "���� ������� ��� ��� 1-2"); codes_control3_tp4->Add(63, "���� ������� ��� ��� 3-2"); codes_control3_tp4->Add(64, "���� ������� ��� ��� 45"); codes_control3_tp4->Add(65, "��� ������� ��� ��� 1-2");
	codes_control3_tp4->Add(66, "��� ������� ��� ��� 3-2"); codes_control3_tp4->Add(67, "��� ������� ��� ��� 45"); codes_control3_tp4->Add(100, "DgnPLC: ��� ��� ����� CMOS05"); codes_control3_tp4->Add(101, "DgnPLC:������ ������ ����� � ��");
	codes_control3_tp4->Add(102, "DgnPLC:�� ����� ��"); codes_control3_tp4->Add(103, "DgnPLC:����� ����� ��������� ������� (RTC)"); codes_control3_tp4->Add(104, "DgnPLC:������� �������� ������ ����� PC104 �� ��������������� - ������ ��� �� ��������������"); 
	codes_control3_tp4->Add(105, "DgnPLC:������ 5");codes_control3_tp4->Add(106, "DgnPLC:���������� ������������� ������� �����"); codes_control3_tp4->Add(107, "DgnPLC:������ 7");
	codes_control3_tp4->Add(108, "DgnPLC:������� �� �� ������� ���(����������� �������������)"); codes_control3_tp4->Add(109, "DgnPLC:������ �����-������ (���) � ������� �������");
	codes_control3_tp4->Add(110, "DgnPLC:������� ������������ UART C750 ��� ������������ ��� ������� ����������� � �������� ��"); codes_control3_tp4->Add(111, "DgnPLC:��� ����� � ����� �� ������������");
	codes_control3_tp4->Add(112, "DgnPLC:������ �����-������ � ������� ������ �� ������������"); codes_control3_tp4->Add(113, "DgnPLC:������ ������ Modbus TCP/IP/Ethernet");
	codes_control3_tp4->Add(114, "DgnPLC:������ ������� ����������� ������"); codes_control3_tp4->Add(115, "DgnPLC:������ 15");
	
	controlList3_tp4->Add(codes_control3_tp4->Values->ToString());

	// ����������� ���� ���������� ��3_��41
	codes_control3_tp41 = gcnew Dictionary<int,String^>();

	codes_control3_tp41->Add(1, "���� 1 �������"); codes_control3_tp41->Add(2, "���� 2 �������"); codes_control3_tp41->Add(3, "���� 1 ��������"); codes_control3_tp41->Add(4, "���� 2 ��������");
	codes_control3_tp41->Add(8, "��� �� �����"); codes_control3_tp41->Add(9, "���� �� �����"); codes_control3_tp41->Add(12, "��� ��������"); codes_control3_tp41->Add(13, "��� �������");
	codes_control3_tp41->Add(14, "��� ���� 1"); codes_control3_tp41->Add(15, "��� ����2"); codes_control3_tp41->Add(16, "����� �� ���� 1"); codes_control3_tp41->Add(17, "����� �� ���� 1");
	codes_control3_tp41->Add(18, "����� �� ���� 2"); codes_control3_tp41->Add(19, "����� �� ���� 2"); codes_control3_tp41->Add(20, "���� ���������� ���� 2"); codes_control3_tp41->Add(21, "��� ���������� ���� 2");
	codes_control3_tp41->Add(22, "���� �� ��� 1"); codes_control3_tp41->Add(23, "��� �� ��� 1"); codes_control3_tp41->Add(24, "���� �� ��� 2"); codes_control3_tp41->Add(25, "��� �� ��� 2");
	codes_control3_tp41->Add(26, "������� �� '�������� ���� 1'"); codes_control3_tp41->Add(27, "������� �� '�������� ���� 2'"); codes_control3_tp41->Add(28, "������� �� '��������� ���� 1'"); codes_control3_tp41->Add(29, "������� �� '��������� ���� 2'");
	codes_control3_tp41->Add(30, "�� ����� ����"); codes_control3_tp41->Add(31, "U ���� 'AB' �� �����"); codes_control3_tp41->Add(32, "U ���� '�C' �� �����"); codes_control3_tp41->Add(33, "U ���� '�A' �� �����");
	codes_control3_tp41->Add(34, "������ ����� � ����"); codes_control3_tp41->Add(35, "����� ��"); codes_control3_tp41->Add(36, "���� 3 �������"); codes_control3_tp41->Add(37, "���� 3 ��������");
	codes_control3_tp41->Add(38, "��� ���� 3"); codes_control3_tp41->Add(39, "����� �� ���� 3"); codes_control3_tp41->Add(40, "����� �� ���� 3"); codes_control3_tp41->Add(41, "���� �� ��� 3");
	codes_control3_tp41->Add(42, "��� �� ��� 3"); codes_control3_tp41->Add(43, "������� �� '�������� ���� 3'"); codes_control3_tp41->Add(44, "������� �� '��������� ���� 3'"); codes_control3_tp41->Add(45, "��� 1-2 � �������� ������");
	codes_control3_tp41->Add(46, "��� 2-3 � �������� ������"); codes_control3_tp41->Add(47, "��� 1-3 � �������� ������"); codes_control3_tp41->Add(48, "���1-2 ���������"); codes_control3_tp41->Add(49, "���2-3 ���������");
	codes_control3_tp41->Add(50, "���1-3 ���������"); codes_control3_tp41->Add(51, "����� ���1-2"); codes_control3_tp41->Add(52, "����� ���2-3"); codes_control3_tp41->Add(53, "����� ���1-3");
	codes_control3_tp41->Add(54, "������ ���"); codes_control3_tp41->Add(55, "������� �� ��� ���. ���. ���� 1"); codes_control3_tp41->Add(56, "������� �� ���  ���. ���. ���� 2"); codes_control3_tp41->Add(57, "������� �� ���  ���. ���. ���� 3");
	codes_control3_tp41->Add(58, "������� �� ���  ���. ����. ���� 1"); codes_control3_tp41->Add(59, "������� �� ���  ���. ����. ���� 2"); codes_control3_tp41->Add(60, "������� �� ���  ���. ����. ���� 3"); codes_control3_tp41->Add(61, "�������� ������ �������");
	codes_control3_tp41->Add(62, "���� ������� ��� ��� 1-2"); codes_control3_tp41->Add(63, "���� ������� ��� ��� 2-3"); codes_control3_tp41->Add(64, "���� ������� ��� ��� 1-3"); codes_control3_tp41->Add(65, "��� ������� ��� ��� 1-2");
	codes_control3_tp41->Add(66, "��� ������� ��� ��� 2-3"); codes_control3_tp41->Add(67, "��� ������� ��� ��� 1-3"); codes_control3_tp41->Add(100, "DgnPLC: ��� ��� ����� CMOS05"); codes_control3_tp41->Add(101, "DgnPLC:������ ������ ����� � ��");
	codes_control3_tp41->Add(102, "DgnPLC:�� ����� ��"); codes_control3_tp41->Add(103, "DgnPLC:����� ����� ��������� ������� (RTC)"); codes_control3_tp41->Add(104, "DgnPLC:������� �������� ������ ����� PC104 �� ��������������� - ������ ��� �� ��������������"); 
	codes_control3_tp41->Add(105, "DgnPLC:������ 5");codes_control3_tp41->Add(106, "DgnPLC:���������� ������������� ������� �����"); codes_control3_tp41->Add(107, "DgnPLC:������ 7"); codes_control3_tp41->Add(108, "DgnPLC:������� �� �� ������� ���(����������� �������������)");
	codes_control3_tp41->Add(109, "DgnPLC:������ �����-������ (���) � ������� �������");codes_control3_tp41->Add(110, "DgnPLC:������� ������������ UART C750 ��� ������������ ��� ������� ����������� � �������� ��"); codes_control3_tp41->Add(111, "DgnPLC:��� ����� � ����� �� ������������");
	codes_control3_tp41->Add(112, "DgnPLC:������ �����-������ � ������� ������ �� ������������"); codes_control3_tp41->Add(113, "DgnPLC:������ ������ Modbus TCP/IP/Ethernet");
	codes_control3_tp41->Add(114, "DgnPLC:������ ������� ����������� ������"); codes_control3_tp41->Add(115, "DgnPLC:������ 15"); 

	controlList3_tp41->Add(codes_control3_tp41->Values->ToString());

	// ����������� ���� ���������� ��3_��16
	codes_control3_tp16 = gcnew Dictionary<int, String^>();

	codes_control3_tp16->Add(1, "���� 1 �������"); codes_control3_tp16->Add(2, "���� 2 �������"); codes_control3_tp16->Add(3, "���� 1 ��������"); codes_control3_tp16->Add(4, "���� 2 ��������");
	codes_control3_tp16->Add(8, "��� �� �����"); codes_control3_tp16->Add(9, "���� �� �����"); codes_control3_tp16->Add(12, "��� ��������"); codes_control3_tp16->Add(13, "��� �������");
	codes_control3_tp16->Add(14, "��� ��� ���� ���� 1"); codes_control3_tp16->Add(16, "����� �� ���� 1"); codes_control3_tp16->Add(17, "����� �� ���� 1"); codes_control3_tp16->Add(18, "����� �� ���� 2");
	codes_control3_tp16->Add(19, "����� �� ���� 2"); codes_control3_tp16->Add(20, "���� ���������� ���� 2"); codes_control3_tp16->Add(21, "��� ���������� ���� 2"); codes_control3_tp16->Add(22, "���� �� ��� 1");
	codes_control3_tp16->Add(23, "��� �� ��� 1"); codes_control3_tp16->Add(24, "���� �� ��� 2"); codes_control3_tp16->Add(25, "��� �� ��� 2"); codes_control3_tp16->Add(26, "������� �� '�������� ���� 1'");
	codes_control3_tp16->Add(27, "������� �� '�������� ���� 2'"); codes_control3_tp16->Add(28, "������� �� '��������� ���� 1'"); codes_control3_tp16->Add(29, "������� �� '��������� ���� 2'"); codes_control3_tp16->Add(30, "�� ����� ����");
	codes_control3_tp16->Add(31, "U ���� 'AB' �� �����"); codes_control3_tp16->Add(32, "U ���� '�C' �� �����"); codes_control3_tp16->Add(33, "U ���� '�A' �� �����"); codes_control3_tp16->Add(34, "������ ����� � ����");
	codes_control3_tp16->Add(35, "����� ��"); codes_control3_tp16->Add(36, "���� 3 �������"); codes_control3_tp16->Add(37, "���� 3 ��������"); codes_control3_tp16->Add(38, "��� ��� ���� ���� 3");
	codes_control3_tp16->Add(39, "����� �� ���� 3"); codes_control3_tp16->Add(40, "����� �� ���� 3"); codes_control3_tp16->Add(41, "���� �� ��� 3"); codes_control3_tp16->Add(42, "��� �� ���3");
	codes_control3_tp16->Add(43, "������� �� '�������� ���� 3'"); codes_control3_tp16->Add(44, "������� �� '��������� ���� 3'"); codes_control3_tp16->Add(45, "��� 1 � �������� ������"); codes_control3_tp16->Add(46, "��� 2 � �������� ������");
	codes_control3_tp16->Add(47, "��� 3 � �������� ������"); codes_control3_tp16->Add(48, "���1 ���������"); codes_control3_tp16->Add(49, "���2 ���������"); codes_control3_tp16->Add(50, "���3 ���������");
	codes_control3_tp16->Add(51, "����� ���1"); codes_control3_tp16->Add(52, "����� ���2"); codes_control3_tp16->Add(53, "����� ���3"); codes_control3_tp16->Add(54, "������ ���");
	codes_control3_tp16->Add(55, "������� �� ��� ���. ���. ���� 1"); codes_control3_tp16->Add(56, "������� �� ���  ���. ���. ���� 2"); codes_control3_tp16->Add(57, "������� �� ���  ���. ���. ���� 3");
	codes_control3_tp16->Add(58, "������� �� ���  ���. ����. ���� 1");
	codes_control3_tp16->Add(59, "������� �� ���  ���. ����. ���� 2"); codes_control3_tp16->Add(60, "������� �� ���  ���. ����. ���� 3"); codes_control3_tp16->Add(61, "�������� ������ �������"); codes_control3_tp16->Add(62, "���� ������� ��� ��� 1");
	codes_control3_tp16->Add(63, "���� ������� ��� ��� 2"); codes_control3_tp16->Add(64, "���� ������� ��� ��� 3"); codes_control3_tp16->Add(65, "��� ������� ��� ��� 1"); codes_control3_tp16->Add(66, "��� ������� ��� ��� 2");
	codes_control3_tp16->Add(67, "��� ������� ��� ��� 3"); codes_control3_tp16->Add(100, "DgnPLC: ��� ��� ����� CMOS05"); codes_control3_tp16->Add(101, "DgnPLC:������ ������ ����� � ��"); codes_control3_tp16->Add(102, "DgnPLC:�� ����� ��");
	codes_control3_tp16->Add(103, "DgnPLC:����� ����� ��������� ������� (RTC)"); codes_control3_tp16->Add(104, "DgnPLC:������� �������� ������ ����� PC104 �� ��������������� - ������ ��� �� ��������������");
	codes_control3_tp16->Add(105, "DgnPLC:������ 5"); codes_control3_tp16->Add(106, "DgnPLC:���������� ������������� ������� �����");
	codes_control3_tp16->Add(107, "DgnPLC:������ 7"); codes_control3_tp16->Add(108, "DgnPLC:������� �� �� ������� ���(����������� �������������)"); 
	codes_control3_tp16->Add(109, "DgnPLC:������ �����-������ (���) � ������� �������"); codes_control3_tp16->Add(110, "DgnPLC:������� ������������ UART C750 ��� ������������ ��� ������� ����������� � �������� ��");
	codes_control3_tp16->Add(111, "DgnPLC:��� ����� � ����� �� ������������"); codes_control3_tp16->Add(112, "DgnPLC:������ �����-������ � ������� ������ �� ������������"); 
	codes_control3_tp16->Add(113, "DgnPLC:������ ������ Modbus TCP/IP/Ethernet"); codes_control3_tp16->Add(114, "DgnPLC:������ ������� ����������� ������"); codes_control3_tp16->Add(115, "DgnPLC:������ 15");


	controlList3_tp16->Add(codes_control3_tp16->Values->ToString());
}
