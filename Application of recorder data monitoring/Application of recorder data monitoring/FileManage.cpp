#include "FileManage.h"

using namespace System::IO;


// Запись в файл
void FileManage::writeEvents(List<System::String^>^ list,String^ fileName)
{
	StreamWriter^ fileWrite = gcnew StreamWriter(fileName,true);
	for each (String^ str in list)
	{
		fileWrite->WriteLine(str);
	}
	fileWrite->Close();
}


// Считывание из файла
List<String^>^ FileManage::readEvents(System::String^ fileName)
{
	// TODO: вставьте здесь оператор return
	//List<String^>^ list = gcnew System::Collections::Generic::List<System::String^>;
	StreamReader^ file;
	try
	{
		file = File::OpenText(fileName);
		while (!file->EndOfStream)
		{
			list->Add(file->ReadLine());
		}
		list->Reverse();
		file->Close();
	}
	catch (Exception^ e)
	{
		list->Clear();
		file->Close();
	}
	return list;
	
}

// Фильтрация сообщений 
List<String^>^ FileManage::filterList(List<String^>^ param)
{
	for each (String ^ str in param)
	{
		EntityPredicate ent(str);
		filteredList->AddRange(list->FindAll(gcnew Predicate<String^>(ent, &EntityPredicate::hasNote)));
	}
	return filteredList;
}


EntityPredicate::EntityPredicate(String^ str)
{
	note = str;
}

bool EntityPredicate::hasNote(String^ str)
{
	return str->Contains(note);
}