#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include <algorithm>
#include <iostream>
#include <conio.h>

namespace KolmnurkNS {
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

	public ref class Kolmnurk : public System::Windows::Forms::Form
	{
	public:
		int cb1 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int cb2 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int cb3 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int cb4 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int cb5 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int cb6 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int erased = 0;// väärtus millega kontrollin, kas on infot kustutatud kontrollija poolt.
	
	
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	public:
		int selecting = 0;// väärtus millega määran koha, kust jätkab kirjutamine pärast kustutust.
		Kolmnurk(void)
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
		~Kolmnurk()
		{
			if (components)
			{
				delete components;
			}
		}
	private: bool dragging;
	private: Point offset;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::CheckBox^  checkBox4;
	private:
	public: System::Windows::Forms::CheckBox^  checkBox3;
	public: System::Windows::Forms::CheckBox^  checkBox2;
	public: System::Windows::Forms::CheckBox^  checkBox1;
	public: System::Windows::Forms::TextBox^  textBox4;
	public: System::Windows::Forms::TextBox^  textBox3;
	public: System::Windows::Forms::TextBox^  textBox2;
	public: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	public:

	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::ComboBox^  comboBox6;
	public: System::Windows::Forms::TextBox^  textBox5;
	private:
	public: System::Windows::Forms::TextBox^  textBox6;
	public: System::Windows::Forms::CheckBox^  checkBox5;
	public: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox5;

	public:


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Kolmnurk::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button1->ForeColor = System::Drawing::Color::AntiqueWhite;
			this->button1->Location = System::Drawing::Point(493, 11);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(27, 25);
			this->button1->TabIndex = 22;
			this->button1->Text = L"X";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Kolmnurk::button1_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Cursor = System::Windows::Forms::Cursors::No;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(174, 148);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(346, 22);
			this->label4->TabIndex = 27;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Cursor = System::Windows::Forms::Cursors::No;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(174, 116);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(346, 24);
			this->label3->TabIndex = 26;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Cursor = System::Windows::Forms::Cursors::No;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(174, 84);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(346, 24);
			this->label2->TabIndex = 25;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Cursor = System::Windows::Forms::Cursors::No;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(174, 54);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(346, 24);
			this->label1->TabIndex = 24;
			// 
			// checkBox4
			// 
			this->checkBox4->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox4->ForeColor = System::Drawing::Color::Green;
			this->checkBox4->Location = System::Drawing::Point(210, 329);
			this->checkBox4->Margin = System::Windows::Forms::Padding(2);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(50, 19);
			this->checkBox4->TabIndex = 28;
			this->checkBox4->Text = L"h -";
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Kolmnurk::checkBox4_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox3->ForeColor = System::Drawing::Color::Black;
			this->checkBox3->Location = System::Drawing::Point(211, 304);
			this->checkBox3->Margin = System::Windows::Forms::Padding(2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(50, 19);
			this->checkBox3->TabIndex = 29;
			this->checkBox3->Text = L"c -";
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Kolmnurk::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox2->ForeColor = System::Drawing::Color::Red;
			this->checkBox2->Location = System::Drawing::Point(210, 279);
			this->checkBox2->Margin = System::Windows::Forms::Padding(2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(50, 19);
			this->checkBox2->TabIndex = 30;
			this->checkBox2->Text = L"b -";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Kolmnurk::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox1->ForeColor = System::Drawing::Color::MediumBlue;
			this->checkBox1->Location = System::Drawing::Point(210, 255);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(50, 19);
			this->checkBox1->TabIndex = 31;
			this->checkBox1->Text = L"a -";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Kolmnurk::checkBox1_CheckedChanged);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(265, 329);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->MaxLength = 1;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(193, 20);
			this->textBox4->TabIndex = 35;
			this->textBox4->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Kolmnurk::textBox4_KeyUp);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(265, 304);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->MaxLength = 1;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(193, 20);
			this->textBox3->TabIndex = 34;
			this->textBox3->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Kolmnurk::textBox3_KeyUp);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(265, 279);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->MaxLength = 1;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(193, 20);
			this->textBox2->TabIndex = 33;
			this->textBox2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Kolmnurk::textBox2_KeyUp);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(265, 254);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->MaxLength = 1;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(193, 20);
			this->textBox1->TabIndex = 32;
			this->textBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Kolmnurk::textBox1_KeyUp);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox4->Location = System::Drawing::Point(471, 329);
			this->comboBox4->Margin = System::Windows::Forms::Padding(2);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(47, 21);
			this->comboBox4->TabIndex = 39;
			this->comboBox4->Text = L"m";
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Kolmnurk::comboBox4_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox2->Location = System::Drawing::Point(471, 279);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(47, 21);
			this->comboBox2->TabIndex = 37;
			this->comboBox2->Text = L"m";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox1->Location = System::Drawing::Point(471, 254);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(47, 21);
			this->comboBox1->TabIndex = 36;
			this->comboBox1->Text = L"m";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 30, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(11, 9);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(163, 58);
			this->label9->TabIndex = 40;
			this->label9->Text = L"Triangle";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Cursor = System::Windows::Forms::Cursors::No;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(174, 212);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(346, 22);
			this->label6->TabIndex = 42;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Cursor = System::Windows::Forms::Cursors::No;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(174, 180);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(346, 24);
			this->label5->TabIndex = 41;
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm^2", L"Cm^2", L"Dm^2", L"m^2", L"Km^2", L"In^2" });
			this->comboBox6->Location = System::Drawing::Point(471, 377);
			this->comboBox6->Margin = System::Windows::Forms::Padding(2);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(47, 21);
			this->comboBox6->TabIndex = 47;
			this->comboBox6->Text = L"m^2";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(265, 378);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->MaxLength = 1;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(193, 20);
			this->textBox5->TabIndex = 46;
			this->textBox5->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Kolmnurk::textBox6_KeyUp);
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(265, 353);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->MaxLength = 1;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(193, 20);
			this->textBox6->TabIndex = 45;
			this->textBox6->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Kolmnurk::textBox5_KeyUp);
			// 
			// checkBox5
			// 
			this->checkBox5->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox5->ForeColor = System::Drawing::Color::Black;
			this->checkBox5->Location = System::Drawing::Point(210, 378);
			this->checkBox5->Margin = System::Windows::Forms::Padding(2);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(50, 19);
			this->checkBox5->TabIndex = 43;
			this->checkBox5->Text = L"S -";
			this->checkBox5->UseVisualStyleBackColor = false;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Kolmnurk::checkBox6_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox6->ForeColor = System::Drawing::Color::Black;
			this->checkBox6->Location = System::Drawing::Point(211, 353);
			this->checkBox6->Margin = System::Windows::Forms::Padding(2);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(50, 19);
			this->checkBox6->TabIndex = 44;
			this->checkBox6->Text = L"P -";
			this->checkBox6->UseVisualStyleBackColor = false;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Kolmnurk::checkBox5_CheckedChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox3->Location = System::Drawing::Point(471, 304);
			this->comboBox3->Margin = System::Windows::Forms::Padding(2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(47, 21);
			this->comboBox3->TabIndex = 49;
			this->comboBox3->Text = L"m";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox5->Location = System::Drawing::Point(471, 353);
			this->comboBox5->Margin = System::Windows::Forms::Padding(2);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(47, 21);
			this->comboBox5->TabIndex = 50;
			this->comboBox5->Text = L"m";
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &Kolmnurk::comboBox5_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			//this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(21, 246);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(163, 164);
			this->pictureBox1->TabIndex = 51;
			this->pictureBox1->TabStop = false;
			// 
			// Kolmnurk
			// 
			this->AccessibleName = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(531, 421);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Kolmnurk";
			this->Text = L"Kolmnurk";
			this->Load += gcnew System::EventHandler(this, &Kolmnurk::Kolmnurk_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Kolmnurk::Kolmnurk_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Kolmnurk::Kolmnurk_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Kolmnurk::Kolmnurk_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
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
				case 2:// kui paned linnukese  checkBoxi taha siis aktiveerub  textBox ja vastupidi.
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
				case 3:// kui paned linnukese  checkBoxi taha siis aktiveerub  textBox ja vastupidi.
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
				case 4:// kui paned linnukese  checkBoxi taha siis aktiveerub textBox ja vastupidi.
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
				case 5:// kui paned linnukese  checkBoxi taha siis aktiveerub textBox ja vastupidi.
					if (i == cb1) {//... ja vastupidi
						std::cout << "5-unchecked" << std::endl;
						cb5 = 0;
						textBox5->Enabled = false;
					}
					else {
						std::cout << "5-checked" << std::endl;
						cb5 = i;
						textBox1->Enabled = true;
					}
					break;
				case 6:// kui paned linnukese  checkBoxi taha siis aktiveerub textBox ja vastupidi.
					if (i == cb6) {//... ja vastupidi
						std::cout << "6-unchecked" << std::endl;
						cb6 = 0;
						textBox1->Enabled = false;
					}
					else {
						std::cout << "6-checked" << std::endl;
						cb6 = i;
						textBox1->Enabled = true;
					}
					break;
				}

			}

			///////////////////////////////////////////////////////////////////////////////////////////////////////
			/*COMBOBOXID*/
			///////////////////////////////////////////////////////////////////////////////////////////////////////


