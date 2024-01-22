#pragma once

namespace Applicationofrecorderdatamonitoring {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_close;
    private: System::Windows::Forms::Button^ btn_collapse;

	private: System::Windows::Forms::Button^ btn_tp17;
	private: System::Windows::Forms::Button^ btn_tp23;
	private: System::Windows::Forms::Button^ btn_tp30;
	private: System::Windows::Forms::Button^ btn_tp40;




	private: System::Windows::Forms::Button^ btn_tp38;

	private: System::Windows::Forms::Button^ btn_tp37;
	private: System::Windows::Forms::Button^ btn_tp56;


	private: System::Windows::Forms::Button^ btn_tp54;

	private: System::Windows::Forms::Button^ btn_tp41;
	private: System::Windows::Forms::Button^ btn_tp68;



	private: System::Windows::Forms::Button^ btn_tp65;
    private: System::Windows::Forms::Button^ btn_tp82;
    private: System::Windows::Forms::Button^ btn_tp81;
    private: System::Windows::Forms::Button^ btn_tp77;
    private: System::Windows::Forms::Button^ btn_tp75;
    private: System::Windows::Forms::Button^ btn_tp73;
    private: System::Windows::Forms::Button^ btn_tp50;
    private: System::Windows::Forms::Button^ btn_tp45;
    private: System::Windows::Forms::Button^ btn_tp16;
    private: System::Windows::Forms::Button^ btn_tp10;
    private: System::Windows::Forms::Button^ btn_tp4;
    private: System::Windows::Forms::Panel^ panel_header;


