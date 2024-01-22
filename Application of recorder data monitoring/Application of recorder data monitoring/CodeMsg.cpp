#include "CodeMsg.h"

using namespace System::Collections::Generic;


// Получение События 
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
	// Расшифровка Линейная ячейка
	codes_cell = gcnew Dictionary<int, String^>();
	
	codes_cell->Add(1, "АВ включен"); codes_cell->Add(14, "Положение ПЗШ не определено"); codes_cell->Add(27, "Была нажата кнопка 'Квитирование звонка'"); codes_cell->Add(61, "Успешный запуск системы");
	codes_cell->Add(2, "АВ отключен"); codes_cell->Add(15, "Неисправность ПЗШ"); codes_cell->Add(28, "Была нажата кнопка 'Проверка АПВ'"); codes_cell->Add(100, "DgnPLC: ОРИ или отказ CMOS05");
	codes_cell->Add(3, "Нет питания АВ"); codes_cell->Add(16, "Команда на перевод ПЗШ на ЗШ"); codes_cell->Add(29, "Отсутствует напряжение на шине"); codes_cell->Add(101, "DgnPLC:Ошибка чтения файла с РП");
	codes_cell->Add(4, "Есть питание АВ"); codes_cell->Add(17, "Команда на перевод ПЗШ на ОШ"); codes_cell->Add(31, "Сработала звуковая сигнализация"); codes_cell->Add(102, "DgnPLC:Не норма РП");
	codes_cell->Add(5, "Команда на включение АВ"); codes_cell->Add(18, "Перевод ПЗШ соседней ячейки на ЗШ диспетчером"); codes_cell->Add(32, "Сработала ТЗКС"); codes_cell->Add(103, "DgnPLC:Отказ часов реального времени (RTC)");
	codes_cell->Add(6, "Команда на отключение АВ"); codes_cell->Add(19, "Перевод ПЗШ соседней ячейки на ОШ диспетчером"); codes_cell->Add(33, "Сработала ЗЗ"); codes_cell->Add(104, "DgnPLC:Высокая скорость обмена через PC104 не устанавливается - модуль ПЛК не работоспособен");
	codes_cell->Add(7, "Неисправность АВ"); codes_cell->Add(20, "АВ включен диспетчером"); codes_cell->Add(34, "Команда на включение ЛНС"); codes_cell->Add(105, "DgnPLC:Резерв 5");
	codes_cell->Add(8, "Авария АВ"); codes_cell->Add(21, "АВ отключен диспетчером"); codes_cell->Add(35, "Отключение ЛНС"); codes_cell->Add(106, "DgnPLC:Превышение максимального времени скана");
	codes_cell->Add(9, "Положение АВ не определено"); codes_cell->Add(22, "ПЗШ переведен на ЗШ диспетчером"); codes_cell->Add(36, "Блокировка АПВ"); codes_cell->Add(107, "DgnPLC:Резерв 7");
	codes_cell->Add(10, "ПЗШ на ЗШ"); codes_cell->Add(23, "ПЗШ переведен на ОШ диспетчером"); codes_cell->Add(37, "Команда на перевод ПЗШ на ЗШ соседа"); codes_cell->Add(1, "АВ включен");
	codes_cell->Add(11, "ПЗШ на ОШ"); codes_cell->Add(24, "Включен автоматический режим"); codes_cell->Add(38, "Команда на перевод ПЗШ на ОШ соседа"); codes_cell->Add(108, "DgnPLC:Останов РП от команды СТП(применяется пользователем)");
	codes_cell->Add(12, "Нет питания ПЗШ"); codes_cell->Add(25, "Автоматический режим отключен"); codes_cell->Add(54, "ОшибкаПЛК"); codes_cell->Add(109, "DgnPLC:Ошибка ввода-вывода (ОВВ) в главном каркасе");
	codes_cell->Add(13, "Есть питание ПЗШ"); codes_cell->Add(26, "Была нажата кнопка 'Отключить АВ'"); codes_cell->Add(55, "Ошибка регистратора"); codes_cell->Add(110, "DgnPLC:Ненорма самопроверки UART C750 для расширителей или ненорма передатчика в процессе РП");
	codes_cell->Add(111, "DgnPLC:Нет связи с одним из расширителей"); codes_cell->Add(112, "DgnPLC:Ошибка ввода-вывода в каркасе одного из расширителей"); 
	codes_cell->Add(113, "DgnPLC:Ошибка обмена Modbus TCP/IP/Ethernet"); codes_cell->Add(114, "DgnPLC:Ошибка сетевой диагностики модуля"); codes_cell->Add(115, "DgnPLC:Резерв 15");

	cellList->Add(codes_cell->Values->ToString());


	// Расшифровка Агрегат
	codes_aggregate = gcnew Dictionary<int, String^>();
	codes_aggregate->Add(1, "Включен режим АТ"); codes_aggregate->Add(2, "Включен режим АМ"); codes_aggregate->Add(3, "Включен режим РМ"); codes_aggregate->Add(4, "ВА отключен");
	codes_aggregate->Add(5, "ВА включен"); codes_aggregate->Add(6, "ВА неопределен"); codes_aggregate->Add(7, "Авария ВА "); codes_aggregate->Add(8, "Нажата кнопка ВКЛ ВА");
	codes_aggregate->Add(9, "Нажата кнопка ОТКЛ ВА"); codes_aggregate->Add(10, "Команда ТУ 'Отключить ВА'"); codes_aggregate->Add(11, "Команда ТУ 'Включить ВА'"); codes_aggregate->Add(12, "Предупреждение о превышении температуры БВК1");
	codes_aggregate->Add(13, "Предупреждение о превышении температуры БВК2"); codes_aggregate->Add(14, "Перегрев БВК1"); codes_aggregate->Add(15, "Перегрев БВК2"); codes_aggregate->Add(16, "Команда 'Включение резерва' по перегреву БВК1");
	codes_aggregate->Add(17, "Команда 'Включение резерва' по перегреву БВК2"); codes_aggregate->Add(18, "Команда 'Включение резерва' по перегрузке"); codes_aggregate->Add(19, "Газовая защита"); codes_aggregate->Add(20, "Газовая сигнализация");
	codes_aggregate->Add(21, "Земляная защита"); codes_aggregate->Add(22, "Максимальная токовая защита"); codes_aggregate->Add(23, "Разбаланс диодов a1"); codes_aggregate->Add(24, "Разбаланс диодов a4");
	codes_aggregate->Add(25, "Разбаланс диодов b3"); codes_aggregate->Add(26, "Разбаланс диодов b6"); codes_aggregate->Add(27, "Разбаланс диодов c5"); codes_aggregate->Add(28, "Разбаланс диодов c2");
	codes_aggregate->Add(29, "Разрушение предохранителей"); codes_aggregate->Add(30, "Перегрузка (180с)"); codes_aggregate->Add(31, "Сигнал КП АГР"); codes_aggregate->Add(32, "Отсутствует КП АГР");
	codes_aggregate->Add(33, "Сигнал КП ВВВ"); codes_aggregate->Add(34, "Отсутствует КП ВВВ"); codes_aggregate->Add(35, "Неисправность ВА"); codes_aggregate->Add(36, "БАОД не включен");
	codes_aggregate->Add(37, "ВВВ не включен"); codes_aggregate->Add(38, "Команда 'Резерв 1'"); codes_aggregate->Add(39, "Команда 'Резерв 2'"); codes_aggregate->Add(40, "БАОД не включен и нет КП АГР");
	codes_aggregate->Add(41, "Успешный запуск системы"); codes_aggregate->Add(42, "Флаг 'Включение резерва' установлен"); codes_aggregate->Add(43, "Флаг 'Включение резерва' не установлен"); codes_aggregate->Add(44, "Потеря связи с ЗНОЙ");
	codes_aggregate->Add(54, "ОшибкаПЛК"); codes_aggregate->Add(55, "Ошибка регистратора"); codes_aggregate->Add(100, "DgnPLC: ОРИ или отказ CMOS05"); codes_aggregate->Add(101, "DgnPLC:Ошибка чтения файла с РП");
	codes_aggregate->Add(102, "DgnPLC:Не норма РП"); codes_aggregate->Add(103, "DgnPLC:Отказ часов реального времени (RTC)"); codes_aggregate->Add(104, "DgnPLC:Высокая скорость обмена через PC104 не устанавливается - модуль ПЛК не работоспособен"); codes_aggregate->Add(105, "DgnPLC:Резерв 5");
	codes_aggregate->Add(106, "DgnPLC:Превышение максимального времени скана"); codes_aggregate->Add(107, "DgnPLC:Резерв 7"); codes_aggregate->Add(108, "DgnPLC:Останов РП от команды СТП(применяется пользователем)"); codes_aggregate->Add(109, "DgnPLC:Ошибка ввода-вывода (ОВВ) в главном каркасе");
	codes_aggregate->Add(110, "DgnPLC:Ненорма самопроверки UART C750 для расширителей или ненорма передатчика в процессе РП"); codes_aggregate->Add(111, "DgnPLC:Нет связи с одним из расширителей");
	codes_aggregate->Add(112, "DgnPLC:Ошибка ввода-вывода в каркасе одного из расширителей"); codes_aggregate->Add(113, "DgnPLC:Ошибка обмена Modbus TCP/IP/Ethernet");
	codes_aggregate->Add(114, "DgnPLC:Ошибка сетевой диагностики модуля"); codes_aggregate->Add(115, "DgnPLC:Резерв 15");
	
	aggregateList->Add(codes_aggregate->Values->ToString());

	// Расшифровка Шкаф управления ВВ2
	codes_control2 = gcnew Dictionary<int, String^>();
	codes_control2->Add(1, "Ввод 1 включен"); codes_control2->Add(2, "Ввод 2 включен"); codes_control2->Add(3, "Ввод 1 отключен"); codes_control2->Add(4, "Ввод 2 отключен");
	codes_control2->Add(5, "АВР в процессе работы"); codes_control2->Add(6, "АВР отработал"); codes_control2->Add(7, "Отказ АВР"); codes_control2->Add(8, "Нет КН НАМИТ");
	codes_control2->Add(9, "Есть КН НАМИТ"); codes_control2->Add(10, "Нет условий АВР"); codes_control2->Add(11, "Есть условия АВР"); codes_control2->Add(12, "АВР отключен");
	codes_control2->Add(13, "АВР включен"); codes_control2->Add(14, "МТЗ ввод 1"); codes_control2->Add(15, "МТЗ ввод2"); codes_control2->Add(16, "Режим АТ Ввод 1");
	codes_control2->Add(17, "Режим МУ Ввод 1"); codes_control2->Add(18, "Режим АТ Ввод 2"); codes_control2->Add(19, "Режим МУ Ввод 2"); codes_control2->Add(20, "Есть напряжение Ввод 2");
	codes_control2->Add(21, "Нет напряжения Ввод 2"); codes_control2->Add(22, "Есть КП ВВВ 1"); codes_control2->Add(23, "Нет КП ВВВ 1"); codes_control2->Add(24, "Есть КП ВВВ 2");
	codes_control2->Add(25, "Нет КП ВВВ 2"); codes_control2->Add(26, "Команда ТУ 'Включить ввод 1'"); codes_control2->Add(27, "Команда ТУ 'Включить ввод 2'"); codes_control2->Add(28, "Команда ТУ 'Выключить ввод 1'");
	codes_control2->Add(29, "Команда ТУ 'Выключить ввод 2'"); codes_control2->Add(30, "АВ НАМИТ ОТКЛ"); codes_control2->Add(31, "U фазы 'AB'' не норма"); codes_control2->Add(32, "U фазы 'ВC' не норма");
	codes_control2->Add(33, "U фазы 'СA' не норма"); codes_control2->Add(34, "Потеря связи с ЭНИП"); codes_control2->Add(35, "Отказ ТУ"); codes_control2->Add(54, "Ошибка ПЛК");
	codes_control2->Add(55, "Команда от ПЛК Вых. Вкл. Ввод 1"); codes_control2->Add(56, "Команда от ПЛК  Вых. Вкл. Ввод 2"); codes_control2->Add(58, "Команда от ПЛК  Вых. Выкл. Ввод 1"); codes_control2->Add(59, "Команда от ПЛК  Вых. Выкл. Ввод 2");
	codes_control2->Add(61, "Успешный запуск системы"); codes_control2->Add(100, "DgnPLC: ОРИ или отказ CMOS05"); codes_control2->Add(101, "DgnPLC:Ошибка чтения файла с РП"); codes_control2->Add(102, "DgnPLC:Не норма РП");
	codes_control2->Add(103, "DgnPLC:Отказ часов реального времени (RTC)"); codes_control2->Add(104, "DgnPLC:Высокая скорость обмена через PC104 не устанавливается - модуль ПЛК не работоспособен"); 
	codes_control2->Add(105, "DgnPLC:Резерв 5"); codes_control2->Add(106, "DgnPLC:Превышение максимального времени скана"); codes_control2->Add(107, "DgnPLC:Резерв 7"); codes_control2->Add(108, "DgnPLC:Останов РП от команды СТП(применяется пользователем)");
	codes_control2->Add(109, "DgnPLC:Ошибка ввода-вывода (ОВВ) в главном каркасе"); codes_control2->Add(110, "DgnPLC:Ненорма самопроверки UART C750 для расширителей или ненорма передатчика в процессе РП"); 
	codes_control2->Add(111, "DgnPLC:Нет связи с одним из расширителей"); codes_control2->Add(112, "DgnPLC:Ошибка ввода-вывода в каркасе одного из расширителей");
	codes_control2->Add(113, "DgnPLC:Ошибка обмена Modbus TCP/IP/Ethernet"); codes_control2->Add(114, "DgnPLC:Ошибка сетевой диагностики модуля"); 
	codes_control2->Add(115, "DgnPLC:Резерв 15");
	
	controlList2->Add(codes_control2->Values->ToString());
	
	// Расшифровка Шкаф управления ВВ3_ТП4
	codes_control3_tp4 = gcnew Dictionary<int,String^>();

	codes_control3_tp4->Add(1, "Ввод 1 включен"); codes_control3_tp4->Add(2, "Ввод 2 включен"); codes_control3_tp4->Add(3, "Ввод 1 отключен"); codes_control3_tp4->Add(4, "Ввод 2 отключен");
	codes_control3_tp4->Add(8, "Нет КН НАМИТ"); codes_control3_tp4->Add(9, "Есть КН НАМИТ"); codes_control3_tp4->Add(12, "АВР отключен"); codes_control3_tp4->Add(13, "АВР включен");
	codes_control3_tp4->Add(14, "МТЗ ввод 1"); codes_control3_tp4->Add(15, "МТЗ ввод2"); codes_control3_tp4->Add(16, "Режим АТ Ввод 1"); codes_control3_tp4->Add(17, "Режим МУ Ввод 1");
	codes_control3_tp4->Add(18, "Режим АТ Ввод 2"); codes_control3_tp4->Add(19, "Режим МУ Ввод 2"); codes_control3_tp4->Add(20, "Есть напряжение Ввод 2"); codes_control3_tp4->Add(21, "Нет напряжения Ввод 2");
	codes_control3_tp4->Add(22, "Есть КП ВВВ 1"); codes_control3_tp4->Add(23, "Нет КП ВВВ 1"); codes_control3_tp4->Add(24, "Есть КП ВВВ 2"); codes_control3_tp4->Add(25, "Нет КП ВВВ 2");
	codes_control3_tp4->Add(26, "Команда ТУ 'Включить ввод 1'"); codes_control3_tp4->Add(27, "Команда ТУ 'Включить ввод 2'"); codes_control3_tp4->Add(28, "Команда ТУ 'Выключить ввод 1'"); codes_control3_tp4->Add(29, "Команда ТУ 'Выключить ввод 2'");
	codes_control3_tp4->Add(30, "АВ НАМИТ ОТКЛ"); codes_control3_tp4->Add(31, "U фазы 'AB' не норма"); codes_control3_tp4->Add(32, "U фазы 'ВC' не норма"); codes_control3_tp4->Add(33, "U фазы 'СA' не норма");
	codes_control3_tp4->Add(34, "Потеря связи с ЭНИП"); codes_control3_tp4->Add(35, "Отказ ТУ"); codes_control3_tp4->Add(36, "Ввод 3 включен"); codes_control3_tp4->Add(37, "Ввод 3 отключен");
	codes_control3_tp4->Add(38, "МТЗ ввод 3"); codes_control3_tp4->Add(39, "Режим АТ Ввод 3"); codes_control3_tp4->Add(40, "Режим МУ Ввод 3"); codes_control3_tp4->Add(41, "Есть КП ВВВ 3");
	codes_control3_tp4->Add(42, "Нет КП ВВВ 3"); codes_control3_tp4->Add(43, "Команда ТУ 'Включить ввод 3'"); codes_control3_tp4->Add(44, "Команда ТУ 'Выключить ввод 3'"); codes_control3_tp4->Add(45, "АВР 1-2 в процессе работы");
	codes_control3_tp4->Add(46, "АВР 3-2 в процессе работы"); codes_control3_tp4->Add(47, "АВР 45 в процессе работы"); codes_control3_tp4->Add(48, "АВР1-2 отработал"); codes_control3_tp4->Add(49, "АВР3-2 отработал");
	codes_control3_tp4->Add(50, "АВР45 отработал"); codes_control3_tp4->Add(51, "Отказ АВР1-2"); codes_control3_tp4->Add(52, "Отказ АВР3-2"); codes_control3_tp4->Add(53, "Отказ АВР45");
	codes_control3_tp4->Add(54, "Ошибка ПЛК"); codes_control3_tp4->Add(55, "Команда от ПЛК Вых. Вкл. Ввод 1"); codes_control3_tp4->Add(56, "Команда от ПЛК  Вых. Вкл. Ввод 2"); codes_control3_tp4->Add(57, "Команда от ПЛК  Вых. Вкл. Ввод 3");
	codes_control3_tp4->Add(58, "Команда от ПЛК  Вых. Выкл. Ввод 1"); codes_control3_tp4->Add(59, "Команда от ПЛК  Вых. Выкл. Ввод 2"); codes_control3_tp4->Add(60, "Команда от ПЛК  Вых. Выкл. Ввод 3"); codes_control3_tp4->Add(61, "Успешный запуск системы");
	codes_control3_tp4->Add(62, "Есть условия для АВР 1-2"); codes_control3_tp4->Add(63, "Есть условия для АВР 3-2"); codes_control3_tp4->Add(64, "Есть условия для АВР 45"); codes_control3_tp4->Add(65, "Нет условия для АВР 1-2");
	codes_control3_tp4->Add(66, "Нет условия для АВР 3-2"); codes_control3_tp4->Add(67, "Нет условия для АВР 45"); codes_control3_tp4->Add(100, "DgnPLC: ОРИ или отказ CMOS05"); codes_control3_tp4->Add(101, "DgnPLC:Ошибка чтения файла с РП");
	codes_control3_tp4->Add(102, "DgnPLC:Не норма РП"); codes_control3_tp4->Add(103, "DgnPLC:Отказ часов реального времени (RTC)"); codes_control3_tp4->Add(104, "DgnPLC:Высокая скорость обмена через PC104 не устанавливается - модуль ПЛК не работоспособен"); 
	codes_control3_tp4->Add(105, "DgnPLC:Резерв 5");codes_control3_tp4->Add(106, "DgnPLC:Превышение максимального времени скана"); codes_control3_tp4->Add(107, "DgnPLC:Резерв 7");
	codes_control3_tp4->Add(108, "DgnPLC:Останов РП от команды СТП(применяется пользователем)"); codes_control3_tp4->Add(109, "DgnPLC:Ошибка ввода-вывода (ОВВ) в главном каркасе");
	codes_control3_tp4->Add(110, "DgnPLC:Ненорма самопроверки UART C750 для расширителей или ненорма передатчика в процессе РП"); codes_control3_tp4->Add(111, "DgnPLC:Нет связи с одним из расширителей");
	codes_control3_tp4->Add(112, "DgnPLC:Ошибка ввода-вывода в каркасе одного из расширителей"); codes_control3_tp4->Add(113, "DgnPLC:Ошибка обмена Modbus TCP/IP/Ethernet");
	codes_control3_tp4->Add(114, "DgnPLC:Ошибка сетевой диагностики модуля"); codes_control3_tp4->Add(115, "DgnPLC:Резерв 15");
	
	controlList3_tp4->Add(codes_control3_tp4->Values->ToString());

	// Расшифровка Шкаф управления ВВ3_ТП41
	codes_control3_tp41 = gcnew Dictionary<int,String^>();

	codes_control3_tp41->Add(1, "Ввод 1 включен"); codes_control3_tp41->Add(2, "Ввод 2 включен"); codes_control3_tp41->Add(3, "Ввод 1 отключен"); codes_control3_tp41->Add(4, "Ввод 2 отключен");
	codes_control3_tp41->Add(8, "Нет КН НАМИТ"); codes_control3_tp41->Add(9, "Есть КН НАМИТ"); codes_control3_tp41->Add(12, "АВР отключен"); codes_control3_tp41->Add(13, "АВР включен");
	codes_control3_tp41->Add(14, "МТЗ ввод 1"); codes_control3_tp41->Add(15, "МТЗ ввод2"); codes_control3_tp41->Add(16, "Режим АТ Ввод 1"); codes_control3_tp41->Add(17, "Режим МУ Ввод 1");
	codes_control3_tp41->Add(18, "Режим АТ Ввод 2"); codes_control3_tp41->Add(19, "Режим МУ Ввод 2"); codes_control3_tp41->Add(20, "Есть напряжение Ввод 2"); codes_control3_tp41->Add(21, "Нет напряжения Ввод 2");
	codes_control3_tp41->Add(22, "Есть КП ВВВ 1"); codes_control3_tp41->Add(23, "Нет КП ВВВ 1"); codes_control3_tp41->Add(24, "Есть КП ВВВ 2"); codes_control3_tp41->Add(25, "Нет КП ВВВ 2");
	codes_control3_tp41->Add(26, "Команда ТУ 'Включить ввод 1'"); codes_control3_tp41->Add(27, "Команда ТУ 'Включить ввод 2'"); codes_control3_tp41->Add(28, "Команда ТУ 'Выключить ввод 1'"); codes_control3_tp41->Add(29, "Команда ТУ 'Выключить ввод 2'");
	codes_control3_tp41->Add(30, "АВ НАМИТ ОТКЛ"); codes_control3_tp41->Add(31, "U фазы 'AB' не норма"); codes_control3_tp41->Add(32, "U фазы 'ВC' не норма"); codes_control3_tp41->Add(33, "U фазы 'СA' не норма");
	codes_control3_tp41->Add(34, "Потеря связи с ЭНИП"); codes_control3_tp41->Add(35, "Отказ ТУ"); codes_control3_tp41->Add(36, "Ввод 3 включен"); codes_control3_tp41->Add(37, "Ввод 3 отключен");
	codes_control3_tp41->Add(38, "МТЗ ввод 3"); codes_control3_tp41->Add(39, "Режим АТ Ввод 3"); codes_control3_tp41->Add(40, "Режим МУ Ввод 3"); codes_control3_tp41->Add(41, "Есть КП ВВВ 3");
	codes_control3_tp41->Add(42, "Нет КП ВВВ 3"); codes_control3_tp41->Add(43, "Команда ТУ 'Включить ввод 3'"); codes_control3_tp41->Add(44, "Команда ТУ 'Выключить ввод 3'"); codes_control3_tp41->Add(45, "АВР 1-2 в процессе работы");
	codes_control3_tp41->Add(46, "АВР 2-3 в процессе работы"); codes_control3_tp41->Add(47, "АВР 1-3 в процессе работы"); codes_control3_tp41->Add(48, "АВР1-2 отработал"); codes_control3_tp41->Add(49, "АВР2-3 отработал");
	codes_control3_tp41->Add(50, "АВР1-3 отработал"); codes_control3_tp41->Add(51, "Отказ АВР1-2"); codes_control3_tp41->Add(52, "Отказ АВР2-3"); codes_control3_tp41->Add(53, "Отказ АВР1-3");
	codes_control3_tp41->Add(54, "Ошибка ПЛК"); codes_control3_tp41->Add(55, "Команда от ПЛК Вых. Вкл. Ввод 1"); codes_control3_tp41->Add(56, "Команда от ПЛК  Вых. Вкл. Ввод 2"); codes_control3_tp41->Add(57, "Команда от ПЛК  Вых. Вкл. Ввод 3");
	codes_control3_tp41->Add(58, "Команда от ПЛК  Вых. Выкл. Ввод 1"); codes_control3_tp41->Add(59, "Команда от ПЛК  Вых. Выкл. Ввод 2"); codes_control3_tp41->Add(60, "Команда от ПЛК  Вых. Выкл. Ввод 3"); codes_control3_tp41->Add(61, "Успешный запуск системы");
	codes_control3_tp41->Add(62, "Есть условия для АВР 1-2"); codes_control3_tp41->Add(63, "Есть условия для АВР 2-3"); codes_control3_tp41->Add(64, "Есть условия для АВР 1-3"); codes_control3_tp41->Add(65, "Нет условия для АВР 1-2");
	codes_control3_tp41->Add(66, "Нет условия для АВР 2-3"); codes_control3_tp41->Add(67, "Нет условия для АВР 1-3"); codes_control3_tp41->Add(100, "DgnPLC: ОРИ или отказ CMOS05"); codes_control3_tp41->Add(101, "DgnPLC:Ошибка чтения файла с РП");
	codes_control3_tp41->Add(102, "DgnPLC:Не норма РП"); codes_control3_tp41->Add(103, "DgnPLC:Отказ часов реального времени (RTC)"); codes_control3_tp41->Add(104, "DgnPLC:Высокая скорость обмена через PC104 не устанавливается - модуль ПЛК не работоспособен"); 
	codes_control3_tp41->Add(105, "DgnPLC:Резерв 5");codes_control3_tp41->Add(106, "DgnPLC:Превышение максимального времени скана"); codes_control3_tp41->Add(107, "DgnPLC:Резерв 7"); codes_control3_tp41->Add(108, "DgnPLC:Останов РП от команды СТП(применяется пользователем)");
	codes_control3_tp41->Add(109, "DgnPLC:Ошибка ввода-вывода (ОВВ) в главном каркасе");codes_control3_tp41->Add(110, "DgnPLC:Ненорма самопроверки UART C750 для расширителей или ненорма передатчика в процессе РП"); codes_control3_tp41->Add(111, "DgnPLC:Нет связи с одним из расширителей");
	codes_control3_tp41->Add(112, "DgnPLC:Ошибка ввода-вывода в каркасе одного из расширителей"); codes_control3_tp41->Add(113, "DgnPLC:Ошибка обмена Modbus TCP/IP/Ethernet");
	codes_control3_tp41->Add(114, "DgnPLC:Ошибка сетевой диагностики модуля"); codes_control3_tp41->Add(115, "DgnPLC:Резерв 15"); 

	controlList3_tp41->Add(codes_control3_tp41->Values->ToString());

	// Расшифровка Шкаф управления ВВ3_ТП16
	codes_control3_tp16 = gcnew Dictionary<int, String^>();

	codes_control3_tp16->Add(1, "Ввод 1 включен"); codes_control3_tp16->Add(2, "Ввод 2 включен"); codes_control3_tp16->Add(3, "Ввод 1 отключен"); codes_control3_tp16->Add(4, "Ввод 2 отключен");
	codes_control3_tp16->Add(8, "Нет КН НАМИТ"); codes_control3_tp16->Add(9, "Есть КН НАМИТ"); codes_control3_tp16->Add(12, "АВР отключен"); codes_control3_tp16->Add(13, "АВР включен");
	codes_control3_tp16->Add(14, "МТЗ или МНТЗ ввод 1"); codes_control3_tp16->Add(16, "Режим АТ Ввод 1"); codes_control3_tp16->Add(17, "Режим МУ Ввод 1"); codes_control3_tp16->Add(18, "Режим АТ Ввод 2");
	codes_control3_tp16->Add(19, "Режим МУ Ввод 2"); codes_control3_tp16->Add(20, "Есть напряжение Ввод 2"); codes_control3_tp16->Add(21, "Нет напряжения Ввод 2"); codes_control3_tp16->Add(22, "Есть КП ВВВ 1");
	codes_control3_tp16->Add(23, "Нет КП ВВВ 1"); codes_control3_tp16->Add(24, "Есть КП ВВВ 2"); codes_control3_tp16->Add(25, "Нет КП ВВВ 2"); codes_control3_tp16->Add(26, "Команда ТУ 'Включить ввод 1'");
	codes_control3_tp16->Add(27, "Команда ТУ 'Включить ввод 2'"); codes_control3_tp16->Add(28, "Команда ТУ 'Выключить ввод 1'"); codes_control3_tp16->Add(29, "Команда ТУ 'Выключить ввод 2'"); codes_control3_tp16->Add(30, "АВ НАМИТ ОТКЛ");
	codes_control3_tp16->Add(31, "U фазы 'AB' не норма"); codes_control3_tp16->Add(32, "U фазы 'ВC' не норма"); codes_control3_tp16->Add(33, "U фазы 'СA' не норма"); codes_control3_tp16->Add(34, "Потеря связи с ЭНИП");
	codes_control3_tp16->Add(35, "Отказ ТУ"); codes_control3_tp16->Add(36, "Ввод 3 включен"); codes_control3_tp16->Add(37, "Ввод 3 отключен"); codes_control3_tp16->Add(38, "МТЗ или МНТЗ ввод 3");
	codes_control3_tp16->Add(39, "Режим АТ Ввод 3"); codes_control3_tp16->Add(40, "Режим МУ Ввод 3"); codes_control3_tp16->Add(41, "Есть КП ВВВ 3"); codes_control3_tp16->Add(42, "Нет КП ВВВ3");
	codes_control3_tp16->Add(43, "Команда ТУ 'Включить ввод 3'"); codes_control3_tp16->Add(44, "Команда ТУ 'Выключить ввод 3'"); codes_control3_tp16->Add(45, "АВР 1 в процессе работы"); codes_control3_tp16->Add(46, "АВР 2 в процессе работы");
	codes_control3_tp16->Add(47, "АВР 3 в процессе работы"); codes_control3_tp16->Add(48, "АВР1 отработал"); codes_control3_tp16->Add(49, "АВР2 отработал"); codes_control3_tp16->Add(50, "АВР3 отработал");
	codes_control3_tp16->Add(51, "Отказ АВР1"); codes_control3_tp16->Add(52, "Отказ АВР2"); codes_control3_tp16->Add(53, "Отказ АВР3"); codes_control3_tp16->Add(54, "Ошибка ПЛК");
	codes_control3_tp16->Add(55, "Команда от ПЛК Вых. Вкл. Ввод 1"); codes_control3_tp16->Add(56, "Команда от ПЛК  Вых. Вкл. Ввод 2"); codes_control3_tp16->Add(57, "Команда от ПЛК  Вых. Вкл. Ввод 3");
	codes_control3_tp16->Add(58, "Команда от ПЛК  Вых. Выкл. Ввод 1");
	codes_control3_tp16->Add(59, "Команда от ПЛК  Вых. Выкл. Ввод 2"); codes_control3_tp16->Add(60, "Команда от ПЛК  Вых. Выкл. Ввод 3"); codes_control3_tp16->Add(61, "Успешный запуск системы"); codes_control3_tp16->Add(62, "Есть условия для АВР 1");
	codes_control3_tp16->Add(63, "Есть условия для АВР 2"); codes_control3_tp16->Add(64, "Есть условия для АВР 3"); codes_control3_tp16->Add(65, "Нет условия для АВР 1"); codes_control3_tp16->Add(66, "Нет условия для АВР 2");
	codes_control3_tp16->Add(67, "Нет условия для АВР 3"); codes_control3_tp16->Add(100, "DgnPLC: ОРИ или отказ CMOS05"); codes_control3_tp16->Add(101, "DgnPLC:Ошибка чтения файла с РП"); codes_control3_tp16->Add(102, "DgnPLC:Не норма РП");
	codes_control3_tp16->Add(103, "DgnPLC:Отказ часов реального времени (RTC)"); codes_control3_tp16->Add(104, "DgnPLC:Высокая скорость обмена через PC104 не устанавливается - модуль ПЛК не работоспособен");
	codes_control3_tp16->Add(105, "DgnPLC:Резерв 5"); codes_control3_tp16->Add(106, "DgnPLC:Превышение максимального времени скана");
	codes_control3_tp16->Add(107, "DgnPLC:Резерв 7"); codes_control3_tp16->Add(108, "DgnPLC:Останов РП от команды СТП(применяется пользователем)"); 
	codes_control3_tp16->Add(109, "DgnPLC:Ошибка ввода-вывода (ОВВ) в главном каркасе"); codes_control3_tp16->Add(110, "DgnPLC:Ненорма самопроверки UART C750 для расширителей или ненорма передатчика в процессе РП");
	codes_control3_tp16->Add(111, "DgnPLC:Нет связи с одним из расширителей"); codes_control3_tp16->Add(112, "DgnPLC:Ошибка ввода-вывода в каркасе одного из расширителей"); 
	codes_control3_tp16->Add(113, "DgnPLC:Ошибка обмена Modbus TCP/IP/Ethernet"); codes_control3_tp16->Add(114, "DgnPLC:Ошибка сетевой диагностики модуля"); codes_control3_tp16->Add(115, "DgnPLC:Резерв 15");


	controlList3_tp16->Add(codes_control3_tp16->Values->ToString());
}