private: System::Void comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//S
	getText(fixUnit(cb6, 6));
}
private: System::Void comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//P
	getText(fixUnit(cb5, 5));
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//h
	getText(fixUnit(cb4, 4));
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//c
	getText(fixUnit(cb3, 3));
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//b
	getText(fixUnit(cb2, 2));
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//a
	getText(fixUnit(cb1, 1));
}
		 unsigned _int64 arv1 = 0; //tegin väärtuse, mida saaks võrrelda std::string.length()´iga.


								   
	//FIXUNIT

		 int fixUnit(int i, int j) { //Selle eesmärk on fixida paari bugi, mis tekkis seoses ühiku muutmisega.
			 if (i == j)
			 {
				 return i;

			 }
			 else if (cb1 == 0 && cb2 == 0 && cb3 == 0 && cb4 == 0 && cb5 == 0 && cb6 == 6) {
				 return j;
			 }
			 else
			 {
				 if (cb1 == 1)
				 {
					 return cb1;
				 }
				 if (cb2 == 2)
				 {
					 return cb2;
				 }
				 if (cb3 == 3)
				 {
					 return cb3;
				 }
				 if (cb4 == 4)
				 {
					 return cb4;
				 }
				 if (cb1 == 5)
				 {
					 return cb5;
				 }
				 if (cb6 == 6)
				 {
					 return cb6;
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
private: System::Void textBox1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	getText(cb1);

}
private: System::Void textBox2_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	getText(cb2);

}
private: System::Void textBox3_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	getText(cb3);

}
private: System::Void textBox4_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	getText(cb4);

}

