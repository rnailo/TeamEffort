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
		int cb1 = 0;// v��rtus millega m��ran eelnevalt valitud checkBoxi.
		int cb2 = 0;// v��rtus millega m��ran eelnevalt valitud checkBoxi.
		int cb3 = 0;// v��rtus millega m��ran eelnevalt valitud checkBoxi.
		int cb4 = 0;// v��rtus millega m��ran eelnevalt valitud checkBoxi.
		int cb5 = 0;// v��rtus millega m��ran eelnevalt valitud checkBoxi.
		int erased = 0;// v��rtus millega kontrollin, kas on infot kustutatud kontrollija poolt.



	public:
			int selecting = 0;// v��rtus millega m��ran koha, kust j�tkab kirjutamine p�rast kustutust.

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
	public: System::Windows::Forms::TextBox^  textBox6;

	public:
	private: System::Windows::Forms::ComboBox^  comboBox6;
	public: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label5;
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
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
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
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(896, 14);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(36, 31);
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
			this->label1->Location = System::Drawing::Point(401, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(489, 39);
			this->label1->TabIndex = 23;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Cursor = System::Windows::Forms::Cursors::No;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(401, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(489, 39);
			this->label2->TabIndex = 24;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Cursor = System::Windows::Forms::Cursors::No;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(401, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(489, 39);
			this->label3->TabIndex = 25;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Cursor = System::Windows::Forms::Cursors::No;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(401, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(489, 39);
			this->label4->TabIndex = 26;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 36, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(0, 18);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 87);
			this->label7->TabIndex = 28;
			// 
			// checkBox4
			// 
			this->checkBox4->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox4->ForeColor = System::Drawing::Color::Black;
			this->checkBox4->Location = System::Drawing::Point(401, 309);
			this->checkBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(111, 23);
			this->checkBox4->TabIndex = 29;
			this->checkBox4->Text = L"P -";
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Ristkylik::checkBox4_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox3->ForeColor = System::Drawing::Color::Black;
			this->checkBox3->Location = System::Drawing::Point(401, 281);
			this->checkBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(111, 23);
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
			this->checkBox2->ForeColor = System::Drawing::Color::Black;
			this->checkBox2->Location = System::Drawing::Point(401, 250);
			this->checkBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(111, 23);
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
			this->checkBox1->ForeColor = System::Drawing::Color::Black;
			this->checkBox1->Location = System::Drawing::Point(401, 222);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(111, 23);
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
			this->checkBox5->ForeColor = System::Drawing::Color::Black;
			this->checkBox5->Location = System::Drawing::Point(401, 338);
			this->checkBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(111, 23);
			this->checkBox5->TabIndex = 34;
			this->checkBox5->Text = L"S -";
			this->checkBox5->UseVisualStyleBackColor = false;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Ristkylik::checkBox5_CheckedChanged);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(476, 308);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->MaxLength = 1;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(345, 22);
			this->textBox4->TabIndex = 38;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(476, 279);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->MaxLength = 1;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(345, 22);
			this->textBox3->TabIndex = 37;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(476, 250);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->MaxLength = 1;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(345, 22);
			this->textBox2->TabIndex = 36;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox2->Location = System::Drawing::Point(828, 247);
			this->comboBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(61, 24);
			this->comboBox2->TabIndex = 40;
			this->comboBox2->Text = L"m";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox1->Location = System::Drawing::Point(828, 217);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(61, 24);
			this->comboBox1->TabIndex = 39;
			this->comboBox1->Text = L"m";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox3->Location = System::Drawing::Point(828, 306);
			this->comboBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(61, 24);
			this->comboBox3->TabIndex = 42;
			this->comboBox3->Text = L"m";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox4->Location = System::Drawing::Point(828, 276);
			this->comboBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(61, 24);
			this->comboBox4->TabIndex = 41;
			this->comboBox4->Text = L"m";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(476, 337);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->MaxLength = 1;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(345, 22);
			this->textBox6->TabIndex = 43;
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm^2", L"Cm^2", L"Dm^2", L"m^2", L"Km^2", L"In^2" });
			this->comboBox6->Location = System::Drawing::Point(828, 336);
			this->comboBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(61, 24);
			this->comboBox6->TabIndex = 45;
			this->comboBox6->Text = L"m^2";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(476, 222);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->MaxLength = 1;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(345, 22);
			this->textBox1->TabIndex = 35;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 36, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(15, 14);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(349, 87);
			this->label5->TabIndex = 46;
			this->label5->Text = L"RECTANGLE";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(16, 133);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(371, 257);
			this->pictureBox1->TabIndex = 47;
			this->pictureBox1->TabStop = false;
			// 
			// Ristkylik
			// 
			this->AccessibleName = L"RECTANGLE";
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(947, 404);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->textBox6);
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
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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

void switcher(int i) {// teeb checkBoxide j�rgi textBoxe aktiivseks.
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
						textBox6->Enabled = false;
					}
					else {
						std::cout << "5-checked" << std::endl;
						cb5 = i;
						textBox6->Enabled = true;
					}
					break;
				}
				
			 }
 
		
			
			



	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void Ristkylik_Load(System::Object^  sender, System::EventArgs^  e) {
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
	};
}