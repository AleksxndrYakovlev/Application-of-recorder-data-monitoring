#include "FormTP17.h"
#include "MyForm.h"
#include "FormActionSelection.h"
#include "Device.h"


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
	Button^ button = safe_cast<Button^>(sender);
	btn_which_click = button->Text;
	timer_wait_btn_get_data_click->Start();
}


System::Void Applicationofrecorderdatamonitoring::FormTP17::timer_wait_btn_get_data_click_Tick(System::Object^ sender, System::EventArgs^ e)
{
	//Инициализируем форму как только таймер стартовал
	if (startTimer) {
		startTimer = false;
		FormActionSelection^ form = gcnew FormActionSelection;
		form->ShowDialog();
	}

	label1->Text = "timer work";

	if (btn_which_click == "ШУ ВВ_2") {
		if (btn_flag) {
			Device^ device = gcnew Device(3, "10.101.17.19", 17, btn_which_click, 2);
			label1->Text = "Считываем ШУ ВВ_2";
			//Фунция для считывания информации
			form_closed_flag = false;
			startTimer = true;
			btn_flag = false;
			timer_wait_btn_get_data_click->Stop();
		}
	}
	if (btn_which_click == "ШУ Агрегат 1") {
		if (btn_flag) {
			Device^ device = gcnew Device(2, "10.101.17.16", 17, btn_which_click, 2);
			label1->Text = "Считываем ШУ Агрегат 1";
			//Фунция для считывания информации
			form_closed_flag = false;
			startTimer = true;
			btn_flag = false;
			timer_wait_btn_get_data_click->Stop();
		}
	}
	if (btn_which_click == "ШУ Агрегат 2") {
		if (btn_flag) {
			Device^ device = gcnew Device(2, "10.101.17.17", 17, btn_which_click, 2);
			label1->Text = "Считываем ШУ Агрегат 2";
			//Фунция для считывания информации
			form_closed_flag = false;
			startTimer = true;
			btn_flag = false;
			timer_wait_btn_get_data_click->Stop();
		}
	}
	if (btn_which_click == "ШУ Агрегат 3") {
		if (btn_flag) {
			Device^ device = gcnew Device(2, "10.101.17.18", 17, btn_which_click, 2);
			label1->Text = "Считываем ШУ Агрегат 3";
			//Фунция для считывания информации
			form_closed_flag = false;
			startTimer = true;
			btn_flag = false;
			timer_wait_btn_get_data_click->Stop();
		}
	}
	if (btn_which_click == "Запасный 1") {
		if (btn_flag) {
			Device^ device = gcnew Device(1, "10.101.17.10", 17, btn_which_click, 2);
			label1->Text = "Считываем Запасный 1";
			//Фунция для считывания информации
			form_closed_flag = false;
			startTimer = true;
			btn_flag = false;
			timer_wait_btn_get_data_click->Stop();
		}
	}
	if (btn_which_click == "ЛЭМЗ") {
		if (btn_flag) {
			Device^ device = gcnew Device(1, "10.101.17.11", 17, btn_which_click, 2);
			label1->Text = "Считываем ЛЭМЗ";
			//Фунция для считывания информации
			form_closed_flag = false;
			startTimer = true;
			btn_flag = false;
			timer_wait_btn_get_data_click->Stop();
		}
	}
	if (btn_which_click == "Сосновый") {
		if (btn_flag) {
			Device^ device = gcnew Device(1, "10.101.17.12", 17, btn_which_click, 2);
			label1->Text = "Считываем Сосновый";
			//Фунция для считывания информации
			form_closed_flag = false;
			startTimer = true;
			btn_flag = false;
			timer_wait_btn_get_data_click->Stop();
		}
	}
	if (btn_which_click == "Стрельнинский") {
		if (btn_flag) {
			Device^ device = gcnew Device(1, "10.101.17.13", 17, btn_which_click, 2);
			label1->Text = "Считываем Стрельнинский";
			//Фунция для считывания информации
			form_closed_flag = false;
			startTimer = true;
			btn_flag = false;
			timer_wait_btn_get_data_click->Stop();
		}
	}
	if (btn_which_click == "Пионерстроя (тб)") {
		if (btn_flag) {
			Device^ device = gcnew Device(1, "10.101.17.14", 17, btn_which_click, 2);
			label1->Text = "Считываем Пионерстроя (тб)";
			//Фунция для считывания информации
			form_closed_flag = false;
			startTimer = true;
			btn_flag = false;
			timer_wait_btn_get_data_click->Stop();
		}
	}
	if (btn_which_click == "Запасный 2") {
		if (btn_flag) {
			Device^ device = gcnew Device(1, "10.101.17.15", 17, btn_which_click, 2);
			label1->Text = "Считываем Запасный 2";
			//Фунция для считывания информации
			form_closed_flag = false;
			startTimer = true;
			btn_flag = false;
			timer_wait_btn_get_data_click->Stop();
		}
	}

	if (form_closed_flag) {
		form_closed_flag = false;
		startTimer = true;
		timer_wait_btn_get_data_click->Stop();
		label1->Text = "timer stop";
	}
}
