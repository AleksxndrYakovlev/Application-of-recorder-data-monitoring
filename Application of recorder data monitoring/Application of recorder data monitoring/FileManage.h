#pragma once

using namespace System;
using namespace System::Collections::Generic;

class FileManage
{
public:
	void writeEvents(List<System::String^>^ list);
	List<String^>^ readEvents(System::String^ fileName);
	
private:

};

