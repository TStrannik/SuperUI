#pragma once

namespace SuperUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlMenu;
	protected:
	private: System::Windows::Forms::Panel^ pnlLogo;
	private: System::Windows::Forms::Panel^ pnlHead;
	private: System::Windows::Forms::Button^ btnGavka;

	private: System::Windows::Forms::Panel^ pnlGavkaSubmenu;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;



	private: System::Windows::Forms::Panel^ pnlBottom;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Panel^ pnlForm;
	private: System::Windows::Forms::Button^ btnFCls;
	private: System::Windows::Forms::Button^ btnFMin;
	private: System::Windows::Forms::Button^ btnFWin;
	private: System::Windows::Forms::Panel^ pnlContent;




	private: System::Windows::Forms::Panel^ pnlAuth;
	private: System::Windows::Forms::PictureBox^ pictureBoxBack;




	private: System::Windows::Forms::LinkLabel^ lllGachi;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button8;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pnlMenu = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pnlGavkaSubmenu = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnGavka = (gcnew System::Windows::Forms::Button());
			this->pnlLogo = (gcnew System::Windows::Forms::Panel());
			this->pnlHead = (gcnew System::Windows::Forms::Panel());
			this->pnlBottom = (gcnew System::Windows::Forms::Panel());
			this->pnlForm = (gcnew System::Windows::Forms::Panel());
			this->btnFMin = (gcnew System::Windows::Forms::Button());
			this->btnFWin = (gcnew System::Windows::Forms::Button());
			this->btnFCls = (gcnew System::Windows::Forms::Button());
			this->pnlContent = (gcnew System::Windows::Forms::Panel());
			this->pnlAuth = (gcnew System::Windows::Forms::Panel());
			this->lllGachi = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxBack = (gcnew System::Windows::Forms::PictureBox());
			this->pnlMenu->SuspendLayout();
			this->pnlGavkaSubmenu->SuspendLayout();
			this->pnlForm->SuspendLayout();
			this->pnlContent->SuspendLayout();
			this->pnlAuth->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBack))->BeginInit();
			this->SuspendLayout();
			// 
			// pnlMenu
			// 
			this->pnlMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlMenu->Controls->Add(this->btnExit);
			this->pnlMenu->Controls->Add(this->button7);
			this->pnlMenu->Controls->Add(this->button6);
			this->pnlMenu->Controls->Add(this->pnlGavkaSubmenu);
			this->pnlMenu->Controls->Add(this->btnGavka);
			this->pnlMenu->Controls->Add(this->pnlLogo);
			this->pnlMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlMenu->Location = System::Drawing::Point(0, 30);
			this->pnlMenu->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->pnlMenu->Name = L"pnlMenu";
			this->pnlMenu->Size = System::Drawing::Size(219, 648);
			this->pnlMenu->TabIndex = 0;
			// 
			// btnExit
			// 
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnExit->Location = System::Drawing::Point(0, 596);
			this->btnExit->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Padding = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->btnExit->Size = System::Drawing::Size(219, 52);
			this->btnExit->TabIndex = 5;
			this->btnExit->Text = L"Exit";
			this->btnExit->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			this->btnExit->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::btnExit_Paint);
			// 
			// button7
			// 
			this->button7->Dock = System::Windows::Forms::DockStyle::Top;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(0, 369);
			this->button7->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button7->Name = L"button7";
			this->button7->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button7->Size = System::Drawing::Size(219, 52);
			this->button7->TabIndex = 4;
			this->button7->Text = L"Kogtic";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button6->Dock = System::Windows::Forms::DockStyle::Top;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(0, 317);
			this->button6->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button6->Name = L"button6";
			this->button6->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button6->Size = System::Drawing::Size(219, 52);
			this->button6->TabIndex = 3;
			this->button6->Text = L"Aboba";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// pnlGavkaSubmenu
			// 
			this->pnlGavkaSubmenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->pnlGavkaSubmenu->Controls->Add(this->button5);
			this->pnlGavkaSubmenu->Controls->Add(this->button4);
			this->pnlGavkaSubmenu->Controls->Add(this->button3);
			this->pnlGavkaSubmenu->Controls->Add(this->button2);
			this->pnlGavkaSubmenu->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlGavkaSubmenu->Location = System::Drawing::Point(0, 130);
			this->pnlGavkaSubmenu->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->pnlGavkaSubmenu->Name = L"pnlGavkaSubmenu";
			this->pnlGavkaSubmenu->Size = System::Drawing::Size(219, 187);
			this->pnlGavkaSubmenu->TabIndex = 2;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gray;
			this->button5->Dock = System::Windows::Forms::DockStyle::Top;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Location = System::Drawing::Point(0, 138);
			this->button5->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button5->Name = L"button5";
			this->button5->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button5->Size = System::Drawing::Size(219, 46);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Chewbakka";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gray;
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Location = System::Drawing::Point(0, 92);
			this->button4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button4->Size = System::Drawing::Size(219, 46);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Svistosvinya";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gray;
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(0, 46);
			this->button3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button3->Size = System::Drawing::Size(219, 46);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Jivotnoye";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->button2->Size = System::Drawing::Size(219, 46);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Bulochka";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// btnGavka
			// 
			this->btnGavka->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnGavka->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnGavka->FlatAppearance->BorderSize = 0;
			this->btnGavka->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGavka->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnGavka->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnGavka->Location = System::Drawing::Point(0, 78);
			this->btnGavka->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnGavka->Name = L"btnGavka";
			this->btnGavka->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnGavka->Size = System::Drawing::Size(219, 52);
			this->btnGavka->TabIndex = 1;
			this->btnGavka->Text = L"Gavka";
			this->btnGavka->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGavka->UseVisualStyleBackColor = false;
			this->btnGavka->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->btnGavka->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::btnGavka_Paint);
			// 
			// pnlLogo
			// 
			this->pnlLogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlLogo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlLogo.BackgroundImage")));
			this->pnlLogo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pnlLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlLogo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pnlLogo->Location = System::Drawing::Point(0, 0);
			this->pnlLogo->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->pnlLogo->Name = L"pnlLogo";
			this->pnlLogo->Size = System::Drawing::Size(219, 78);
			this->pnlLogo->TabIndex = 0;
			// 
			// pnlHead
			// 
			this->pnlHead->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pnlHead->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlHead->Location = System::Drawing::Point(219, 30);
			this->pnlHead->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->pnlHead->Name = L"pnlHead";
			this->pnlHead->Size = System::Drawing::Size(946, 42);
			this->pnlHead->TabIndex = 1;
			// 
			// pnlBottom
			// 
			this->pnlBottom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pnlBottom->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pnlBottom->Location = System::Drawing::Point(219, 632);
			this->pnlBottom->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->pnlBottom->Name = L"pnlBottom";
			this->pnlBottom->Size = System::Drawing::Size(946, 46);
			this->pnlBottom->TabIndex = 2;
			// 
			// pnlForm
			// 
			this->pnlForm->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->pnlForm->Controls->Add(this->btnFMin);
			this->pnlForm->Controls->Add(this->btnFWin);
			this->pnlForm->Controls->Add(this->btnFCls);
			this->pnlForm->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlForm->Location = System::Drawing::Point(0, 0);
			this->pnlForm->Name = L"pnlForm";
			this->pnlForm->Size = System::Drawing::Size(1165, 30);
			this->pnlForm->TabIndex = 3;
			// 
			// btnFMin
			// 
			this->btnFMin->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnFMin->FlatAppearance->BorderSize = 0;
			this->btnFMin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btnFMin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnFMin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFMin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFMin.Image")));
			this->btnFMin->Location = System::Drawing::Point(1075, 0);
			this->btnFMin->Name = L"btnFMin";
			this->btnFMin->Size = System::Drawing::Size(30, 30);
			this->btnFMin->TabIndex = 2;
			this->btnFMin->UseVisualStyleBackColor = true;
			this->btnFMin->Click += gcnew System::EventHandler(this, &MyForm::btnFMin_Click);
			// 
			// btnFWin
			// 
			this->btnFWin->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnFWin->FlatAppearance->BorderSize = 0;
			this->btnFWin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btnFWin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnFWin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFWin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFWin.Image")));
			this->btnFWin->Location = System::Drawing::Point(1105, 0);
			this->btnFWin->Name = L"btnFWin";
			this->btnFWin->Size = System::Drawing::Size(30, 30);
			this->btnFWin->TabIndex = 1;
			this->btnFWin->UseVisualStyleBackColor = true;
			this->btnFWin->Click += gcnew System::EventHandler(this, &MyForm::btnFWin_Click);
			// 
			// btnFCls
			// 
			this->btnFCls->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnFCls->FlatAppearance->BorderSize = 0;
			this->btnFCls->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnFCls->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->btnFCls->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFCls->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFCls.Image")));
			this->btnFCls->Location = System::Drawing::Point(1135, 0);
			this->btnFCls->Name = L"btnFCls";
			this->btnFCls->Size = System::Drawing::Size(30, 30);
			this->btnFCls->TabIndex = 0;
			this->btnFCls->UseVisualStyleBackColor = true;
			this->btnFCls->Click += gcnew System::EventHandler(this, &MyForm::btnFCls_Click);
			// 
			// pnlContent
			// 
			this->pnlContent->Controls->Add(this->pnlAuth);
			this->pnlContent->Controls->Add(this->pictureBoxBack);
			this->pnlContent->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlContent->Location = System::Drawing::Point(219, 72);
			this->pnlContent->Name = L"pnlContent";
			this->pnlContent->Size = System::Drawing::Size(946, 560);
			this->pnlContent->TabIndex = 4;
			// 
			// pnlAuth
			// 
			this->pnlAuth->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pnlAuth->BackColor = System::Drawing::Color::Transparent;
			this->pnlAuth->Controls->Add(this->lllGachi);
			this->pnlAuth->Controls->Add(this->label1);
			this->pnlAuth->Controls->Add(this->textBox1);
			this->pnlAuth->Controls->Add(this->button8);
			this->pnlAuth->Location = System::Drawing::Point(283, 381);
			this->pnlAuth->Name = L"pnlAuth";
			this->pnlAuth->Size = System::Drawing::Size(328, 159);
			this->pnlAuth->TabIndex = 4;
			this->pnlAuth->Visible = false;
			// 
			// lllGachi
			// 
			this->lllGachi->AutoSize = true;
			this->lllGachi->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lllGachi->LinkColor = System::Drawing::Color::DimGray;
			this->lllGachi->Location = System::Drawing::Point(117, 127);
			this->lllGachi->Name = L"lllGachi";
			this->lllGachi->Size = System::Drawing::Size(98, 18);
			this->lllGachi->TabIndex = 4;
			this->lllGachi->TabStop = true;
			this->lllGachi->Text = L"Войти в gym";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(20, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 18);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Нормально живи";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(287, 23);
			this->textBox1->TabIndex = 1;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(61, 72);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(210, 52);
			this->button8->TabIndex = 2;
			this->button8->Text = L"По понятиям";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// pictureBoxBack
			// 
			this->pictureBoxBack->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBoxBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxBack.Image")));
			this->pictureBoxBack->Location = System::Drawing::Point(0, 0);
			this->pictureBoxBack->Name = L"pictureBoxBack";
			this->pictureBoxBack->Size = System::Drawing::Size(946, 560);
			this->pictureBoxBack->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxBack->TabIndex = 5;
			this->pictureBoxBack->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1165, 678);
			this->Controls->Add(this->pnlContent);
			this->Controls->Add(this->pnlBottom);
			this->Controls->Add(this->pnlHead);
			this->Controls->Add(this->pnlMenu);
			this->Controls->Add(this->pnlForm);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->pnlMenu->ResumeLayout(false);
			this->pnlGavkaSubmenu->ResumeLayout(false);
			this->pnlForm->ResumeLayout(false);
			this->pnlContent->ResumeLayout(false);
			this->pnlAuth->ResumeLayout(false);
			this->pnlAuth->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBack))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlGavkaSubmenu->Visible = !pnlGavkaSubmenu->Visible;
		
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}

		   String^ CurrentDir = System::IO::Directory::GetCurrentDirectory();

	
	private: System::Void btnExit_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;
		g->DrawImage(Image::FromFile(CurrentDir + "\\Sources\\Icons\\exit_PNG30.png"), 10, 10, 30, 30);
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}


	   private: System::Void btnGavka_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		   System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
		   int r = 20;
		   int w = this->Width;
		   int h = this->Height;

		   path->AddArc(0, 0 , r, r, 180, 90);
			   path->AddArc(w-r, 0 ,r, r, 270, 90);
			   path->AddArc(w-r, h-r, r, r, 0, 90);
			   path->AddArc(0, h-r, r, r, 90, 90);


			this->Region = gcnew Drawing::Region(path);

	   }




	private: System::Void btnFCls_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void btnFWin_Click(System::Object^ sender, System::EventArgs^ e) {
		WindowState = (WindowState == FormWindowState::Normal ? FormWindowState::Maximized : FormWindowState::Normal);
		Refresh();
	}
	private: System::Void btnFMin_Click(System::Object^ sender, System::EventArgs^ e) {
		WindowState = (WindowState == FormWindowState::Normal ? FormWindowState::Minimized : FormWindowState::Normal);
	}
};

	

}
