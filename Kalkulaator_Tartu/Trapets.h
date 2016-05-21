#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include <algorithm>
#include <iostream>
#include <conio.h>

namespace TrapetsNS {
	std::string textB;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	// loodud, et kontrollida System::Stringi, mis tuleb textBoxist.
	/// <summary>
	/// Summary for MyForm2
	/// </summary>

	public ref class Trapets : public System::Windows::Forms::Form
	{
	public:
		int cb1 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int cb2 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int cb3 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int cb4 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int cb5 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int cb6 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int cb7 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int erased = 0;// väärtus millega kontrollin, kas on infot kustutatud kontrollija poolt.
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button1;


	public:

		int selecting = 0;// väärtus millega määran koha, kust jätkab kirjutamine pärast kustutust.
		Trapets(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Trapets()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::CheckBox^  checkBox1;
	public: System::Windows::Forms::CheckBox^  checkBox2;
	public: System::Windows::Forms::CheckBox^  checkBox3;
	public: System::Windows::Forms::CheckBox^  checkBox4;
	public: System::Windows::Forms::CheckBox^  checkBox5;
	public: System::Windows::Forms::CheckBox^  checkBox6;
	public: System::Windows::Forms::CheckBox^  checkBox7;
	public: System::Windows::Forms::TextBox^  textBox1;
	public: System::Windows::Forms::TextBox^  textBox2;
	public: System::Windows::Forms::TextBox^  textBox3;
	public: System::Windows::Forms::TextBox^  textBox4;
	public: System::Windows::Forms::TextBox^  textBox5;
	public: System::Windows::Forms::TextBox^  textBox6;
	public: System::Windows::Forms::TextBox^  textBox7;
	private: bool dragging;
	private: Point offset;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
	public:
		virtual void InitializeComponent(void)
		{
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox1->ForeColor = System::Drawing::Color::Black;
			this->checkBox1->Location = System::Drawing::Point(7, 228);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(104, 24);
			this->checkBox1->TabIndex = 31;
			this->checkBox1->Text = L"a -";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Trapets::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox2->ForeColor = System::Drawing::Color::Black;
			this->checkBox2->Location = System::Drawing::Point(7, 256);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(104, 24);
			this->checkBox2->TabIndex = 32;
			this->checkBox2->Text = L"b -";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Trapets::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox3->ForeColor = System::Drawing::Color::Black;
			this->checkBox3->Location = System::Drawing::Point(7, 284);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(104, 24);
			this->checkBox3->TabIndex = 33;
			this->checkBox3->Text = L"c -";
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Trapets::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox4->ForeColor = System::Drawing::Color::Black;
			this->checkBox4->Location = System::Drawing::Point(7, 312);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(104, 24);
			this->checkBox4->TabIndex = 34;
			this->checkBox4->Text = L"d -";
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Trapets::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox5->ForeColor = System::Drawing::Color::Black;
			this->checkBox5->Location = System::Drawing::Point(7, 340);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(104, 24);
			this->checkBox5->TabIndex = 35;
			this->checkBox5->Text = L"h -";
			this->checkBox5->UseVisualStyleBackColor = false;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Trapets::checkBox5_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox6->ForeColor = System::Drawing::Color::Black;
			this->checkBox6->Location = System::Drawing::Point(7, 368);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(104, 24);
			this->checkBox6->TabIndex = 36;
			this->checkBox6->Text = L"S -";
			this->checkBox6->UseVisualStyleBackColor = false;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Trapets::checkBox6_CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox7->ForeColor = System::Drawing::Color::Black;
			this->checkBox7->Location = System::Drawing::Point(7, 396);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(104, 24);
			this->checkBox7->TabIndex = 37;
			this->checkBox7->Text = L"P -";
			this->checkBox7->UseVisualStyleBackColor = false;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &Trapets::checkBox7_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(319, 284);
			this->textBox1->MaxLength = 1;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(364, 22);
			this->textBox1->TabIndex = 38;
			this->textBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Trapets::textBox1_KeyUp);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(319, 312);
			this->textBox2->MaxLength = 1;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(364, 22);
			this->textBox2->TabIndex = 39;
			this->textBox2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Trapets::textBox2_KeyUp);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(319, 340);
			this->textBox3->MaxLength = 1;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(364, 22);
			this->textBox3->TabIndex = 40;
			this->textBox3->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Trapets::textBox3_KeyUp);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(319, 368);
			this->textBox4->MaxLength = 1;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(364, 22);
			this->textBox4->TabIndex = 41;
			this->textBox4->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Trapets::textBox4_KeyUp);
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(319, 396);
			this->textBox5->MaxLength = 1;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(364, 22);
			this->textBox5->TabIndex = 42;
			this->textBox5->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Trapets::textBox5_KeyUp);
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(319, 424);
			this->textBox6->MaxLength = 1;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(364, 22);
			this->textBox6->TabIndex = 43;
			this->textBox6->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Trapets::textBox6_KeyUp);
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(319, 452);
			this->textBox7->MaxLength = 1;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(364, 22);
			this->textBox7->TabIndex = 44;
			this->textBox7->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Trapets::textBox7_KeyUp);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox1->Location = System::Drawing::Point(689, 284);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(58, 24);
			this->comboBox1->TabIndex = 45;
			this->comboBox1->Text = L"m";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Trapets::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox2->Location = System::Drawing::Point(689, 312);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(58, 24);
			this->comboBox2->TabIndex = 46;
			this->comboBox2->Text = L"m";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Trapets::comboBox2_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox3->Location = System::Drawing::Point(689, 340);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(58, 24);
			this->comboBox3->TabIndex = 47;
			this->comboBox3->Text = L"m";
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Trapets::comboBox3_SelectedIndexChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox4->Location = System::Drawing::Point(689, 368);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(58, 24);
			this->comboBox4->TabIndex = 48;
			this->comboBox4->Text = L"m";
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Trapets::comboBox4_SelectedIndexChanged);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox5->Location = System::Drawing::Point(689, 396);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(58, 24);
			this->comboBox5->TabIndex = 49;
			this->comboBox5->Text = L"m";
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &Trapets::comboBox5_SelectedIndexChanged);
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm^2", L"Cm^2", L"Dm^2", L"m^2", L"Km^2", L"In^2" });
			this->comboBox6->Location = System::Drawing::Point(689, 424);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(58, 24);
			this->comboBox6->TabIndex = 50;
			this->comboBox6->Text = L"m^2";
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &Trapets::comboBox6_SelectedIndexChanged);
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox7->Location = System::Drawing::Point(689, 452);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(58, 24);
			this->comboBox7->TabIndex = 51;
			this->comboBox7->Text = L"m";
			this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &Trapets::comboBox7_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Cursor = System::Windows::Forms::Cursors::No;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(272, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(475, 30);
			this->label1->TabIndex = 23;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Cursor = System::Windows::Forms::Cursors::No;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(272, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(475, 30);
			this->label2->TabIndex = 24;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Cursor = System::Windows::Forms::Cursors::No;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(272, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(475, 30);
			this->label3->TabIndex = 25;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Cursor = System::Windows::Forms::Cursors::No;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(272, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(475, 30);
			this->label4->TabIndex = 26;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Cursor = System::Windows::Forms::Cursors::No;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(272, 184);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(475, 30);
			this->label5->TabIndex = 27;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Cursor = System::Windows::Forms::Cursors::No;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(272, 214);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(475, 30);
			this->label6->TabIndex = 28;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Cursor = System::Windows::Forms::Cursors::No;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(272, 244);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(475, 30);
			this->label7->TabIndex = 29;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 135);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(247, 243);
			this->pictureBox1->TabIndex = 52;
			this->pictureBox1->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 34, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(0, 45);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(259, 82);
			this->label8->TabIndex = 30;
			this->label8->Text = L"TRAPEZE";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::AliceBlue;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->checkBox3);
			this->panel1->Controls->Add(this->checkBox4);
			this->panel1->Controls->Add(this->checkBox5);
			this->panel1->Controls->Add(this->checkBox6);
			this->panel1->Controls->Add(this->checkBox7);
			this->panel1->ForeColor = System::Drawing::Color::Coral;
			this->panel1->Location = System::Drawing::Point(265, 56);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(495, 429);
			this->panel1->TabIndex = 53;
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(715, 12);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(32, 29);
			this->button1->TabIndex = 22;
			this->button1->Text = L"X";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Trapets::button1_Click);
			// 
			// Trapets
			// 
			this->AccessibleName = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(772, 497);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox7);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->ImeMode = System::Windows::Forms::ImeMode::On;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Trapets";
			this->Text = L"Trapets";
			this->Load += gcnew System::EventHandler(this, &Trapets::Trapets_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Trapets::Trapets_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Trapets::Trapets_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Trapets::Trapets_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private:
#pragma endregion


		///////////////////////////////////////////////////////////////////////////////////////////////////////
		/*CHECKBOXID*/
		///////////////////////////////////////////////////////////////////////////////////////////////////////
	public: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {// checkBoxi kuulaja.
		switcher(1);
	}
	public: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {// checkBoxi kuulaja.
		switcher(2);
	}
	public: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {// checkBoxi kuulaja.
		switcher(3);
	}
	public: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {// checkBoxi kuulaja.
		switcher(4);
	}
	public: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {// checkBoxi kuulaja.
		switcher(5);
	}
	public: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {// checkBoxi kuulaja.
		switcher(6);
	}
	public: System::Void checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {// checkBoxi kuulaja.
		switcher(7);
	}
			//SWITCHER
			void switcher(int i) {// teeb checkBoxide järgi textBoxe aktiivseks.
				std::cout << "Switcher function" << std::endl;
				switch (i) {
				case 1:// kui paned linnukese 1. checkBoxi taha siis aktiveerub 1. textBox ja vastupidi.
					if (i == cb1) {//... ja vastupidi
						std::cout << "1-unchecked" << std::endl;
						cb1 = 0;
						textBox1->Enabled = false;
					}
					else {
						std::cout << "1-checked" << std::endl;
						cb1 = i;
						textBox1->Enabled = true;
					}
					break;
				case 2:// kui paned linnukese 2. checkBoxi taha siis aktiveerub 2. textBox ja vastupidi.
					if (i == cb2) {//... ja vastupidi
						std::cout << "2-unchecked" << std::endl;
						cb2 = 0;
						textBox2->Enabled = false;
					}
					else {
						std::cout << "2-checked" << std::endl;
						cb2 = i;
						textBox2->Enabled = true;
					}
					break;
				case 3:// kui paned linnukese 3. checkBoxi taha siis aktiveerub 3. textBox ja vastupidi.
					if (i == cb3) {//... ja vastupidi
						std::cout << "3-unchecked" << std::endl;
						cb3 = 0;
						textBox3->Enabled = false;
					}
					else {
						std::cout << "3-checked" << std::endl;
						cb3 = i;
						textBox3->Enabled = true;
					}
					break;
				case 4:// kui paned linnukese 4. checkBoxi taha siis aktiveerub 4. textBox ja vastupidi.
					if (i == cb4) {//... ja vastupidi
						std::cout << "4-unchecked" << std::endl;
						cb4 = 0;
						textBox4->Enabled = false;
					}
					else {
						std::cout << "4-checked" << std::endl;
						cb4 = i;
						textBox4->Enabled = true;
					}
					break;
				case 5:// kui paned linnukese 5. checkBoxi taha siis aktiveerub 5. textBox ja vastupidi.
					if (i == cb5) {//... ja vastupidi
						std::cout << "5-unchecked" << std::endl;
						cb5 = 0;
						textBox5->Enabled = false;
					}
					else {
						std::cout << "5-checked" << std::endl;
						cb5 = i;
						textBox5->Enabled = true;
					}
					break;
				case 6:// kui paned linnukese 7. checkBoxi taha siis aktiveerub 7. textBox ja vastupidi.
					if (i == cb6) {//... ja vastupidi
						std::cout << "6-unchecked" << std::endl;
						cb6 = 0;
						textBox6->Enabled = false;
					}
					else {
						std::cout << "6-checked" << std::endl;
						cb6 = i;
						textBox6->Enabled = true;
					}
					break;
				case 7:// kui paned linnukese 7. checkBoxi taha siis aktiveerub 7. textBox ja vastupidi.
					if (i == cb7) {//... ja vastupidi
						std::cout << "7-unchecked" << std::endl;
						cb7 = 0;
						textBox7->Enabled = false;
					}
					else {
						std::cout << "7-checked" << std::endl;
						cb7 = i;
						textBox7->Enabled = true;
					}
					break;
				}
			}



///////////////////////////////////////////////////////////////////////////////////////////////////////
/*COMBOBOXID*/
///////////////////////////////////////////////////////////////////////////////////////////////////////
private: System::Void comboBox7_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//P
	getText(fixUnit(cb7, 7));
}
private: System::Void comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//P
	getText(fixUnit(cb6, 6));
}
private: System::Void comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//P
	getText(fixUnit(cb5, 5));
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//S
	getText(fixUnit(cb4, 4));
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//H
	getText(fixUnit(cb3, 3));
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//B
	getText(fixUnit(cb2, 2));
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//A
	getText(fixUnit(cb1, 1));
}
unsigned _int64 arv1 = 0; //tegin väärtuse, mida saaks võrrelda std::string.length()´iga.
//FIXUNIT
int fixUnit(int i, int j) { //Selle eesmärk on fixida paari bugi, mis tekkis seoses ühiku muutmisega.
				 if (i == j)
				 {
					 return i;

				 }
				 else if (cb1 == 0 && cb2 == 0 && cb3 == 0 && cb4 == 0 && cb5 == 0 && cb6 == 0 && cb7 == 0) {
					 return j;
				 }
				 else
				 {
					 if (cb1 == 1)
					 {
						 return cb1;
					 }if (cb2 == 2)
					 {
						 return cb2;
					 }if (cb3 == 3)
					 {
						 return cb3;
					 }if (cb4 == 4)
					 {
						 return cb4;
					 }if (cb5 == 5)
					 {
						 return cb5;
					 }if (cb6 == 6)
					 {
						 return cb6;
					 }if (cb7 == 7)
					 {
						 return cb7;
					 }
				 }
				return 0;
}
//GETUNIT
std::string getUnit(int j) { //see block muretseb ühikud comboBoxidest ja tagastab need mujale, küsija määrab millise comboBoxi Texti on vaja.
					 std::string str;
					 switch (j)
					 {
					 case 1:
						 str = (msclr::interop::marshal_as<std::string>(comboBox1->Text));
						 break;
					 case 2:
						 str = (msclr::interop::marshal_as<std::string>(comboBox2->Text));
						 break;
					 case 3:
						 str = (msclr::interop::marshal_as<std::string>(comboBox3->Text));
						 break;
					 case 4:
						 str = (msclr::interop::marshal_as<std::string>(comboBox4->Text));
						 break;
					 case 5:
						 str = (msclr::interop::marshal_as<std::string>(comboBox5->Text));
						 break;
					 case 6:
						 str = (msclr::interop::marshal_as<std::string>(comboBox6->Text));
						 break;
					 case 7:
						 str = (msclr::interop::marshal_as<std::string>(comboBox7->Text));
						 break;
					 }
					 return str;
}
//CONVERTOR
double conventor(double v, int j) { //to meter. See teisendab kirjutatud arvud meetritesse olenevalt, mis ühikus need kirjutati. see on vajalik arvutusteks.
					 if (j == 3)// ruudus ühikud ruutmeetriks
					 {
						 if (getUnit(j) == "mm^2")
						 {
							 v = v * 0.001 * 0.001;
						 }
						 else if (getUnit(j) == "Cm^2")
						 {
							 v = v * 0.01 * 0.01;
						 }
						 else if (getUnit(j) == "Dm^2")
						 {
							 v = v * 0.1 * 0.1;
						 }
						 else if (getUnit(j) == "m^2")
						 {
							 v = v * 1 * 1;
						 }
						 else if (getUnit(j) == "Km^2")
						 {
							 v = v * 1000 * 1000;
						 }
						 else if (getUnit(j) == "In^2")
						 {
							 v = v * 0.0254 * 0.0254;
						 }

					 }
					 else {
						 if (getUnit(j) == "mm")
						 {
							 v = v*0.001;
						 }
						 else if (getUnit(j) == "Cm")
						 {
							 v = v*0.01;
						 }
						 else if (getUnit(j) == "Dm")
						 {
							 v = v*0.1;
						 }
						 else if (getUnit(j) == "m")
						 {
							 v = v * 1;
						 }
						 else if (getUnit(j) == "Km")
						 {
							 v = v * 1000;
						 }
						 else if (getUnit(j) == "In")
						 {
							 v = v * 0.0254;
						 }
					 }return v;
				 }