	protected:


	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->btn_close = (gcnew System::Windows::Forms::Button());
            this->btn_collapse = (gcnew System::Windows::Forms::Button());
            this->btn_tp17 = (gcnew System::Windows::Forms::Button());
            this->btn_tp23 = (gcnew System::Windows::Forms::Button());
            this->btn_tp30 = (gcnew System::Windows::Forms::Button());
            this->btn_tp40 = (gcnew System::Windows::Forms::Button());
            this->btn_tp38 = (gcnew System::Windows::Forms::Button());
            this->btn_tp37 = (gcnew System::Windows::Forms::Button());
            this->btn_tp56 = (gcnew System::Windows::Forms::Button());
            this->btn_tp54 = (gcnew System::Windows::Forms::Button());
            this->btn_tp41 = (gcnew System::Windows::Forms::Button());
            this->btn_tp68 = (gcnew System::Windows::Forms::Button());
            this->btn_tp65 = (gcnew System::Windows::Forms::Button());
            this->btn_tp82 = (gcnew System::Windows::Forms::Button());
            this->btn_tp81 = (gcnew System::Windows::Forms::Button());
            this->btn_tp77 = (gcnew System::Windows::Forms::Button());
            this->btn_tp75 = (gcnew System::Windows::Forms::Button());
            this->btn_tp73 = (gcnew System::Windows::Forms::Button());
            this->btn_tp50 = (gcnew System::Windows::Forms::Button());
            this->btn_tp45 = (gcnew System::Windows::Forms::Button());
            this->btn_tp16 = (gcnew System::Windows::Forms::Button());
            this->btn_tp10 = (gcnew System::Windows::Forms::Button());
            this->btn_tp4 = (gcnew System::Windows::Forms::Button());
            this->panel_header = (gcnew System::Windows::Forms::Panel());
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
            this->btn_close->Click += gcnew System::EventHandler(this, &MyForm::btn_close_Click);
            this->btn_close->MouseLeave += gcnew System::EventHandler(this, &MyForm::btn_close_MouseLeave);
            this->btn_close->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_close_MouseMove);
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
            this->btn_collapse->Click += gcnew System::EventHandler(this, &MyForm::btn_collapse_Click);
            this->btn_collapse->MouseLeave += gcnew System::EventHandler(this, &MyForm::btn_collapse_MouseLeave);
            this->btn_collapse->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_collapse_MouseMove);
            // 
            // btn_tp17
            // 
            this->btn_tp17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp17->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp17->FlatAppearance->BorderSize = 0;
            this->btn_tp17->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp17->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp17->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp17->Location = System::Drawing::Point(393, 282);
            this->btn_tp17->MinimumSize = System::Drawing::Size(110, 110);
            this->btn_tp17->Name = L"btn_tp17";
            this->btn_tp17->Size = System::Drawing::Size(120, 120);
            this->btn_tp17->TabIndex = 2;
            this->btn_tp17->Text = L"17";
            this->btn_tp17->UseVisualStyleBackColor = false;
            this->btn_tp17->Click += gcnew System::EventHandler(this, &MyForm::btn_tp17_Click);
            this->btn_tp17->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp17->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp17->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp17->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp23
            // 
            this->btn_tp23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp23->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp23->FlatAppearance->BorderSize = 0;
            this->btn_tp23->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp23->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp23->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp23->Location = System::Drawing::Point(555, 282);
            this->btn_tp23->Name = L"btn_tp23";
            this->btn_tp23->Size = System::Drawing::Size(120, 120);
            this->btn_tp23->TabIndex = 3;
            this->btn_tp23->Text = L"23";
            this->btn_tp23->UseVisualStyleBackColor = false;
            this->btn_tp23->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp23->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp23->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp23->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp30
            // 
            this->btn_tp30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp30->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp30->FlatAppearance->BorderSize = 0;
            this->btn_tp30->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp30->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp30->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp30->Location = System::Drawing::Point(717, 282);
            this->btn_tp30->Name = L"btn_tp30";
            this->btn_tp30->Size = System::Drawing::Size(120, 120);
            this->btn_tp30->TabIndex = 4;
            this->btn_tp30->Text = L"30";
            this->btn_tp30->UseVisualStyleBackColor = false;
            this->btn_tp30->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp30->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp30->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp30->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp40
            // 
            this->btn_tp40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp40->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp40->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp40->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp40->FlatAppearance->BorderSize = 0;
            this->btn_tp40->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp40->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp40->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp40->Location = System::Drawing::Point(717, 442);
            this->btn_tp40->Name = L"btn_tp40";
            this->btn_tp40->Size = System::Drawing::Size(120, 120);
            this->btn_tp40->TabIndex = 7;
            this->btn_tp40->Text = L"40";
            this->btn_tp40->UseVisualStyleBackColor = false;
            this->btn_tp40->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp40->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp40->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp40->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp38
            // 
            this->btn_tp38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp38->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp38->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp38->FlatAppearance->BorderSize = 0;
            this->btn_tp38->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp38->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp38->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp38->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp38->Location = System::Drawing::Point(555, 442);
            this->btn_tp38->Name = L"btn_tp38";
            this->btn_tp38->Size = System::Drawing::Size(120, 120);
            this->btn_tp38->TabIndex = 6;
            this->btn_tp38->Text = L"38";
            this->btn_tp38->UseVisualStyleBackColor = false;
            this->btn_tp38->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp38->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp38->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp38->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp37
            // 
            this->btn_tp37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp37->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp37->FlatAppearance->BorderSize = 0;
            this->btn_tp37->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp37->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp37->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp37->Location = System::Drawing::Point(393, 442);
            this->btn_tp37->Name = L"btn_tp37";
            this->btn_tp37->Size = System::Drawing::Size(120, 120);
            this->btn_tp37->TabIndex = 5;
            this->btn_tp37->Text = L"37";
            this->btn_tp37->UseVisualStyleBackColor = false;
            this->btn_tp37->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp37->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp37->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp37->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp56
            // 
            this->btn_tp56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp56->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp56->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp56->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp56->FlatAppearance->BorderSize = 0;
            this->btn_tp56->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp56->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp56->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp56->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp56->Location = System::Drawing::Point(717, 602);
            this->btn_tp56->Name = L"btn_tp56";
            this->btn_tp56->Size = System::Drawing::Size(120, 120);
            this->btn_tp56->TabIndex = 10;
            this->btn_tp56->Text = L"56";
            this->btn_tp56->UseVisualStyleBackColor = false;
            this->btn_tp56->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp56->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp56->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp56->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp54
            // 
            this->btn_tp54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp54->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp54->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp54->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp54->FlatAppearance->BorderSize = 0;
            this->btn_tp54->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp54->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp54->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp54->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp54->Location = System::Drawing::Point(555, 602);
            this->btn_tp54->Name = L"btn_tp54";
            this->btn_tp54->Size = System::Drawing::Size(120, 120);
            this->btn_tp54->TabIndex = 9;
            this->btn_tp54->Text = L"54";
            this->btn_tp54->UseVisualStyleBackColor = false;
            this->btn_tp54->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp54->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp54->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp54->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp41
            // 
            this->btn_tp41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp41->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp41->FlatAppearance->BorderSize = 0;
            this->btn_tp41->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp41->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp41->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp41->Location = System::Drawing::Point(393, 602);
            this->btn_tp41->Name = L"btn_tp41";
            this->btn_tp41->Size = System::Drawing::Size(120, 120);
            this->btn_tp41->TabIndex = 8;
            this->btn_tp41->Text = L"41";
            this->btn_tp41->UseVisualStyleBackColor = false;
            this->btn_tp41->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp41->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp41->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp41->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp68
            // 
            this->btn_tp68->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp68->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp68->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp68->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp68->FlatAppearance->BorderSize = 0;
            this->btn_tp68->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp68->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp68->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp68->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp68->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp68->Location = System::Drawing::Point(555, 762);
            this->btn_tp68->Name = L"btn_tp68";
            this->btn_tp68->Size = System::Drawing::Size(120, 120);
            this->btn_tp68->TabIndex = 12;
            this->btn_tp68->Text = L"68";
            this->btn_tp68->UseVisualStyleBackColor = false;
            this->btn_tp68->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp68->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp68->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp68->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp65
            // 
            this->btn_tp65->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp65->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp65->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp65->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp65->FlatAppearance->BorderSize = 0;
            this->btn_tp65->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp65->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp65->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp65->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp65->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp65->Location = System::Drawing::Point(393, 762);
            this->btn_tp65->Name = L"btn_tp65";
            this->btn_tp65->Size = System::Drawing::Size(120, 120);
            this->btn_tp65->TabIndex = 11;
            this->btn_tp65->Text = L"65";
            this->btn_tp65->UseVisualStyleBackColor = false;
            this->btn_tp65->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp65->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp65->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp65->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp82
            // 
            this->btn_tp82->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp82->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp82->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp82->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp82->FlatAppearance->BorderSize = 0;
            this->btn_tp82->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp82->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp82->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp82->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp82->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp82->Location = System::Drawing::Point(1081, 762);
            this->btn_tp82->Name = L"btn_tp82";
            this->btn_tp82->Size = System::Drawing::Size(120, 120);
            this->btn_tp82->TabIndex = 22;
            this->btn_tp82->Text = L"82";
            this->btn_tp82->UseVisualStyleBackColor = false;
            this->btn_tp82->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp82->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp82->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp82->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp81
            // 
            this->btn_tp81->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp81->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp81->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp81->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp81->FlatAppearance->BorderSize = 0;
            this->btn_tp81->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp81->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp81->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp81->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp81->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp81->Location = System::Drawing::Point(1405, 602);
            this->btn_tp81->Name = L"btn_tp81";
            this->btn_tp81->Size = System::Drawing::Size(120, 120);
            this->btn_tp81->TabIndex = 21;
            this->btn_tp81->Text = L"81";
            this->btn_tp81->UseVisualStyleBackColor = false;
            this->btn_tp81->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp81->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp81->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp81->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp77
            // 
            this->btn_tp77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp77->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp77->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp77->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp77->FlatAppearance->BorderSize = 0;
            this->btn_tp77->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp77->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp77->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp77->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp77->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp77->Location = System::Drawing::Point(1243, 602);
            this->btn_tp77->Name = L"btn_tp77";
            this->btn_tp77->Size = System::Drawing::Size(120, 120);
            this->btn_tp77->TabIndex = 20;
            this->btn_tp77->Text = L"77";
            this->btn_tp77->UseVisualStyleBackColor = false;
            this->btn_tp77->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp77->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp77->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp77->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp75
            // 
            this->btn_tp75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp75->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp75->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp75->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp75->FlatAppearance->BorderSize = 0;
            this->btn_tp75->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp75->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp75->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp75->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp75->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp75->Location = System::Drawing::Point(1081, 602);
            this->btn_tp75->Name = L"btn_tp75";
            this->btn_tp75->Size = System::Drawing::Size(120, 120);
            this->btn_tp75->TabIndex = 19;
            this->btn_tp75->Text = L"75";
            this->btn_tp75->UseVisualStyleBackColor = false;
            this->btn_tp75->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp75->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp75->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp75->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp73
            // 
            this->btn_tp73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp73->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp73->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp73->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp73->FlatAppearance->BorderSize = 0;
            this->btn_tp73->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp73->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp73->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp73->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp73->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp73->Location = System::Drawing::Point(1405, 442);
            this->btn_tp73->Name = L"btn_tp73";
            this->btn_tp73->Size = System::Drawing::Size(120, 120);
            this->btn_tp73->TabIndex = 18;
            this->btn_tp73->Text = L"73";
            this->btn_tp73->UseVisualStyleBackColor = false;
            this->btn_tp73->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp73->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp73->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp73->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp50
            // 
            this->btn_tp50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp50->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp50->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp50->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp50->FlatAppearance->BorderSize = 0;
            this->btn_tp50->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp50->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp50->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp50->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp50->Location = System::Drawing::Point(1243, 442);
            this->btn_tp50->Name = L"btn_tp50";
            this->btn_tp50->Size = System::Drawing::Size(120, 120);
            this->btn_tp50->TabIndex = 17;
            this->btn_tp50->Text = L"50";
            this->btn_tp50->UseVisualStyleBackColor = false;
            this->btn_tp50->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp50->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp50->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp50->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp45
            // 
            this->btn_tp45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp45->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp45->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp45->FlatAppearance->BorderSize = 0;
            this->btn_tp45->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp45->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp45->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp45->Location = System::Drawing::Point(1081, 442);
            this->btn_tp45->Name = L"btn_tp45";
            this->btn_tp45->Size = System::Drawing::Size(120, 120);
            this->btn_tp45->TabIndex = 16;
            this->btn_tp45->Text = L"45";
            this->btn_tp45->UseVisualStyleBackColor = false;
            this->btn_tp45->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp45->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp45->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp45->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp16
            // 
            this->btn_tp16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp16->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp16->FlatAppearance->BorderSize = 0;
            this->btn_tp16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp16->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp16->Location = System::Drawing::Point(1405, 282);
            this->btn_tp16->Name = L"btn_tp16";
            this->btn_tp16->Size = System::Drawing::Size(120, 120);
            this->btn_tp16->TabIndex = 15;
            this->btn_tp16->Text = L"16";
            this->btn_tp16->UseVisualStyleBackColor = false;
            this->btn_tp16->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp16->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp16->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp16->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp10
            // 
            this->btn_tp10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp10->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp10->FlatAppearance->BorderSize = 0;
            this->btn_tp10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp10->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp10->Location = System::Drawing::Point(1243, 282);
            this->btn_tp10->Name = L"btn_tp10";
            this->btn_tp10->Size = System::Drawing::Size(120, 120);
            this->btn_tp10->TabIndex = 14;
            this->btn_tp10->Text = L"10";
            this->btn_tp10->UseVisualStyleBackColor = false;
            this->btn_tp10->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp10->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp10->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp10->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // btn_tp4
            // 
            this->btn_tp4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tp")));
            this->btn_tp4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->btn_tp4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btn_tp4->FlatAppearance->BorderSize = 0;
            this->btn_tp4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->btn_tp4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_tp4->Font = (gcnew System::Drawing::Font(L"Arial", 40));
            this->btn_tp4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_tp4->Location = System::Drawing::Point(1081, 282);
            this->btn_tp4->Name = L"btn_tp4";
            this->btn_tp4->Size = System::Drawing::Size(120, 120);
            this->btn_tp4->TabIndex = 13;
            this->btn_tp4->Text = L"4";
            this->btn_tp4->UseVisualStyleBackColor = false;
            this->btn_tp4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseDown);
            this->btn_tp4->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_tp_MouseLeave);
            this->btn_tp4->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_tp_MouseMove);
            this->btn_tp4->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btn_tp_MouseUp);
            // 
            // panel_header
            // 
            this->panel_header->BackColor = System::Drawing::Color::Transparent;
            this->panel_header->Location = System::Drawing::Point(0, 0);
            this->panel_header->Name = L"panel_header";
            this->panel_header->Size = System::Drawing::Size(1790, 57);
            this->panel_header->TabIndex = 23;
            this->panel_header->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel_header_MouseDown);
            this->panel_header->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel_header_MouseMove);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoSize = true;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->ClientSize = System::Drawing::Size(1920, 1080);
            this->Controls->Add(this->panel_header);
            this->Controls->Add(this->btn_tp82);
            this->Controls->Add(this->btn_tp81);
            this->Controls->Add(this->btn_tp77);
            this->Controls->Add(this->btn_tp75);
            this->Controls->Add(this->btn_tp73);
            this->Controls->Add(this->btn_tp50);
            this->Controls->Add(this->btn_tp45);
            this->Controls->Add(this->btn_tp16);
            this->Controls->Add(this->btn_tp10);
            this->Controls->Add(this->btn_tp4);
            this->Controls->Add(this->btn_tp68);
            this->Controls->Add(this->btn_tp65);
            this->Controls->Add(this->btn_tp56);
            this->Controls->Add(this->btn_tp54);
            this->Controls->Add(this->btn_tp41);
            this->Controls->Add(this->btn_tp40);
            this->Controls->Add(this->btn_tp38);
            this->Controls->Add(this->btn_tp37);
            this->Controls->Add(this->btn_tp30);
            this->Controls->Add(this->btn_tp23);
            this->Controls->Add(this->btn_tp17);
            this->Controls->Add(this->btn_collapse);
            this->Controls->Add(this->btn_close);
            this->DoubleBuffered = true;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_close_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button_tp_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void button_tp_MouseLeave(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btn_close_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void btn_close_MouseLeave(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btn_tp_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void btn_tp_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void btn_collapse_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void btn_collapse_MouseLeave(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btn_collapse_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void panel_header_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void panel_header_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void btn_tp17_Click(System::Object^ sender, System::EventArgs^ e);
};
}
