#include "MyForm.h"
#include "FormTP17.h"

bool full_screen = true;

System::Void Applicationofrecorderdatamonitoring::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Applicationofrecorderdatamonitoring::MyForm::btn_close_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	Applicationofrecorderdatamonitoring::Application::Exit();
}

System::Void Applicationofrecorderdatamonitoring::MyForm::button_tp_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	//—тавлю картинку через FromFile, потому что так быстрее работает и resx почему-то удал€ет файлы
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_tp_mouse_on.png");
	/*System::Resources::ResXResourceSet^ resxSet = gcnew System::Resources::ResXResourceSet(L"MyForm.resx");
	button->BackgroundImage = safe_cast<System::Drawing::Image^>(resxSet->GetObject(L"btn_tp_mouse_on"));*/
	button->ForeColor = Color::FromArgb(160,160,160);
}

System::Void Applicationofrecorderdatamonitoring::MyForm::button_tp_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_tp.png");
	button->ForeColor = Color::FromArgb(64, 64, 64);
}

System::Void Applicationofrecorderdatamonitoring::MyForm::btn_close_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_close_on.png");
}

System::Void Applicationofrecorderdatamonitoring::MyForm::btn_close_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_close.png");
}

System::Void Applicationofrecorderdatamonitoring::MyForm::btn_tp_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_tp_click.png");
	button->Font = gcnew System::Drawing::Font("Arial", 36);
}

System::Void Applicationofrecorderdatamonitoring::MyForm::btn_tp_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_tp_mouse_on.png");
	button->Font = gcnew System::Drawing::Font("Arial", 40);
}

System::Void Applicationofrecorderdatamonitoring::MyForm::btn_collapse_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_collapse_on.png");
}

System::Void Applicationofrecorderdatamonitoring::MyForm::btn_collapse_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->BackgroundImage = Image::FromFile("images\\btn_collapse.png");
}

System::Void Applicationofrecorderdatamonitoring::MyForm::btn_collapse_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->WindowState = FormWindowState::Minimized;
}


System::Drawing::Point lastPoint;

System::Void Applicationofrecorderdatamonitoring::MyForm::panel_header_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		this->Left += e->X - lastPoint.X;
		this->Top += e->Y - lastPoint.Y;
	}
}

System::Void Applicationofrecorderdatamonitoring::MyForm::panel_header_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	lastPoint.X = e->X;
	lastPoint.Y = e->Y;
}

System::Void Applicationofrecorderdatamonitoring::MyForm::btn_tp17_Click(System::Object^ sender, System::EventArgs^ e)
{
	FormTP17^ form = gcnew FormTP17;
	form->Show();
	this->Hide();
}