//UNIT
String^ unit(double v, int j) { //to unit. siin teisendatakse arvutatud andmed tagasi ühikuks, mida kasutaja soovib.
					 if (j == 3)// ruutmeetrikd ruudus ühikuteks
					 {
						 if (getUnit(j) == "mm^2")
						 {
							 v = v * 1000 * 1000;
						 }
						 else if (getUnit(j) == "Cm^2")
						 {
							 v = v * 100 * 100;
						 }
						 else if (getUnit(j) == "Dm^2")
						 {
							 v = v * 10 * 10;
						 }
						 else if (getUnit(j) == "m^2")
						 {
							 v = v * 1 * 1;
						 }
						 else if (getUnit(j) == "Km^2")
						 {
							 v = v * 0.001 * 0.001;
						 }
						 else if (getUnit(j) == "In^2")
						 {
							 v = v * 39.37 * 39.37;
						 }
					 }
					 else {
						 if (getUnit(j) == "mm")
						 {
							 v = v * 1000;
						 }
						 else if (getUnit(j) == "Cm")
						 {
							 v = v * 100;
						 }
						 else if (getUnit(j) == "Dm")
						 {
							 v = v * 10;
						 }
						 else if (getUnit(j) == "m")
						 {
							 v = v * 1;
						 }
						 else if (getUnit(j) == "Km")
						 {
							 v = v * 0.001;
						 }
						 else if (getUnit(j) == "In")
						 {
							 v = v * 39.37;
						 }
					 }return System::Convert::ToString(v);
				 }
