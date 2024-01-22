#include "FormTP17.h"
#include "MyForm.h"
#include "FormActionSelection.h"

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_close_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	Applicationofrecorderdatamonitoring::Application::Exit();
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_collapse_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->WindowState = FormWindowState::Minimized;
}

System::Drawing::Point lastPointTP17;

System::Void Applicationofrecorderdatamonitoring::FormTP17::panel_header_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		this->Left += e->X - lastPointTP17.X;
		this->Top += e->Y - lastPointTP17.Y;
	}
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::panel_header_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	lastPointTP17.X = e->X;
	lastPointTP17.Y = e->Y;
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_VVV_3_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_VVV_mouse_on.png");
	button->ForeColor = Color::FromArgb(160, 160, 160);
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_VVV_3_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_VVV.png");
	button->ForeColor = Color::FromArgb(64, 64, 64);
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_VVV_3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_VVV_click.png");
	button->Font = gcnew System::Drawing::Font("Arial", 32, System::Drawing::FontStyle::Bold);
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_VVV_3_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_VVV_mouse_on.png");
	button->Font = gcnew System::Drawing::Font("Arial", 36, System::Drawing::FontStyle::Bold);
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_collapse_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_collapse_on.png");
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_collapse_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_collapse.png");
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_close_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_close_on.png");
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_close_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_close.png");
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_agregat_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_3st_mouse_on.png");
	button->ForeColor = Color::FromArgb(160, 160, 160);
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_agregat_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_3st.png");
	button->ForeColor = Color::FromArgb(64, 64, 64);
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_agregat_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_3st_click.png");
	button->Font = gcnew System::Drawing::Font("Arial", 32, System::Drawing::FontStyle::Bold);
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_agregat_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_3st_mouse_on.png");
	button->Font = gcnew System::Drawing::Font("Arial", 36, System::Drawing::FontStyle::Bold);
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::button_obj_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_2st_mouse_on.png");
	button->ForeColor = Color::FromArgb(160, 160, 160);
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::button_obj_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_2st.png");
	button->ForeColor = Color::FromArgb(64, 64, 64);
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::button_obj_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_2st_click.png");
	button->Font = gcnew System::Drawing::Font("Arial", 32, System::Drawing::FontStyle::Bold);
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::button_obj_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_2st_mouse_on.png");
	button->Font = gcnew System::Drawing::Font("Arial", 36, System::Drawing::FontStyle::Bold);
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_all_data_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_all_data_mouse_on.png");
	button->ForeColor = Color::FromArgb(160, 160, 160);
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_all_data_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_all_data.png");
	button->ForeColor = Color::FromArgb(64, 64, 64);
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_all_data_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_all_data_click.png");
	button->Font = gcnew System::Drawing::Font("Arial", 32, System::Drawing::FontStyle::Bold);
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_all_data_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_all_data_mouse_on.png");
	button->Font = gcnew System::Drawing::Font("Arial", 36, System::Drawing::FontStyle::Bold);
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_back_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_back_mouse_on.png");
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_back_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_back.png");
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_back_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_back_click.png");
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_back_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_back_mouse_on.png");
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_back_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm;
	form->Show();
	this->Hide();
}

System::Void Applicationofrecorderdatamonitoring::FormTP17::btn_obj_Click(System::Object^ sender, System::EventArgs^ e)
{
	FormActionSelection^ form = gcnew FormActionSelection;
	form->ShowDialog();
}
