#include "FormActionSelection.h"

System::Void Applicationofrecorderdatamonitoring::FormActionSelection::btn_close_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_close_on.png");
}

System::Void Applicationofrecorderdatamonitoring::FormActionSelection::btn_close_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_close.png");
}

System::Void Applicationofrecorderdatamonitoring::FormActionSelection::btn_close_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

System::Drawing::Point lastPointAS;

System::Void Applicationofrecorderdatamonitoring::FormActionSelection::panel_header_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		this->Left += e->X - lastPointAS.X;
		this->Top += e->Y - lastPointAS.Y;
	}
}

System::Void Applicationofrecorderdatamonitoring::FormActionSelection::panel_header_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	lastPointAS.X = e->X;
	lastPointAS.Y = e->Y;
}

System::Void Applicationofrecorderdatamonitoring::FormActionSelection::btn_as_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_select_action_click.png");
	button->Font = gcnew System::Drawing::Font("Arial", 28, System::Drawing::FontStyle::Bold);
}

System::Void Applicationofrecorderdatamonitoring::FormActionSelection::btn_as_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->ForeColor = Color::FromArgb(160, 160, 160);
	button->BackgroundImage = Image::FromFile("images\\btn_select_action_mouse_on.png");
}

System::Void Applicationofrecorderdatamonitoring::FormActionSelection::btn_as_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->ForeColor = Color::FromArgb(64, 64, 64);
	button->BackgroundImage = Image::FromFile("images\\btn_select_action.png");
}

System::Void Applicationofrecorderdatamonitoring::FormActionSelection::btn_as_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_select_action_mouse_on.png");
	button->Font = gcnew System::Drawing::Font("Arial", 32, System::Drawing::FontStyle::Bold);
}

System::Void Applicationofrecorderdatamonitoring::FormActionSelection::btn_get_data_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Функция, которая извлекает данные
	this->Close();
}

System::Void Applicationofrecorderdatamonitoring::FormActionSelection::btn_check_data_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Функция, которая вызывает конкретную папку с файлами по объекту в проводнике, 
	return System::Void();
}