///////////////////////////////////////////////////////////////////////////////////////////////////////
/*TEXTBOXID*/
///////////////////////////////////////////////////////////////////////////////////////////////////////
private: System::Void textBox1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {getText(cb1);

}
private: System::Void textBox2_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {getText(cb2);

}
private: System::Void textBox3_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {getText(cb3);

}
private: System::Void textBox4_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {getText(cb4);

}
private: System::Void textBox5_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {getText(cb5);

}
private: System::Void textBox6_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {getText(cb6);

}
private: System::Void textBox7_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {getText(cb7);

}
//GETTEXT
void getText(int f) {std::cout << std::endl;
		std::cout << "GETTEXT" << std::endl;
		if (f == 7) {   // aktiveerib funktsiooni aind märgitud checkBoxi järgi.
			textB = msclr::interop::marshal_as<std::string>(textBox7->Text);//teen teksti System::Stringist std::stringiks, et saaksin mugavamalt kontrollida.
			if (textB.length() >= arv1) {// kontrolli siis, kui on vähemalt 1 tähemärk.
				std::cout << "7/1+" << std::endl;
				digitCheck(textB, 7); //teksti kontroll
			}
			textBox7->MaxLength = (textB.length() + 1);
	}	if (f == 6) {   // aktiveerib funktsiooni aind märgitud checkBoxi järgi.
			textB = msclr::interop::marshal_as<std::string>(textBox6->Text);//teen teksti System::Stringist std::stringiks, et saaksin mugavamalt kontrollida.
			if (textB.length() >= arv1) {// kontrolli siis, kui on vähemalt 1 tähemärk.
				std::cout << "6/1+" << std::endl;
				digitCheck(textB, 6); //teksti kontroll
			}
			textBox6->MaxLength = (textB.length() + 1);
	}	if (f == 5) {   // aktiveerib funktsiooni aind märgitud checkBoxi järgi.
			textB = msclr::interop::marshal_as<std::string>(textBox5->Text);//teen teksti System::Stringist std::stringiks, et saaksin mugavamalt kontrollida.
			if (textB.length() >= arv1) {// kontrolli siis, kui on vähemalt 1 tähemärk.
				std::cout << "5/1+" << std::endl;
				digitCheck(textB, 5); //teksti kontroll
			}
			textBox5->MaxLength = (textB.length() + 1);
	}	if (f == 4) {   // aktiveerib funktsiooni aind märgitud checkBoxi järgi.
			textB = msclr::interop::marshal_as<std::string>(textBox4->Text);//teen teksti System::Stringist std::stringiks, et saaksin mugavamalt kontrollida.
			if (textB.length() >= arv1) {// kontrolli siis, kui on vähemalt 1 tähemärk.
				std::cout << "4/1+" << std::endl;
				digitCheck(textB, 4); //teksti kontroll
		}
			textBox4->MaxLength = (textB.length() + 1);
	}	if (f == 3) {	 // aktiveerib funktsiooni aind märgitud checkBoxi järgi.
			textB = msclr::interop::marshal_as<std::string>(textBox3->Text);//teen teksti System::Stringist std::stringiks, et saaksin mugavamalt kontrollida.
			std::cout << std::endl;
			if (textB.length() >= arv1) {// kontrolli siis, kui on vähemalt 1 tähemärk.
				std::cout << "3/1+" << std::endl;
				digitCheck(textB, 3); //teksti kontroll
			}
			textBox3->MaxLength = (textB.length() + 1);
	}	if (f == 2) {	 // aktiveerib funktsiooni aind märgitud checkBoxi järgi.
			textB = msclr::interop::marshal_as<std::string>(textBox2->Text);//teen teksti System::Stringist std::stringiks, et saaksin mugavamalt kontrollida.
			std::cout << std::endl;
			if (textB.length() >= arv1) {// kontrolli siis, kui on vähemalt 1 tähemärk.
				std::cout << "2/1+" << std::endl;
				digitCheck(textB, 2); //teksti kontroll
			}
			textBox2->MaxLength = (textB.length() + 1);
	}	if (f == 1) { // aktiveerib funktsiooni aind märgitud checkBoxi järgi.
			textB = msclr::interop::marshal_as<std::string>(textBox1->Text); //teen teksti System::Stringist std::stringiks, et saaksin mugavamalt kontrollida.
			std::cout << std::endl;
			if (textB.length() >= arv1) {// kontrolli siis, kui on vähemalt 1 tähemärk.
				std::cout << "1/1+" << std::endl;
				digitCheck(textB, 1); //teksti kontroll
			}
			textBox1->MaxLength = (textB.length() + 1);// see määrab selle, et ei saaks sisestada üle 1 arvu korraga. rohkem arve tekitas buge.
		}
	}
