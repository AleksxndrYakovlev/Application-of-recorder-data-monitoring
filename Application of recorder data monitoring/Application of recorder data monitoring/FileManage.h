#pragma once
#include <list>
#include <string>

class FileManage
{
public:
	void writeEvents();
	std::list<std::string> readEvents(System::String^ fileName);

};

