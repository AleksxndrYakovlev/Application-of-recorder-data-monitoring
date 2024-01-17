#include "CodeMsg.h"

std::string CodeMsg::getNote(int device_number,int code)
{
	std::string note = "";
	switch (device_number)
	{
	case 1:
		note = codes_cell.at(code);
		break;
	case 2:
		note = codes_aggregate.at(code);
		break;
	case 3:
		note = codes_control2.at(code);
		break;
	case 4:
		note = codes_control3_tp4.at(code);
		break;
	case 5:
		note = codes_control3_tp41.at(code);
		break;
	case 6:
		note = codes_control3_tp16.at(code);
		break;
	default:
		break;
	}
	
	return note;
}

CodeMsg::CodeMsg()
{

}