//DIGITCHECK
void digitCheck(std::string &str, int j) { //kontrollib sisestust
				 std::cout << "DIGITCHECK" << std::endl;
				 int dotCount = 0; // Punktide arv textBoxis
				 int minusCount = 0; // Miinuste arv textBoxis
				 for (int i = 0; i < str.length(); i++) {
					 std::cout << i << std::endl;
					 switch (str.at(i))
					 {
					 case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':case '0':std::cout << "DC/while/switch/numb" << std::endl;
						 break;
						 /*				 case '-':minusCount++; std::cout << "DC/for/switch/-" << minusCount << std::endl;
						 if (minusCount > 1||i!=0) {// Kustutus, kui on üle 1 miinuse.
						 minusCount--;erased = 1;selecting = i;
						 str.erase(i,1); std::cout << "- erased" << std::endl;			ETTEVALMISTUS MIINUSTEKS (kui neid kunagi peaks tulema)
						 }
						 break;*/
					 case ',': dotCount++; std::cout << "dc/for/switch/." << dotCount << std::endl;
						 if (dotCount > 1 || i == 0) {// kustutus, kui on üle 1 punkti.
							 dotCount--; erased = 1; selecting = i;
							 str.erase(i, 1); std::cout << ", erased" << std::endl;
						 }
						 break;
					 case '.':
						 str.replace(i, 1, ",");
						 erased = 1; selecting = (i+1);
						 i--;
						 break;
					 default:std::cout << "DC/for/switch/default" << std::endl;// Kustutus, kui esineb täht
						 str.erase(i, 1); std::cout << "lastC erased" << std::endl;
						 erased = 1; selecting = i;
						 break;
					 }
				 }
				 std::cout << "forward str - " << str << " and j - " << j << " value to inputReturner" << std::endl;
				 inputReturner(str, j);
			 }
			 //INPUTRETURNER
			 void inputReturner(std::string s, int i) { // std::string s saadetakse nupuvajutusel kuulajast, mis asub ülevalpool (see tuleb läbi digitChecki . int i määrab, milliselt textBoxilt nupuvajutus tuleb.
				 String^ textBS = msclr::interop::marshal_as<String^>(s);// tekst tuleb kontrollist ja see tehakse tagasi System::Stringiks, et saaks selle tagastada textBoxi.
				 switch (i)
				 {
				 case 1:std::cout << "IC case 1" << std::endl;
					 textBox1->Text = textBS; //tagastus
					 if (erased == 1) { //kontrollib kas kontrollis on midagi kustutatud
						 erased = 0;//ja kui on siis taastab väärtuse kuna koht saab järgmisel real määratud.
						 textBox1->Select(selecting, 0);//määrab koha kust jätkad kirjutamist pärast kustutamist.
					 }
					 break;
				 case 2:std::cout << "IC case 2" << std::endl;
					 textBox2->Text = textBS; //tagastus
					 if (erased == 1) { //kontrollib kas kontrollis on midagi kustutatud
						 erased = 0;//ja kui on siis taastab väärtuse kuna koht saab järgmisel real määratud.
						 textBox2->Select(selecting, 0);//määrab koha kust jätkad kirjutamist pärast kustutamist.
					 }
					 break;
				 case 3:std::cout << "IC case 3" << std::endl;
					 textBox3->Text = textBS; //tagastus
					 if (erased == 1) { //kontrollib kas kontrollis on midagi kustutatud
						 erased = 0;//ja kui on siis taastab väärtuse kuna koht saab järgmisel real määratud.
						 textBox3->Select(selecting, 0);//määrab koha kust jätkad kirjutamist pärast kustutamist.
					 }
					 break;
				 case 4:std::cout << "IC case 4" << std::endl;
					 textBox4->Text = textBS; //tagastus
					 if (erased == 1) { //kontrollib kas kontrollis on midagi kustutatud
						 erased = 0;//ja kui on siis taastab väärtuse kuna koht saab järgmisel real määratud.
						 textBox4->Select(selecting, 0);//määrab koha kust jätkad kirjutamist pärast kustutamist.
					 }
					 break;
				 case 5:std::cout << "IC case 5" << std::endl;
					 textBox5->Text = textBS; //tagastus
					 if (erased == 1) { //kontrollib kas kontrollis on midagi kustutatud
						 erased = 0;//ja kui on siis taastab väärtuse kuna koht saab järgmisel real määratud.
						 textBox5->Select(selecting, 0);//määrab koha kust jätkad kirjutamist pärast kustutamist.
					 }
					 break;
				 case 6:std::cout << "IC case 6" << std::endl;
					 textBox6->Text = textBS; //tagastus
					 if (erased == 1) { //kontrollib kas kontrollis on midagi kustutatud
						 erased = 0;//ja kui on siis taastab väärtuse kuna koht saab järgmisel real määratud.
						 textBox6->Select(selecting, 0);//määrab koha kust jätkad kirjutamist pärast kustutamist.
					 }
					 break;
				 case 7:std::cout << "IC case 7" << std::endl;
					 textBox7->Text = textBS; //tagastus
					 if (erased == 1) { //kontrollib kas kontrollis on midagi kustutatud
						 erased = 0;//ja kui on siis taastab väärtuse kuna koht saab järgmisel real määratud.
						 textBox7->Select(selecting, 0);//määrab koha kust jätkad kirjutamist pärast kustutamist.
					 }
					 break;
				 }std::cout << "isChar" << std::endl;
				 if (s.empty()) {//if (s.at(0) != '-' || s.length() > 1) { !!!SEE ON SELLEKS KUI ON VAJA MIINUSEID btw. avastasin alles koodikirjutamise lõpus et geomeetrias pole miinuseid vaja :D
					 textBS = "0";			 //teen juba kontrollitud teksti int väärtuseks, et saaks sellega arvutusi teha ja saadan selle väärtuse calculate(); funktsiooni.
					 }						 //}
					 if (cbChecker()) { bitSwitch(double::Parse(textBS), i);std::cout << "calculated!" << std::endl;
					 }
					 else {
						 std::cout << "Not enaugh values to calculate" << std::endl;
				 }
			 }
			 //CBCHECKER
			 bool cbChecker() {
				 bool cbc1, cbc2, cbc3, cbc4, cbc5, cbc6, cbc7;

				 if (cb1 == 1) {
					 textB = msclr::interop::marshal_as<std::string>(textBox1->Text);
					 if (textB.length() == 0) {
						 cbc1 = false;
					 }
					 else {
						 cbc1 = true;
					 }
				 }
				 else {
					 cbc1 = true;
				 }
				 if (cb2 == 2) {
					 textB = msclr::interop::marshal_as<std::string>(textBox2->Text);
					 if (textB.length() == 0) {
						 cbc2 = false;
					 }
					 else {
						 cbc2 = true;
					 }
				 }
				 else {
					 cbc2 = true;
				 }
				 if (cb3 == 3) {
					 textB = msclr::interop::marshal_as<std::string>(textBox3->Text);
					 if (textB.length() == 0) {
						 cbc3 = false;
					 }
					 else {
						 cbc3 = true;
					 }
				 }
				 else {
					 cbc3 = true;
				 }
				 if (cb4 == 4) {
					 textB = msclr::interop::marshal_as<std::string>(textBox4->Text);
					 if (textB.length() == 0) {
						 cbc4 = false;
					 }
					 else {
						 cbc4 = true;
					 }
				 }
				 else {
					 cbc4 = true;
				 }
				 if (cb5 == 5) {
					 textB = msclr::interop::marshal_as<std::string>(textBox5->Text);
					 if (textB.length() == 0) {
						 cbc5 = false;
					 }
					 else {
						 cbc5 = true;
					 }
				 }
				 else {
					 cbc5 = true;
				 }
				 if (cb6 == 6) {
					 textB = msclr::interop::marshal_as<std::string>(textBox6->Text);
					 if (textB.length() == 0) {
						 cbc6 = false;
					 }
					 else {
						 cbc6 = true;
					 }
				 }
				 else {
					 cbc6 = true;
				 }
				 if (cb7 == 7) {
					 textB = msclr::interop::marshal_as<std::string>(textBox7->Text);
					 if (textB.length() == 0) {
						 cbc7 = false;
					 }
					 else {
						 cbc7 = true;
					 }
				 }
				 else {
					 cbc7 = true;
				 }
				 if (cbc7 == true && cbc6 == true && cbc5 == true && cbc4 == true && cbc3 == true && cbc2 == true && cbc1 == true) {
					 return true;
				 }
				 else { return false; }
			 }
			 //BITTER
			 int bitter() {
				 std::string bit = "00000000";
				 if (cb1 == 1) {// checkbox 1 muudab 1. "biti" üheks.
					 bit[1] = '1';
				 }
				 if (cb2 == 2) {// checkbox 2 muudab 2. "biti" üheks.
					 bit[2] = '1';
				 }
				 if (cb3 == 3) {// checkbox 3 muudab 3. "biti" üheks.
					 bit[3] = '1';
				 }
				 if (cb4 == 4) {// checkbox 4 muudab 4. "biti" üheks.
					 bit[4] = '1';
				 }
				 if (cb5 == 5) {// checkbox 5 muudab 5. "biti" üheks.
					 bit[5] = '1';
				 }
				 if (cb6 == 6) {// checkbox 6 muudab 6. "biti" üheks.
					 bit[6] = '1';
				 }
				 if (cb7 == 7) {// checkbox 7 muudab 7. "biti" üheks.
					 bit[7] = '1';
					 // Lisa siia IF funktsioone juurde kui on rohkem checkboxe.
				 }
				 return (std::stoi(bit)); //returnime väärtuse bitSwitch funktsiooni switchi.
			 }

			 //BITSWITCH
			 void bitSwitch(double i, int j) { //bitSwitch(); tuleb panna kuhugi kus muidu calculate oleks... siia tuleb lisada veel double-id, valemid iga case puhul ja label määramised.
				 i = conventor(i, j);

				 double a, b, c, d, h, S, P;
				 int error = 0;
				 switch (bitter())
				 {
					//case 1
					//P = a + b + c + d
					//S = (a + b) / 2 * h
				 case 1111100:// Vaata bitter funktsiooni, et teada, mis CB´d on aktiivsed selle bitseti puhul
					 std::cout << "calc. c1" << j << std::endl;
					 a = i;	label1->Text = "a - Known";
					 //b = std::stoi(textBox2->Text);
					 b = Convert::ToInt32(textBox2->Text);	label2->Text = "b - Known";
					 c = Convert::ToInt32(textBox3->Text);	label3->Text = "c - Known";
					 d = Convert::ToInt32(textBox4->Text);	label4->Text = "d - Known";
					 h = Convert::ToInt32(textBox5->Text);	label5->Text = "h - Known";
					 S = (a+b)/2*h; label6->Text = ("S = (a + b) / 2 * h = " + "m (" + a + "m + " + b + "m) " + "m / " + "m 2 " + "m * " + h + "m = " + S + "m²");
					 P = a+b+c+d; label7->Text = ("P = a + b + c + d = " + a + "m + " + b + "m + " + c + "m + " + d + "m = " + P + "m");
					 break;
					//case 2
					//d = P - a - b - c
					//S = (a + b) / 2 * h
				 case 1110101:// :)

					 break;
					//case 3
					//c = P - a - b - d
					//S = (a + b) / 2 * h
				 case 1101101:// mingi suvakas bitset jälle.

					 break;
					//case 4
					//a = P - b - c - d
					//S = (a + b) / 2 * h
				 case 0111101:// mingi suvakas bitset jälle.

					 break;
					//case 5
					//b = P - a - c - d
					//S = (a + b) / 2 * h
				 case 1011101:// mingi suvakas bitset jälle.

					 break;
					//case 6
					//P = (a + b) + c + d
					//(a + b) = 2 * S / h
				 case 0011110:// mingi suvakas bitset jälle.

					 break;
					//case 7
					//c = P - (a + b) - d
					//(a + b) = 2 * S / h
				 case 0001111:// mingi suvakas bitset jälle.

					 break;
					//case 8
					//d = P - (a + b) - c
					//(a + b) = 2 * S / h
				 case 0010111:// mingi suvakas bitset jälle.

					 break;
					//case 9
					//(a + b) = P - c - d
					//S = (a + b) / 2 * h
				 case 0011101:// mingi suvakas bitset jälle.

					 break;
					//case 10
					//P = a + b + c + d
					//S = h is not known((a + b) / 2)h
				 case 1111000:// mingi suvakas bitset jälle.

					 break;
					//case 11
					//d = P - a - b - c
					//S = h is not known((a + b) / 2)h
				 case 1110001:// mingi suvakas bitset jälle.

					 break;
					//case 12
					//c = P - a - b - d
					//S = h is not known((a + b) / 2)h
				 case 1101001:// mingi suvakas bitset jälle.

					 break;
					//case 13
					//b = P - a - c - d
					//S = h is not known((a + b) / 2)h
				 case 1011001:// mingi suvakas bitset jälle.

					 break;
					//case 14
					//a = P - b - c - d
					//S = h is not known((a + b) / 2)h
				 case 0111001:// mingi suvakas bitset jälle.

					 break;
					//case 15
					//P = c, d are not known((a + b) + c + d)
					//h = 2 * S / (a + b)
				 case 1100010:// mingi suvakas bitset jälle.

					 break;
					//case 16
					//P = a + b + c + d
					//h = 2 * S / (a + b)
				 case 1111010:// mingi suvakas bitset jälle.

					 break;
					//case 17
					//c = P - a - b - d
					//h = 2 * S / (a + b)
				 case 1101011:// mingi suvakas bitset jälle.

					 break;
					//case 18
					//d = P - a - b - c
					//h = 2 * S / (a + b)
				 case 1110011:// mingi suvakas bitset jälle.

					 break;
					//case 19
					//a = P - b - c - d
					//h = 2 * S / (a + b)
				 case 0111011:// mingi suvakas bitset jälle.

					 break;
					//case 20
					//b = P - a - c - d
					//h = 2 * S / (a + b)
				 case 1011011:// mingi suvakas bitset jälle.

					 break;
					//case 21
					//a = b is not known(a + b) - b
					//b = a is not known(a + b) - a
					//(a + b) = P - c - d
					//h = 2 * S / (a + b)
				 case 0011011:// mingi suvakas bitset jälle.

					 break;
					//case 22
					//P = c and d are not known(a + b) + c + d
					//S = (a + b) / 2 * h
				 case 1100100:// mingi suvakas bitset jälle.
					

					 break;
				 default: // see on siis kõik mis jääb väljapoole case ehk, mis ei = mingi casega
					 break;
				 }answReturner(a, b, c, d, h, S, P, error, j);
			 }
			 //CALCULATE
			 /*void calculate(double i, int j) { // i on textBoxi sisestatud väärtus ja j on mitmes textBox ehk, mis väärtus sisestati.
				 i = conventor(i, j);// siit küsitakse conventori käest andmeid meetrites

				 double c, s, p, a;
				 int error = 0; // kui ikkagi tekib mingi probleem
				 switch (j)// siin arvutatakse andmed. Valemeid kasutatakse sõltuvalt, mis sisestati. Siin toimub ka lisainfo väljastamine label´itesse.
				 {
				 case 1: //A
					 std::cout << "calc. c1" << j << std::endl;
					 a = i;	label1->Text = "A - Known";
					 c = a*sqrt(2); label4->Text = "C = A * √2 = " + a + "m * √2 = " + c + "m";
					 s = a*a; label3->Text = ("S = A * A = " + a + "m * " + a + "m = " + s + "m²");
					 p = 4 * a; label2->Text = ("P = 4 * A = 4 * " + a + "m = " + p + "m");
					 break;
				 case 2: //P
					 std::cout << "calc. c2" << j << std::endl;
					 p = i;	label2->Text = "P - Known";
					 a = p / 4; label1->Text = "A = P / 4 = " + p + "m / 4 = " + a + "m";
					 c = a*sqrt(2); label4->Text = "C = A * √2 = " + a + "m * √2 = " + c + "m";
					 s = a*a; label3->Text = ("S = A * A = " + a + "m * " + a + "m = " + s + "m²");
					 break;
				 case 3: //S
					 std::cout << "calc. c3" << j << std::endl;
					 s = i;	label3->Text = "S - Known";
					 a = sqrt(s); label1->Text = "A = √S = √" + s + "m² = " + a + "m";
					 c = a*sqrt(2); label4->Text = "C = A * √2 = " + a + "m * √2 = " + c + "m";
					 p = 4 * a;	label2->Text = ("P = 4 * A = 4 * " + a + "m = " + p + "m");
					 break;
				 case 4: //C
					 std::cout << "calc. c4" << std::endl;
					 c = i;	label4->Text = "C - Known";
					 a = c / sqrt(2); label1->Text = ("A = C / 2 = " + c + "m / √2 = " + a + "m");
					 p = 4 * a; label2->Text = ("P = 4 * A = 4 * " + a + "m = " + p + "m");
					 s = a*a; label3->Text = ("S = A * A = " + a + "m * " + a + "m = " + s + "m²");
					 break;
				 default:
					 std::cout << "calc. ERROR" << std::endl;
					 error = 1; // siis see kuvatakse
					 break;
				 }
				 answReturner(c, a, p, s, error, j);
			 }*/
			 //ANSWRETURNER
			 void answReturner(double a, double b, double c, double d, double h, double S, double P, int error, int j) { // siin tagastatakse töödeldud, kontrollitud ja arvutatud andmed õigetesse lahtritesse. Ainuke mida ei muudeta on lahter kuhu parasjagu kirjutatakse.
				 if (cb1 != 1) {
					 std::cout << "answR. 1" << std::endl;
					 if (error == 0) { 
						 textBox1->Text = unit(a, 1);
					 }
					 else { textBox1->Text = "ERROR"; }
				 }
				 if (cb2 != 2) {
					 std::cout << "answR. 2" << std::endl;
					 if (error == 0) {
						 textBox2->Text = unit(b, 2);
					 }
					 else { textBox2->Text = "ERROR"; }
				 }
				 if (cb3 != 3) {
					 std::cout << "answR. 3" << std::endl;
					 if (error == 0) {
						 textBox3->Text = unit(c, 3);
					 }
					 else { textBox3->Text = "ERROR"; }
				 }
				 if (cb4 != 4) {
					 std::cout << "answR. 4" << std::endl;
					 if (error == 0) {
						 textBox4->Text = unit(d, 4);
					 }
					 else { textBox4->Text = "ERROR"; }
				 }
				 if (cb5 != 5) {
					 std::cout << "answR. 5" << std::endl;
					 if (error == 0) {
						 textBox5->Text = unit(h, 5);
					 }
					 else { textBox5->Text = "ERROR"; }
				 }
				 if (cb6 != 6) {
					 std::cout << "answR. 6" << std::endl;
					 if (error == 0) {
						 textBox6->Text = unit(S, 6);
					 }
					 else { textBox6->Text = "ERROR"; }
				 }
				 if (cb7 != 7) {
					 std::cout << "answR. 7" << std::endl;
					 if (error == 0) {
						 textBox7->Text = unit(P, 7);
					 }
					 else { textBox7->Text = "ERROR"; }
				 }
			 }



	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();// see on sulgemisnupu käsk.
	}
	private: System::Void Trapets_Load(System::Object^  sender, System::EventArgs^  e) {
		this->pictureBox1->Image = Image::FromFile(L".\\media\\Trapets.jpg"); //pildi sisselaadimine akna avamisel.
		this->dragging = false;
	}
	private: System::Void Trapets_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
	private: System::Void Trapets_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (this->dragging) {
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
		}
	}
	private: System::Void Trapets_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->dragging = false;
	}
	};
	}
