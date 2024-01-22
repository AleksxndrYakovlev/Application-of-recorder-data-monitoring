#pragma once

namespace Applicationofrecorderdatamonitoring {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormTP17
	/// </summary>
	public ref class FormTP17 : public System::Windows::Forms::Form
	{
	public:
		FormTP17(void)
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
		~FormTP17()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_close;
	private: System::Windows::Forms::Button^ btn_collapse;
	private: System::Windows::Forms::Button^ btn_VVV_3;
	private: System::Windows::Forms::Button^ btn_agregat1;
	private: System::Windows::Forms::Button^ btn_agregat2;
	private: System::Windows::Forms::Button^ btn_agregat3;
    private: System::Windows::Forms::Button^ button_zapas1;
    private: System::Windows::Forms::Button^ button_streln;
    private: System::Windows::Forms::Button^ button_LEMZ;




    private: System::Windows::Forms::Button^ button_sosna;

    private: System::Windows::Forms::Button^ button_pioner;

    private: System::Windows::Forms::Button^ button_zapas2;
    private: System::Windows::Forms::Panel^ panel_header;
    private: System::Windows::Forms::Button^ btn_all_data;
    private: System::Windows::Forms::Button^ btn_back;







	protected:

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormTP17::typeid));
            this->btn_close = (gcnew System::Windows::Forms::Button());
            this->btn_collapse = (gcnew System::Windows::Forms::Button());
            this->btn_VVV_3 = (gcnew System::Windows::Forms::Button());
            this->btn_agregat1 = (gcnew System::Windows::Forms::Button());
            this->btn_agregat2 = (gcnew System::Windows::Forms::Button());
            this->btn_agregat3 = (gcnew System::Windows::Forms::Button());
            this->button_zapas1 = (gcnew System::Windows::Forms::Button());
            this->button_streln = (gcnew System::Windows::Forms::Button());
            this->button_LEMZ = (gcnew System::Windows::Forms::Button());
            this->button_sosna = (gcnew System::Windows::Forms::Button());
            this->button_pioner = (gcnew System::Windows::Forms::Button());
            this->button_zapas2 = (gcnew System::Windows::Forms::Button());
            this->panel_header = (gcnew System::Windows::Forms::Panel());
            this->btn_all_data = (gcnew System::Windows::Forms::Button());
            this->btn_back = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // btn_close
            // 
            this->btn_close->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(197)),
                static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->btn_close->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_close.BackgroundImage")));
            this->btn_close->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->btn_close->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_close->FlatAppearance->BorderSize = 0;
            this->btn_close->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)), static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->btn_close->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)), static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->btn_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_close->Location = System::Drawing::Point(1860, 12);
            this->btn_close->Name = L"btn_close";
            this->btn_close->Size = System::Drawing::Size(34, 34);
            this->btn_close->TabIndex = 0;
            this->btn_close->UseVisualStyleBackColor = false;
            this->btn_close->Click += gcnew System::EventHandler(this, &FormTP17::btn_close_Click);
            this->btn_close->MouseEnter += gcnew System::EventHandler(this, &FormTP17::btn_close_MouseEnter);
            this->btn_close->MouseLeave += gcnew System::EventHandler(this, &FormTP17::btn_close_MouseLeave);
            // 
            // btn_collapse
            // 
            this->btn_collapse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(197)),
                static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->btn_collapse->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_collapse.BackgroundImage")));
            this->btn_collapse->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->btn_collapse->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_collapse->FlatAppearance->BorderSize = 0;
            this->btn_collapse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)), static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->btn_collapse->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)), static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->btn_collapse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_collapse->Location = System::Drawing::Point(1804, 12);
            this->btn_collapse->Name = L"btn_collapse";
            this->btn_collapse->Size = System::Drawing::Size(37, 34);
            this->btn_collapse->TabIndex = 1;
            this->btn_collapse->UseVisualStyleBackColor = false;
            this->btn_collapse->Click += gcnew System::EventHandler(this, &FormTP17::btn_collapse_Click);
            this->btn_collapse->MouseEnter += gcnew System::EventHandler(this, &FormTP17::btn_collapse_MouseEnter);
            this->btn_collapse->MouseLeave += gcnew System::EventHandler(this, &FormTP17::btn_collapse_MouseLeave);
            // 
            // btn_VVV_3
            // 
            this->btn_VVV_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_VVV_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_VVV_3.BackgroundImage")));
            this->btn_VVV_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_VVV_3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_VVV_3->FlatAppearance->BorderSize = 0;
            this->btn_VVV_3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_VVV_3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_VVV_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_VVV_3->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_VVV_3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_VVV_3->Location = System::Drawing::Point(108, 215);
            this->btn_VVV_3->Name = L"btn_VVV_3";
            this->btn_VVV_3->Size = System::Drawing::Size(1705, 90);
            this->btn_VVV_3->TabIndex = 2;
            this->btn_VVV_3->Text = L"ШУ ВВВ_3";
            this->btn_VVV_3->UseVisualStyleBackColor = false;
            this->btn_VVV_3->Click += gcnew System::EventHandler(this, &FormTP17::btn_obj_Click);
            this->btn_VVV_3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::btn_VVV_3_MouseDown);
            this->btn_VVV_3->MouseEnter += gcnew System::EventHandler(this, &FormTP17::btn_VVV_3_MouseEnter);
            this->btn_VVV_3->MouseLeave += gcnew System::EventHandler(this, &FormTP17::btn_VVV_3_MouseLeave);
            this->btn_VVV_3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::btn_VVV_3_MouseUp);
            // 
            // btn_agregat1
            // 
            this->btn_agregat1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_agregat1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_agregat1.BackgroundImage")));
            this->btn_agregat1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_agregat1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_agregat1->FlatAppearance->BorderSize = 0;
            this->btn_agregat1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_agregat1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_agregat1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_agregat1->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_agregat1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_agregat1->Location = System::Drawing::Point(131, 354);
            this->btn_agregat1->Name = L"btn_agregat1";
            this->btn_agregat1->Size = System::Drawing::Size(530, 88);
            this->btn_agregat1->TabIndex = 3;
            this->btn_agregat1->Text = L"ШУ Агрегат 1";
            this->btn_agregat1->UseVisualStyleBackColor = false;
            this->btn_agregat1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::btn_agregat_MouseDown);
            this->btn_agregat1->MouseEnter += gcnew System::EventHandler(this, &FormTP17::btn_agregat_MouseEnter);
            this->btn_agregat1->MouseLeave += gcnew System::EventHandler(this, &FormTP17::btn_agregat_MouseLeave);
            this->btn_agregat1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::btn_agregat_MouseUp);
            // 
            // btn_agregat2
            // 
            this->btn_agregat2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_agregat2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_agregat2.BackgroundImage")));
            this->btn_agregat2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_agregat2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_agregat2->FlatAppearance->BorderSize = 0;
            this->btn_agregat2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_agregat2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_agregat2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_agregat2->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_agregat2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_agregat2->Location = System::Drawing::Point(696, 354);
            this->btn_agregat2->Name = L"btn_agregat2";
            this->btn_agregat2->Size = System::Drawing::Size(530, 88);
            this->btn_agregat2->TabIndex = 4;
            this->btn_agregat2->Text = L"ШУ Агрегат 2";
            this->btn_agregat2->UseVisualStyleBackColor = false;
            this->btn_agregat2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::btn_agregat_MouseDown);
            this->btn_agregat2->MouseEnter += gcnew System::EventHandler(this, &FormTP17::btn_agregat_MouseEnter);
            this->btn_agregat2->MouseLeave += gcnew System::EventHandler(this, &FormTP17::btn_agregat_MouseLeave);
            this->btn_agregat2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::btn_agregat_MouseUp);
            // 
            // btn_agregat3
            // 
            this->btn_agregat3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_agregat3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_agregat3.BackgroundImage")));
            this->btn_agregat3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_agregat3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_agregat3->FlatAppearance->BorderSize = 0;
            this->btn_agregat3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_agregat3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_agregat3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_agregat3->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_agregat3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_agregat3->Location = System::Drawing::Point(1261, 354);
            this->btn_agregat3->Name = L"btn_agregat3";
            this->btn_agregat3->Size = System::Drawing::Size(530, 88);
            this->btn_agregat3->TabIndex = 5;
            this->btn_agregat3->Text = L"ШУ Агрегат 3";
            this->btn_agregat3->UseVisualStyleBackColor = false;
            this->btn_agregat3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::btn_agregat_MouseDown);
            this->btn_agregat3->MouseEnter += gcnew System::EventHandler(this, &FormTP17::btn_agregat_MouseEnter);
            this->btn_agregat3->MouseLeave += gcnew System::EventHandler(this, &FormTP17::btn_agregat_MouseLeave);
            this->btn_agregat3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::btn_agregat_MouseUp);
            // 
            // button_zapas1
            // 
            this->button_zapas1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->button_zapas1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_zapas1.BackgroundImage")));
            this->button_zapas1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button_zapas1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button_zapas1->FlatAppearance->BorderSize = 0;
            this->button_zapas1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->button_zapas1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->button_zapas1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button_zapas1->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button_zapas1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button_zapas1->Location = System::Drawing::Point(133, 532);
            this->button_zapas1->Name = L"button_zapas1";
            this->button_zapas1->Size = System::Drawing::Size(813, 88);
            this->button_zapas1->TabIndex = 6;
            this->button_zapas1->Text = L"Запасный 1";
            this->button_zapas1->UseVisualStyleBackColor = false;
            this->button_zapas1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::button_obj_MouseDown);
            this->button_zapas1->MouseEnter += gcnew System::EventHandler(this, &FormTP17::button_obj_MouseEnter);
            this->button_zapas1->MouseLeave += gcnew System::EventHandler(this, &FormTP17::button_obj_MouseLeave);
            this->button_zapas1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::button_obj_MouseUp);
            // 
            // button_streln
            // 
            this->button_streln->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->button_streln->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_streln.BackgroundImage")));
            this->button_streln->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button_streln->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button_streln->FlatAppearance->BorderSize = 0;
            this->button_streln->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->button_streln->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->button_streln->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button_streln->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button_streln->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button_streln->Location = System::Drawing::Point(980, 529);
            this->button_streln->Name = L"button_streln";
            this->button_streln->Size = System::Drawing::Size(813, 88);
            this->button_streln->TabIndex = 7;
            this->button_streln->Text = L"Стрельнинский";
            this->button_streln->UseVisualStyleBackColor = false;
            this->button_streln->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::button_obj_MouseDown);
            this->button_streln->MouseEnter += gcnew System::EventHandler(this, &FormTP17::button_obj_MouseEnter);
            this->button_streln->MouseLeave += gcnew System::EventHandler(this, &FormTP17::button_obj_MouseLeave);
            this->button_streln->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::button_obj_MouseUp);
            // 
            // button_LEMZ
            // 
            this->button_LEMZ->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->button_LEMZ->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_LEMZ.BackgroundImage")));
            this->button_LEMZ->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button_LEMZ->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button_LEMZ->FlatAppearance->BorderSize = 0;
            this->button_LEMZ->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->button_LEMZ->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->button_LEMZ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button_LEMZ->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button_LEMZ->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button_LEMZ->Location = System::Drawing::Point(133, 640);
            this->button_LEMZ->Name = L"button_LEMZ";
            this->button_LEMZ->Size = System::Drawing::Size(813, 88);
            this->button_LEMZ->TabIndex = 8;
            this->button_LEMZ->Text = L"ЛЭМЗ";
            this->button_LEMZ->UseVisualStyleBackColor = false;
            this->button_LEMZ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::button_obj_MouseDown);
            this->button_LEMZ->MouseEnter += gcnew System::EventHandler(this, &FormTP17::button_obj_MouseEnter);
            this->button_LEMZ->MouseLeave += gcnew System::EventHandler(this, &FormTP17::button_obj_MouseLeave);
            this->button_LEMZ->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::button_obj_MouseUp);
            // 
            // button_sosna
            // 
            this->button_sosna->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->button_sosna->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_sosna.BackgroundImage")));
            this->button_sosna->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button_sosna->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button_sosna->FlatAppearance->BorderSize = 0;
            this->button_sosna->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->button_sosna->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->button_sosna->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button_sosna->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button_sosna->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button_sosna->Location = System::Drawing::Point(133, 751);
            this->button_sosna->Name = L"button_sosna";
            this->button_sosna->Size = System::Drawing::Size(813, 88);
            this->button_sosna->TabIndex = 9;
            this->button_sosna->Text = L"Сосновый";
            this->button_sosna->UseVisualStyleBackColor = false;
            this->button_sosna->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::button_obj_MouseDown);
            this->button_sosna->MouseEnter += gcnew System::EventHandler(this, &FormTP17::button_obj_MouseEnter);
            this->button_sosna->MouseLeave += gcnew System::EventHandler(this, &FormTP17::button_obj_MouseLeave);
            this->button_sosna->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::button_obj_MouseUp);
            // 
            // button_pioner
            // 
            this->button_pioner->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->button_pioner->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_pioner.BackgroundImage")));
            this->button_pioner->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button_pioner->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button_pioner->FlatAppearance->BorderSize = 0;
            this->button_pioner->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->button_pioner->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->button_pioner->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button_pioner->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button_pioner->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button_pioner->Location = System::Drawing::Point(980, 640);
            this->button_pioner->Name = L"button_pioner";
            this->button_pioner->Size = System::Drawing::Size(813, 88);
            this->button_pioner->TabIndex = 10;
            this->button_pioner->Text = L"Пионерстроя (тб)";
            this->button_pioner->UseVisualStyleBackColor = false;
            this->button_pioner->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::button_obj_MouseDown);
            this->button_pioner->MouseEnter += gcnew System::EventHandler(this, &FormTP17::button_obj_MouseEnter);
            this->button_pioner->MouseLeave += gcnew System::EventHandler(this, &FormTP17::button_obj_MouseLeave);
            this->button_pioner->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::button_obj_MouseUp);
            // 
            // button_zapas2
            // 
            this->button_zapas2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->button_zapas2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_zapas2.BackgroundImage")));
            this->button_zapas2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button_zapas2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button_zapas2->FlatAppearance->BorderSize = 0;
            this->button_zapas2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->button_zapas2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->button_zapas2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button_zapas2->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button_zapas2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button_zapas2->Location = System::Drawing::Point(980, 751);
            this->button_zapas2->Name = L"button_zapas2";
            this->button_zapas2->Size = System::Drawing::Size(813, 88);
            this->button_zapas2->TabIndex = 11;
            this->button_zapas2->Text = L"Запасный 2";
            this->button_zapas2->UseVisualStyleBackColor = false;
            this->button_zapas2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::button_obj_MouseDown);
            this->button_zapas2->MouseEnter += gcnew System::EventHandler(this, &FormTP17::button_obj_MouseEnter);
            this->button_zapas2->MouseLeave += gcnew System::EventHandler(this, &FormTP17::button_obj_MouseLeave);
            this->button_zapas2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::button_obj_MouseUp);
            // 
            // panel_header
            // 
            this->panel_header->BackColor = System::Drawing::Color::Transparent;
            this->panel_header->Location = System::Drawing::Point(-1, 0);
            this->panel_header->Name = L"panel_header";
            this->panel_header->Size = System::Drawing::Size(1792, 56);
            this->panel_header->TabIndex = 12;
            this->panel_header->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::panel_header_MouseDown);
            this->panel_header->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::panel_header_MouseMove);
            // 
            // btn_all_data
            // 
            this->btn_all_data->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_all_data.BackgroundImage")));
            this->btn_all_data->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_all_data->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_all_data->FlatAppearance->BorderSize = 0;
            this->btn_all_data->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
            this->btn_all_data->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
            this->btn_all_data->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_all_data->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btn_all_data->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_all_data->Location = System::Drawing::Point(33, 943);
            this->btn_all_data->Name = L"btn_all_data";
            this->btn_all_data->Size = System::Drawing::Size(927, 105);
            this->btn_all_data->TabIndex = 13;
            this->btn_all_data->Text = L"Извлечь данные всех устройств";
            this->btn_all_data->UseVisualStyleBackColor = true;
            this->btn_all_data->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::btn_all_data_MouseDown);
            this->btn_all_data->MouseEnter += gcnew System::EventHandler(this, &FormTP17::btn_all_data_MouseEnter);
            this->btn_all_data->MouseLeave += gcnew System::EventHandler(this, &FormTP17::btn_all_data_MouseLeave);
            this->btn_all_data->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::btn_all_data_MouseUp);
            // 
            // btn_back
            // 
            this->btn_back->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_back.BackgroundImage")));
            this->btn_back->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_back->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_back->FlatAppearance->BorderSize = 0;
            this->btn_back->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
            this->btn_back->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
            this->btn_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_back->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_back->Location = System::Drawing::Point(1657, 943);
            this->btn_back->Name = L"btn_back";
            this->btn_back->Size = System::Drawing::Size(232, 105);
            this->btn_back->TabIndex = 14;
            this->btn_back->UseVisualStyleBackColor = true;
            this->btn_back->Click += gcnew System::EventHandler(this, &FormTP17::btn_back_Click);
            this->btn_back->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::btn_back_MouseDown);
            this->btn_back->MouseEnter += gcnew System::EventHandler(this, &FormTP17::btn_back_MouseEnter);
            this->btn_back->MouseLeave += gcnew System::EventHandler(this, &FormTP17::btn_back_MouseLeave);
            this->btn_back->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &FormTP17::btn_back_MouseUp);
            // 
            // FormTP17
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(1920, 1080);
            this->Controls->Add(this->btn_back);
            this->Controls->Add(this->btn_all_data);
            this->Controls->Add(this->panel_header);
            this->Controls->Add(this->button_zapas2);
            this->Controls->Add(this->button_pioner);
            this->Controls->Add(this->button_sosna);
            this->Controls->Add(this->button_LEMZ);
            this->Controls->Add(this->button_streln);
            this->Controls->Add(this->button_zapas1);
            this->Controls->Add(this->btn_agregat3);
            this->Controls->Add(this->btn_agregat2);
            this->Controls->Add(this->btn_agregat1);
            this->Controls->Add(this->btn_VVV_3);
            this->Controls->Add(this->btn_collapse);
            this->Controls->Add(this->btn_close);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"FormTP17";
            this->Text = L"FormTP17";
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void btn_close_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_collapse_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void panel_header_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void panel_header_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void btn_VVV_3_MouseEnter(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btn_VVV_3_MouseLeave(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btn_VVV_3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void btn_VVV_3_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void btn_collapse_MouseEnter(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btn_collapse_MouseLeave(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btn_close_MouseEnter(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btn_close_MouseLeave(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btn_agregat_MouseEnter(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btn_agregat_MouseLeave(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btn_agregat_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void btn_agregat_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void button_obj_MouseEnter(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button_obj_MouseLeave(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button_obj_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void button_obj_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void btn_all_data_MouseEnter(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btn_all_data_MouseLeave(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btn_all_data_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void btn_all_data_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void btn_back_MouseEnter(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btn_back_MouseLeave(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btn_back_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void btn_back_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btn_obj_Click(System::Object^ sender, System::EventArgs^ e);
};
}
