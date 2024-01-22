#pragma once

namespace Applicationofrecorderdatamonitoring {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormActionSelection
	/// </summary>
	public ref class FormActionSelection : public System::Windows::Forms::Form
	{
	public:
		FormActionSelection(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FormActionSelection()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_close;
	private: System::Windows::Forms::Panel^ panel_header;
	private: System::Windows::Forms::Button^ btn_get_data;
	private: System::Windows::Forms::Button^ btn_check_data;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormActionSelection::typeid));
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->panel_header = (gcnew System::Windows::Forms::Panel());
			this->btn_get_data = (gcnew System::Windows::Forms::Button());
			this->btn_check_data = (gcnew System::Windows::Forms::Button());
			this->panel_header->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_close
			// 
			this->btn_close->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->btn_close->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_close.BackgroundImage")));
			this->btn_close->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_close->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_close->FlatAppearance->BorderSize = 0;
			this->btn_close->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->btn_close->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->btn_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_close->Location = System::Drawing::Point(656, 22);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(40, 40);
			this->btn_close->TabIndex = 0;
			this->btn_close->UseVisualStyleBackColor = false;
			this->btn_close->Click += gcnew System::EventHandler(this, &FormActionSelection::btn_close_Click);
			this->btn_close->MouseEnter += gcnew System::EventHandler(this, &FormActionSelection::btn_close_MouseEnter);
			this->btn_close->MouseLeave += gcnew System::EventHandler(this, &FormActionSelection::btn_close_MouseLeave);
			// 
			// panel_header
			// 
			this->panel_header->BackColor = System::Drawing::Color::Transparent;
			this->panel_header->Controls->Add(this->btn_close);
			this->panel_header->Location = System::Drawing::Point(0, 0);
			this->panel_header->Name = L"panel_header";
			this->panel_header->Size = System::Drawing::Size(720, 81);
			this->panel_header->TabIndex = 1;
			this->panel_header->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormActionSelection::panel_header_MouseDown);
			this->panel_header->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FormActionSelection::panel_header_MouseMove);
			// 
			// btn_get_data
			// 
			this->btn_get_data->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->btn_get_data->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_get_data.BackgroundImage")));
			this->btn_get_data->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_get_data->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_get_data->FlatAppearance->BorderSize = 0;
			this->btn_get_data->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->btn_get_data->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->btn_get_data->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_get_data->Font = (gcnew System::Drawing::Font(L"Arial", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_get_data->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_get_data->Location = System::Drawing::Point(50, 146);
			this->btn_get_data->Name = L"btn_get_data";
			this->btn_get_data->Size = System::Drawing::Size(280, 145);
			this->btn_get_data->TabIndex = 2;
			this->btn_get_data->Text = L"Извлечь данные";
			this->btn_get_data->UseVisualStyleBackColor = false;
			this->btn_get_data->Click += gcnew System::EventHandler(this, &FormActionSelection::btn_get_data_Click);
			this->btn_get_data->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormActionSelection::btn_as_MouseDown);
			this->btn_get_data->MouseEnter += gcnew System::EventHandler(this, &FormActionSelection::btn_as_MouseEnter);
			this->btn_get_data->MouseLeave += gcnew System::EventHandler(this, &FormActionSelection::btn_as_MouseLeave);
			this->btn_get_data->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &FormActionSelection::btn_as_MouseUp);
			// 
			// btn_check_data
			// 
			this->btn_check_data->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->btn_check_data->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_check_data.BackgroundImage")));
			this->btn_check_data->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_check_data->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_check_data->FlatAppearance->BorderSize = 0;
			this->btn_check_data->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->btn_check_data->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->btn_check_data->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_check_data->Font = (gcnew System::Drawing::Font(L"Arial", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_check_data->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_check_data->Location = System::Drawing::Point(390, 146);
			this->btn_check_data->Name = L"btn_check_data";
			this->btn_check_data->Size = System::Drawing::Size(280, 145);
			this->btn_check_data->TabIndex = 3;
			this->btn_check_data->Text = L"Посмотреть данные";
			this->btn_check_data->UseVisualStyleBackColor = false;
			this->btn_check_data->Click += gcnew System::EventHandler(this, &FormActionSelection::btn_check_data_Click);
			this->btn_check_data->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormActionSelection::btn_as_MouseDown);
			this->btn_check_data->MouseEnter += gcnew System::EventHandler(this, &FormActionSelection::btn_as_MouseEnter);
			this->btn_check_data->MouseLeave += gcnew System::EventHandler(this, &FormActionSelection::btn_as_MouseLeave);
			this->btn_check_data->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &FormActionSelection::btn_as_MouseUp);
			// 
			// FormActionSelection
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(720, 374);
			this->Controls->Add(this->btn_check_data);
			this->Controls->Add(this->btn_get_data);
			this->Controls->Add(this->panel_header);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormActionSelection";
			this->Text = L"FormActionSelection";
			this->panel_header->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_close_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_close_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_close_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void panel_header_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void panel_header_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void btn_as_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void btn_as_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_as_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_as_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void btn_get_data_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_check_data_Click(System::Object^ sender, System::EventArgs^ e);
};
}