private: System::Void textBox5_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	getText(cb5);

}
private: System::Void textBox6_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	getText(cb6);

}

		 //GETTEXT

		 void getText(int f) {
			 std::cout << std::endl;
			 std::cout << "GETTEXT" << std::endl;

			 if (f == 6) {   // aktiveerib funktsiooni aind märgitud checkBoxi järgi.
				 textB = msclr::interop::marshal_as<std::string>(textBox6->Text);//teen teksti System::Stringist std::stringiks, et saaksin mugavamalt kontrollida.
				 if (textB.length() >= arv1) {// kontrolli siis, kui on vähemalt 1 tähemärk.
					 std::cout << "6/1+" << std::endl;
					 digitCheck(textB, 6); //teksti kontroll
				 }
				 textBox6->MaxLength = (textB.length() + 1);
			 }

			 if (f == 5) {   // aktiveerib funktsiooni aind märgitud checkBoxi järgi.
				 textB = msclr::interop::marshal_as<std::string>(textBox5->Text);//teen teksti System::Stringist std::stringiks, et saaksin mugavamalt kontrollida.
				 if (textB.length() >= arv1) {// kontrolli siis, kui on vähemalt 1 tähemärk.
					 std::cout << "5/1+" << std::endl;
					 digitCheck(textB, 5); //teksti kontroll
				 }
				 textBox5->MaxLength = (textB.length() + 1);
			 }

			 if (f == 4) {   // aktiveerib funktsiooni aind märgitud checkBoxi järgi.
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
					 str.erase(i,1); std::cout << "- erased" << std::endl;			//ETTEVALMISTUS MIINUSTEKS (kui neid kunagi peaks tulema)
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
					 erased = 1; selecting = (i + 1);
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

		 void inputReturner(std::string s, int i) { // std::string s saadetakse nupuvajutusel kuulajast, mis asub ülevalpool 
													//(see tuleb läbi digitChecki . int i määrab, milliselt textBoxilt nupuvajutus tuleb.
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
			 }std::cout << "isChar" << std::endl;
			 if (s.empty()) {//if (s.at(0) != '-' || s.length() > 1) { !!!SEE ON SELLEKS KUI ON VAJA MIINUSEID btw. avastasin alles koodikirjutamise lõpus et geomeetrias pole miinuseid vaja :D
				 textBS = "0";			 //teen juba kontrollitud teksti int väärtuseks, et saaks sellega arvutusi teha ja saadan selle väärtuse calculate(); funktsiooni.
			 }						 //}
			 if (cbChecker()) {
				 bitSwitch(double::Parse(textBS), i);std::cout << "calculated!" << std::endl;
			 }
			 else {
				 std::cout << "Not enaugh values to calculate" << std::endl;
			 }
		 }
		 //CBCHECKER
		 bool cbChecker() {
			 bool cbc1, cbc2, cbc3, cbc4, cbc5, cbc6;

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
			 if (cbc6 == true && cbc5 == true && cbc4 == true && cbc3 == true && cbc2 == true && cbc1 == true) {
				 return true;
			 }
			 else { return false; }
		 }
		 //BITTER
		 int bitter() {
			 std::string bit = "0000000";
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
			 if (cb6 == 6) {// checkbox 4 muudab 4. "biti" üheks.
				 bit[6] = '1';
			 }
			 return (std::stoi(bit)); //returnime väärtuse bitSwitch funktsiooni switchi.
		 }

		 //BITSWITCH
		 void bitSwitch(double i, int j) {
			 i = conventor(i, j);// siit küsitakse conventori käest andmeid meetrites
			 double a, b, c, h, p, s;
			 int error = 0;
			 //bitSwitch(); tuleb panna kuhugi kus muidu calculate oleks... siia tuleb lisada veel double-id, valemid iga case puhul ja label määramised.
			 i = conventor(i, j);
			 switch (bitter())
			 {
			 case 100100:// :)
				 s = (a*h) / 2; label6->Text = ("S = ( a * h ) / 2 = " + s + " m²");
				 break;
			 case 111000:// mingi suvakas bitset jälle.
				 a = i;	label1->Text = "a - Known";
				 b = Convert::ToInt32(textBox2->Text); label2->Text = "b - Known";
				 c = Convert::ToInt32(textBox3->Text); label3->Text = "c - Known";
				 p = a + b + c; label5->Text = ("P = a + b + c = " + p + " m");

				 break;
			 case 111100:// :)
				 a = i;	label1->Text = "a - Known";
				 b = Convert::ToInt32(textBox2->Text); label2->Text = "b - Known";
				 c = Convert::ToInt32(textBox3->Text); label3->Text = "c - Known";
				 h = Convert::ToInt32(textBox4->Text); label4->Text = "h - Known";
				 p = a + b + c; label5->Text = ("P = a + b + c = " + p + " m");
				 s = (a*h) / 2; label6->Text = ("S = ( a * h ) / 2 = " + s + " m²");
				 break;

			 default: // see on siis kõik mis jääb väljapoole case ehk, mis ei = mingi casega

				 break;
			 
				 answReturner(a, b, c, h, p, s, error, j);
			 }
		 }
		 ////CALCULATE
		 //void calculate(double i, int j) { // i on textBoxi sisestatud väärtus ja j on mitmes textBox ehk, mis väärtus sisestati.
			// i = conventor(i, j);// siit küsitakse conventori käest andmeid meetrites


			// int error = 0; // kui ikkagi tekib mingi probleem
			// switch (j)// siin arvutatakse andmed. Valemeid kasutatakse sõltuvalt, mis sisestati. Siin toimub ka lisainfo väljastamine label´itesse.
			// {
			// case 1: //a
			//	 std::cout << "calc. c1" << j << std::endl;
			//	 a = i;	label1->Text = "a - Known";
			//	 b = i; label2->Text = "b - Known";
			//	 c = i; label3->Text = "c - Known";
			//	 h = i; label4->Text = "c - Known";
			//		 //RRR = a*sqrt(2); label4->Text = "C = A * √2 = " + a + "m * √2 = " + c + "m";
			//	 s = (a*h) / 2; label6->Text = ("S = ( a * h ) / 2 = " + s + "m²"); //+ a + "m * " + a + "m = " + s + "m²");
			//	 p = a + b + c; label5->Text = ("P = a + b + c = ");//"P = 4 * A = 4 * " + a + "m = " + p + "m");
			//	break;
			// case 2: //b
			//	 std::cout << "calc. c2" << j << std::endl;
			//	 //a = i;
			//	 //b = i;
			//	 //c = 

			//	 //p = i;	label2->Text = "P - Known";
			//	 //a = p / 4; label1->Text = "A = P / 4 = " + p + "m / 4 = " + a + "m";
			//	 //c = a*sqrt(2); label4->Text = "C = A * √2 = " + a + "m * √2 = " + c + "m";
			//	 //s = a*a; label3->Text = ("S = A * A = " + a + "m * " + a + "m = " + s + "m²");
			//	 break;
			// case 3: //c
			//	 std::cout << "calc. c3" << j << std::endl;
			//	 //p = i;	label2->Text = "P - Known";
			//	 //a = p / 4; label1->Text = "A = P / 4 = " + p + "m / 4 = " + a + "m";
			//	 //c = a*sqrt(2); label4->Text = "C = A * √2 = " + a + "m * √2 = " + c + "m";
			//	 //s = a*a; label3->Text = ("S = A * A = " + a + "m * " + a + "m = " + s + "m²");
			//	 break;
			// case 4: //h
			//	 std::cout << "calc. c4" << j << std::endl;
			//	 //p = i;	label2->Text = "P - Known";
			//	 //a = p / 4; label1->Text = "A = P / 4 = " + p + "m / 4 = " + a + "m";
			//	 //c = a*sqrt(2); label4->Text = "C = A * √2 = " + a + "m * √2 = " + c + "m";
			//	 //s = a*a; label3->Text = ("S = A * A = " + a + "m * " + a + "m = " + s + "m²");
			//	 break;
			// case 5: //P
			//	 std::cout << "calc. c5" << j << std::endl;
			//	 //p = i;	label2->Text = "P - Known";
			//	 //a = p / 4; label1->Text = "A = P / 4 = " + p + "m / 4 = " + a + "m";
			//	 //c = a*sqrt(2); label4->Text = "C = A * √2 = " + a + "m * √2 = " + c + "m";
			//	 //s = a*a; label3->Text = ("S = A * A = " + a + "m * " + a + "m = " + s + "m²");
			//	 break;
			// case 6: //S
			//	 std::cout << "calc. c6" << j << std::endl;
			//	 //s = i;	label3->Text = "S - Known";
			//	 //a = sqrt(s); label1->Text = "A = √S = √" + s + "m² = " + a + "m";
			//	 //c = a*sqrt(2); label4->Text = "C = A * √2 = " + a + "m * √2 = " + c + "m";
			//	 //p = 4 * a;	label2->Text = ("P = 4 * A = 4 * " + a + "m = " + p + "m");
			//	 break;

			// default:
			//	 std::cout << "calc. ERROR" << std::endl;
			//	 error = 1; // siis see kuvatakse
			//	 break;
			// }
			// answReturner(a, b, c, h, p, s, error, j);
		// }

		 //ANSWRETURNER

		 void answReturner(double a, double b, double c, double h, double p, double s, int error, int j) { // siin tagastatakse töödeldud, kontrollitud ja arvutatud andmed õigetesse lahtritesse. Ainuke mida ei muudeta on lahter kuhu parasjagu kirjutatakse.
			 if (cb1 != 1) {
				 std::cout << "answR. 1" << std::endl;
				 if (error == 0) { textBox1->Text = unit(a, 1); }
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
					 textBox4->Text = unit(h, 4);
				 }
				 else { textBox4->Text = "ERROR"; }
			 }
			 if (cb5 != 5) {
				 std::cout << "answR. 5" << std::endl;
				 if (error == 0) {
					 textBox5->Text = unit(p, 5);
				 }
				 else { textBox5->Text = "ERROR"; }
			 }
			 if (cb6 != 6) {
				 std::cout << "answR. 6" << std::endl;
				 if (error == 0) {
					 textBox6->Text = unit(s, 6);
				 }
				 else { textBox6->Text = "ERROR"; }
			 }
		  
		 }


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
	private: System::Void Kolmnurk_Load(System::Object^  sender, System::EventArgs^  e) {
		this->pictureBox1->Image = Image::FromFile(L".\\media\\triangle.jpg"); //pildi sisselaadimine akna avamisel.
		this->dragging = false;
	}
	private: System::Void Kolmnurk_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
	private: System::Void Kolmnurk_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (this->dragging) {
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
		}
	}
	private: System::Void Kolmnurk_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->dragging = false;
	}
};}