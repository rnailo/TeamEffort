#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include <algorithm>
#include <iostream>
#include <conio.h>


namespace RistkylikNS {
	std::string textB;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>

	public ref class Ristkylik : public System::Windows::Forms::Form
	{
	public:
		int cb1 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int cb2 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int cb3 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int cb4 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int cb5 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int erased = 0;// väärtus millega kontrollin, kas on infot kustutatud kontrollija poolt.
	private: System::Windows::Forms::Label^  label5;
	public:



	public:
			int selecting = 0;// väärtus millega määran koha, kust jätkab kirjutamine pärast kustutust.

		Ristkylik(void)
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
		~Ristkylik()
		{
			if (components)
			{
				delete components;
			}
		}
	private: bool dragging;
	private: Point offset;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label7;

	public: System::Windows::Forms::CheckBox^  checkBox4;
	private:
	public: System::Windows::Forms::CheckBox^  checkBox3;
	public: System::Windows::Forms::CheckBox^  checkBox2;
	public: System::Windows::Forms::CheckBox^  checkBox1;

	public: System::Windows::Forms::CheckBox^  checkBox5;
	public: System::Windows::Forms::TextBox^  textBox4;
	public: System::Windows::Forms::TextBox^  textBox3;
	public: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::ComboBox^  comboBox2;
	public:
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;

	private:
	public: System::Windows::Forms::TextBox^  textBox5;

	public:
	private: System::Windows::Forms::ComboBox^  comboBox5;
	public: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label6;
	public:

	public:

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	public:
	private:


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
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
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
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(672, 11);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(27, 25);
			this->button1->TabIndex = 22;
			this->button1->Text = L"X";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Ristkylik::button1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Cursor = System::Windows::Forms::Cursors::No;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(301, 13);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(367, 32);
			this->label1->TabIndex = 23;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Cursor = System::Windows::Forms::Cursors::No;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(301, 45);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(367, 32);
			this->label2->TabIndex = 24;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Cursor = System::Windows::Forms::Cursors::No;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(301, 77);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(367, 32);
			this->label3->TabIndex = 25;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Cursor = System::Windows::Forms::Cursors::No;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(301, 108);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(367, 32);
			this->label4->TabIndex = 26;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 36, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(0, 15);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 69);
			this->label7->TabIndex = 28;
			// 
			// checkBox4
			// 
			this->checkBox4->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox4->ForeColor = System::Drawing::Color::Black;
			this->checkBox4->Location = System::Drawing::Point(301, 251);
			this->checkBox4->Margin = System::Windows::Forms::Padding(2);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(83, 19);
			this->checkBox4->TabIndex = 29;
			this->checkBox4->Text = L"C -";
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Ristkylik::checkBox4_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox3->ForeColor = System::Drawing::Color::Blue;
			this->checkBox3->Location = System::Drawing::Point(301, 228);
			this->checkBox3->Margin = System::Windows::Forms::Padding(2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(83, 19);
			this->checkBox3->TabIndex = 30;
			this->checkBox3->Text = L"D -";
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Ristkylik::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox2->ForeColor = System::Drawing::Color::Green;
			this->checkBox2->Location = System::Drawing::Point(301, 203);
			this->checkBox2->Margin = System::Windows::Forms::Padding(2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(83, 19);
			this->checkBox2->TabIndex = 31;
			this->checkBox2->Text = L"B -";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Ristkylik::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox1->ForeColor = System::Drawing::Color::Red;
			this->checkBox1->Location = System::Drawing::Point(301, 180);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(83, 19);
			this->checkBox1->TabIndex = 32;
			this->checkBox1->Text = L"A -";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Ristkylik::checkBox1_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox5->ForeColor = System::Drawing::Color::Purple;
			this->checkBox5->Location = System::Drawing::Point(301, 275);
			this->checkBox5->Margin = System::Windows::Forms::Padding(2);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(83, 19);
			this->checkBox5->TabIndex = 34;
			this->checkBox5->Text = L"S -";
			this->checkBox5->UseVisualStyleBackColor = false;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Ristkylik::checkBox5_CheckedChanged);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(357, 250);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->MaxLength = 1;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(260, 20);
			this->textBox4->TabIndex = 38;
			this->textBox4->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Ristkylik::textBox4_KeyUp);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(357, 227);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->MaxLength = 1;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(260, 20);
			this->textBox3->TabIndex = 37;
			this->textBox3->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Ristkylik::textBox3_KeyUp);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(357, 203);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->MaxLength = 1;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(260, 20);
			this->textBox2->TabIndex = 36;
			this->textBox2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Ristkylik::textBox2_KeyUp);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox2->Location = System::Drawing::Point(621, 201);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(47, 21);
			this->comboBox2->TabIndex = 40;
			this->comboBox2->Text = L"m";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Ristkylik::comboBox2_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox1->Location = System::Drawing::Point(621, 176);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(47, 21);
			this->comboBox1->TabIndex = 39;
			this->comboBox1->Text = L"m";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Ristkylik::comboBox1_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox3->Location = System::Drawing::Point(621, 249);
			this->comboBox3->Margin = System::Windows::Forms::Padding(2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(47, 21);
			this->comboBox3->TabIndex = 42;
			this->comboBox3->Text = L"m";
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Ristkylik::comboBox3_SelectedIndexChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox4->Location = System::Drawing::Point(621, 224);
			this->comboBox4->Margin = System::Windows::Forms::Padding(2);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(47, 21);
			this->comboBox4->TabIndex = 41;
			this->comboBox4->Text = L"m";
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Ristkylik::comboBox4_SelectedIndexChanged);
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(357, 274);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->MaxLength = 1;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(260, 20);
			this->textBox5->TabIndex = 43;
			this->textBox5->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Ristkylik::textBox5_KeyUp);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm^2", L"Cm^2", L"Dm^2", L"m^2", L"Km^2", L"In^2" });
			this->comboBox5->Location = System::Drawing::Point(621, 273);
			this->comboBox5->Margin = System::Windows::Forms::Padding(2);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(47, 21);
			this->comboBox5->TabIndex = 45;
			this->comboBox5->Text = L"m^2";
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &Ristkylik::comboBox5_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(357, 180);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->MaxLength = 1;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(260, 20);
			this->textBox1->TabIndex = 35;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 36, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(11, 11);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(279, 69);
			this->label6->TabIndex = 46;
			this->label6->Text = L"RECTANGLE";
			this->label6->Click += gcnew System::EventHandler(this, &Ristkylik::label8_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 108);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(278, 209);
			this->pictureBox1->TabIndex = 47;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Cursor = System::Windows::Forms::Cursors::No;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(301, 140);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(367, 32);
			this->label5->TabIndex = 48;
			// 
			// Ristkylik
			// 
			this->AccessibleName = L"RECTANGLE";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(710, 328);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Ristkylik";
			this->Text = L"RECTANGLE";
			this->Load += gcnew System::EventHandler(this, &Ristkylik::Ristkylik_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Ristkylik::Ristkylik_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Ristkylik::Ristkylik_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Ristkylik::Ristkylik_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

/* CHECKBOX*/
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

//SWITCHER

void switcher(int i) {// teeb checkBoxide järgi textBoxe aktiivseks.
				std::cout << "Switcher function" << std::endl;
				switch (i){
				case 1:// kui paned linnukese 1. checkBoxi taha siis aktiveerub 1. textBox ja vastupidi.
					if(i == cb1){//... ja vastupidi
						std::cout << "1-unchecked" << std::endl;
						cb1 = 0;
						textBox1->Enabled = false;
					}
					else{
						std::cout << "1-checked" << std::endl;
						cb1 = i;
						textBox1->Enabled = true;
					}
					break;
				case 2:// kui paned linnukese 1. checkBoxi taha siis aktiveerub 1. textBox ja vastupidi.
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
				case 3:// kui paned linnukese 1. checkBoxi taha siis aktiveerub 1. textBox ja vastupidi.
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
				case 4:// kui paned linnukese 1. checkBoxi taha siis aktiveerub 1. textBox ja vastupidi.
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
				case 5:// kui paned linnukese 1. checkBoxi taha siis aktiveerub 1. textBox ja vastupidi.
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
				}
				
			 }

///////////////////////////////////////////////////////////////////////////////////////////////////////
/*COMBOBOXID*/
///////////////////////////////////////////////////////////////////////////////////////////////////////

private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//C
	getText(fixUnit(cb4, 4));
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//P
	getText(fixUnit(cb3, 3));
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//S
	getText(fixUnit(cb2, 2));
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//A
	getText(fixUnit(cb1, 1));
}
private: System::Void comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {//A
	getText(fixUnit(cb5, 5));
}
		 unsigned _int64 arv1 = 0; //tegin väärtuse, mida saaks võrrelda std::string.length()´iga.
								   //FIXUNIT
		 int fixUnit(int i, int j) { //Selle eesmärk on fixida paari bugi, mis tekkis seoses ühiku muutmisega.
			 if (i == j)
			 {
				 return i;

			 }
			 else if (cb1 == 0 && cb2 == 0 && cb3 == 0 && cb4 == 0) {
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
		 //GETTEXT
		 void getText(int f) {
			 std::cout << std::endl;
			 std::cout << "GETTEXT" << std::endl;
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
			 }  if (f == 5) {   // aktiveerib funktsiooni aind märgitud checkBoxi järgi.
				 textB = msclr::interop::marshal_as<std::string>(textBox5->Text);//teen teksti System::Stringist std::stringiks, et saaksin mugavamalt kontrollida.
				 if (textB.length() >= arv1) {// kontrolli siis, kui on vähemalt 1 tähemärk.
					 std::cout << "5/1+" << std::endl;
					 digitCheck(textB, 5); //teksti kontroll
				 }
				 textBox5->MaxLength = (textB.length() + 1);
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
				 case ',':dotCount++; std::cout << "DC/for/switch/." << dotCount << std::endl;
					 if (dotCount > 1 || i == 0) {// Kustutus, kui on üle 1 punkti.
						 dotCount--; erased = 1; selecting = i;
						 str.erase(i, 1); std::cout << ", erased" << std::endl;
					 }
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
				 textBox4->Text = textBS; //tagastus
				 if (erased == 1) { //kontrollib kas kontrollis on midagi kustutatud
					 erased = 0;//ja kui on siis taastab väärtuse kuna koht saab järgmisel real määratud.
					 textBox4->Select(selecting, 0);//määrab koha kust jätkad kirjutamist pärast kustutamist.
				 }
				 break;
			 }std::cout << "isChar" << std::endl;
			 if (s.empty()) {//if (s.at(0) != '-' || s.length() > 1) { !!!SEE ON SELLEKS KUI ON VAJA MIINUSEID btw. avastasin alles koodikirjutamise lõpus et geomeetrias pole miinuseid vaja :D
				 textBS = "0";			 //teen juba kontrollitud teksti int väärtuseks, et saaks sellega arvutusi teha ja saadan selle väärtuse calculate(); funktsiooni.
										 //}
				 bitSwitch(double::Parse(textBS), i);
				 
			 }
		 }
		 //BITTER
		 int bitter() {
			 std::string bit = "000000";
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
				 // Lisa siia IF funktsioone juurde kui on rohkem checkboxe.
			 }
			 return (std::stoi(bit)); //returnime väärtuse bitSwitch funktsiooni switchi.
		 }

		 //BITSWITCH
		 void bitSwitch(double i, int j) { //bitSwitch(); tuleb panna kuhugi kus muidu calculate oleks... siia tuleb lisada veel double-id, valemid iga case puhul ja label määramised.
			 double a, b, d, c, s;
			 int error = 0;
			 std::cout << "bitter value - " << bitter() << std::endl;
			 
			 switch (bitter())
			 {
			
			 case 11000://A ja B

				 a = i; b = Convert::ToInt32(textBox2->Text);
				 label1->Text = "A and B - Known";
				 d = sqrt((a*a) + (b*b)); label4->Text = "D = √(A^2+B^2) = " + c + "m";
				 s = a*b; label3->Text = ("S = A * B = " + a + "m * " + b + "m = " + s + "m²");
				 c = 2 *(a+b); label2->Text = ("C = 4 * A = 4 * " + a + "m = " + c + "m");
				 break;
			 case 01000:// mingi suvakas bitset jälle.

				 break;

			 default: // see on siis kõik mis jääb väljapoole case ehk, mis ei = mingi casega
				 break;
			 }
			 answReturner(a, b, d, c, s, error, j);
		 }

		 //CALCULATE
		 //void calculate(double i, int j) { // i on textBoxi sisestatud väärtus ja j on mitmes textBox ehk, mis väärtus sisestati.
			//i = conventor(i, j);// siit küsitakse conventori käest andmeid meetrites

			// double c, s, p, a;
			// int error = 0; // kui ikkagi tekib mingi probleem
			// switch (j)// siin arvutatakse andmed. Valemeid kasutatakse sõltuvalt, mis sisestati. Siin toimub ka lisainfo väljastamine label´itesse.
			// {
			// case 1: //A
			//	 std::cout << "calc. c1" << j << std::endl;
			//	 a = i;	label1->Text = "A - Known";
			//	 c = a*sqrt(2); label4->Text = "C = A * √2 = " + a + "m * √2 = " + c + "m";
			//	 s = a*a; label3->Text = ("S = A * A = " + a + "m * " + a + "m = " + s + "m²");
			//	 p = 4 * a; label2->Text = ("P = 4 * A = 4 * " + a + "m = " + p + "m");
			//	 break;
			// case 2: //P
			//	 std::cout << "calc. c2" << j << std::endl;
			//	 p = i;	label2->Text = "P - Known";
			//	 a = p / 4; label1->Text = "A = P / 4 = " + p + "m / 4 = " + a + "m";
			//	 c = a*sqrt(2); label4->Text = "C = A * √2 = " + a + "m * √2 = " + c + "m";
			//	 s = a*a; label3->Text = ("S = A * A = " + a + "m * " + a + "m = " + s + "m²");
			//	 break;
			// case 3: //S
			//	 std::cout << "calc. c3" << j << std::endl;
			//	 s = i;	label3->Text = "S - Known";
			//	 a = sqrt(s); label1->Text = "A = √S = √" + s + "m² = " + a + "m";
			//	 c = a*sqrt(2); label4->Text = "C = A * √2 = " + a + "m * √2 = " + c + "m";
			//	 p = 4 * a;	label2->Text = ("P = 4 * A = 4 * " + a + "m = " + p + "m");
			//	 break;
			// case 4: //C
			//	 std::cout << "calc. c4" << std::endl;
			//	 c = i;	label4->Text = "C - Known";
			//	 a = c / sqrt(2); label1->Text = ("A = C / 2 = " + c + "m / √2 = " + a + "m");
			//	 p = 4 * a; label2->Text = ("P = 4 * A = 4 * " + a + "m = " + p + "m");
			//	 s = a*a; label3->Text = ("S = A * A = " + a + "m * " + a + "m = " + s + "m²");
			//	 break;
			// default:
			//	 std::cout << "calc. ERROR" << std::endl;
			//	 error = 1; // siis see kuvatakse
			//	 break;
			// }
			// answReturner(c, a, p, s, error, j);
		 //}
		 //ANSWRETURNER
		 void answReturner(double c, double a, double p, double s, double b, int error, int j) { // siin tagastatakse töödeldud, kontrollitud ja arvutatud andmed õigetesse lahtritesse. Ainuke mida ei muudeta on lahter kuhu parasjagu kirjutatakse.
			 if (cb1 != 1) {
				 std::cout << "answR. 1" << std::endl;
				 if (error == 0) { textBox1->Text = unit(a, 1); }
				 else { textBox1->Text = "ERROR"; }
			 }
			 if (cb2 != 2) {
				 std::cout << "answR. 2" << std::endl;
				 if (error == 0) {
					 textBox2->Text = unit(p, 2);
				 }
				 else { textBox2->Text = "ERROR"; }
			 }
			 if (cb3 != 3) {
				 std::cout << "answR. 3" << std::endl;
				 if (error == 0) {
					 textBox3->Text = unit(s, 3);
				 }
				 else { textBox3->Text = "ERROR"; }
			 }
			 if (cb4 != 4) {
				 std::cout << "answR. 4" << std::endl;
				 if (error == 0) {
					 textBox4->Text = unit(c, 4);
				 }
				 else { textBox4->Text = "ERROR"; }
			 }
			 if (cb4 != 5) {
				 std::cout << "answR. 4" << std::endl;
				 if (error == 0) {
					 textBox4->Text = unit(c, 4);
				 }
				 else { textBox4->Text = "ERROR"; }
			 }
		 }



	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void Ristkylik_Load(System::Object^  sender, System::EventArgs^  e) {
		this->pictureBox1->Image = Image::FromFile(L".\\media\\ristkylik.png"); //pildi sisselaadimine akna avamisel.
		this->dragging = false;
	}
	
	private: System::Void Ristkylik_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
	private: System::Void Ristkylik_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (this->dragging) {
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
		}
	}
	private: System::Void Ristkylik_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->dragging = false;
	}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}