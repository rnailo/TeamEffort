#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include <algorithm>
#include <iostream>
#include <conio.h>
#include <math.h>

namespace RingNS {
	std::string textB;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	// loodud, et kontrollida System::Stringi, mis tuleb textBoxist.
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Ring : public System::Windows::Forms::Form
	{
	public:
		int cb1 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int cb2 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int cb3 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int cb4 = 0;// väärtus millega määran eelnevalt valitud checkBoxi.
		int erased = 0;// väärtus millega kontrollin, kas on infot kustutatud kontrollija poolt.
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button1;


	public:

		int selecting = 0;// väärtus millega määran koha, kust jätkab kirjutamine pärast kustutust.
		Ring(void)
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
		~Ring()
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
	public: System::Windows::Forms::TextBox^  textBox1;
	public: System::Windows::Forms::TextBox^  textBox2;
	public: System::Windows::Forms::TextBox^  textBox3;
	public: System::Windows::Forms::TextBox^  textBox4;
	private: bool dragging;
	private: Point offset;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
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
			this->checkBox1->Location = System::Drawing::Point(7, 191);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(104, 24);
			this->checkBox1->TabIndex = 25;
			this->checkBox1->Text = L"R -";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Ring::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox2->ForeColor = System::Drawing::Color::Black;
			this->checkBox2->Location = System::Drawing::Point(7, 219);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(104, 24);
			this->checkBox2->TabIndex = 24;
			this->checkBox2->Text = L"D -";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Ring::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox3->ForeColor = System::Drawing::Color::Black;
			this->checkBox3->Location = System::Drawing::Point(7, 248);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(104, 24);
			this->checkBox3->TabIndex = 23;
			this->checkBox3->Text = L"S -";
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Ring::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox4->ForeColor = System::Drawing::Color::Black;
			this->checkBox4->Location = System::Drawing::Point(7, 276);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(104, 24);
			this->checkBox4->TabIndex = 22;
			this->checkBox4->Text = L"C -";
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Ring::checkBox4_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(318, 249);
			this->textBox1->MaxLength = 1;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(364, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Ring::textBox1_KeyUp);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(319, 277);
			this->textBox2->MaxLength = 1;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(364, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Ring::textBox2_KeyUp);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(319, 305);
			this->textBox3->MaxLength = 1;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(364, 22);
			this->textBox3->TabIndex = 6;
			this->textBox3->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Ring::textBox3_KeyUp);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(319, 334);
			this->textBox4->MaxLength = 1;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(364, 22);
			this->textBox4->TabIndex = 7;
			this->textBox4->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Ring::textBox4_KeyUp);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox1->Location = System::Drawing::Point(689, 243);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(58, 24);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->Text = L"m";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Ring::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox2->Location = System::Drawing::Point(689, 274);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(58, 24);
			this->comboBox2->TabIndex = 12;
			this->comboBox2->Text = L"m";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Ring::comboBox2_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm^2", L"Cm^2", L"Dm^2", L"m^2", L"Km^2", L"In^2" });
			this->comboBox3->Location = System::Drawing::Point(689, 305);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(58, 24);
			this->comboBox3->TabIndex = 13;
			this->comboBox3->Text = L"m^2";
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Ring::comboBox3_SelectedIndexChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"mm", L"Cm", L"Dm", L"m", L"Km", L"In" });
			this->comboBox4->Location = System::Drawing::Point(689, 336);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(58, 24);
			this->comboBox4->TabIndex = 14;
			this->comboBox4->Text = L"m";
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Ring::comboBox4_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Cursor = System::Windows::Forms::Cursors::No;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(272, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(475, 40);
			this->label1->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Cursor = System::Windows::Forms::Cursors::No;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(272, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(475, 40);
			this->label2->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Cursor = System::Windows::Forms::Cursors::No;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(272, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(475, 40);
			this->label3->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Cursor = System::Windows::Forms::Cursors::No;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(272, 184);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(475, 40);
			this->label4->TabIndex = 18;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 135);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(247, 243);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 36, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(12, 45);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(222, 87);
			this->label5->TabIndex = 20;
			this->label5->Text = L"CIRCLE";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::AliceBlue;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->Controls->Add(this->checkBox4);
			this->panel1->Controls->Add(this->checkBox3);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->ForeColor = System::Drawing::Color::Coral;
			this->panel1->Location = System::Drawing::Point(265, 56);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(495, 313);
			this->panel1->TabIndex = 22;
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
			this->button1->TabIndex = 23;
			this->button1->Text = L"X";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Ring::button1_Click);
			// 
			// Ring
			// 
			this->AccessibleName = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(772, 381);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->ImeMode = System::Windows::Forms::ImeMode::On;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Ring";
			this->Text = L"Ring";
			this->TransparencyKey = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Load += gcnew System::EventHandler(this, &Ring::Ring_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Ring::Ring_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Ring::Ring_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Ring::Ring_MouseUp);
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
				 if (j == 3)// ruudus ühikud Ringmeetriks
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
				 if (j == 3)// Ringmeetrikd ruudus ühikuteks
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
				 }std::cout << "isChar" << std::endl;
				 if (s.empty()) {//if (s.at(0) != '-' || s.length() > 1) { !!!SEE ON SELLEKS KUI ON VAJA MIINUSEID btw. avastasin alles koodikirjutamise lõpus et geomeetrias pole miinuseid vaja :D
					 textBS = "0";			 //teen juba kontrollitud teksti int väärtuseks, et saaks sellega arvutusi teha ja saadan selle väärtuse calculate(); funktsiooni.
											 //}
				 }calculate(double::Parse(textBS), i);
			 }
			 //CALCULATE
			 void calculate(double i, int j) { // i on textBoxi sisestatud väärtus ja j on mitmes textBox ehk, mis väärtus sisestati.
				 i = conventor(i, j);// siit küsitakse conventori käest andmeid meetrites

				 double r, d, s, c;
				 double pi = std::atan(1) * 4;
				 int error = 0; // kui ikkagi tekib mingi probleem
				 switch (j)// siin arvutatakse andmed. Valemeid kasutatakse sõltuvalt, mis sisestati. Siin toimub ka lisainfo väljastamine label´itesse.
				 {
				 case 1: //R
					 std::cout << "calc. c1" << j << std::endl;
					 r = i;	label1->Text = "R - Known";
					 d = 2 * r; label2->Text = "D = 2 * R = " + d + "m";
					 s = pi *r * r; label3->Text = "S = pi * r² = " + s + "m²";
					 c = 2 * pi * r; label4->Text = "C = 2 * pi * r = " + c + "m";
					 break;
				 case 2: //D
					 std::cout << "calc. c2" << j << std::endl;
					 d = i;	label2->Text = "D - Known";
					 r = d / 2; label1->Text = "R = D / 2 = " + r + "m";
					 c = d * pi; label4->Text = "C = D * pi = " + c + "m";
					 s = pi * r * r; label3->Text = "S = pi * r² = " + s + "m²";
					 break;
				 case 3: //S
					 std::cout << "calc. c3" << j << " pi " << pi << std::endl;
					 s = i;	label3->Text = "S - Known";
					 r = sqrt(s / pi); label1->Text = "R = D / 2 = " + r + "m";
					 d = 2 * r;	label2->Text = "D = 2 * R = " + d + "m";
					 c = d * pi; label4->Text = "C = D * pi = " + c + "m";
					 
					 break;
				 case 4: //C
					 std::cout << "calc. c4" << std::endl;
					 c = i;	label4->Text = "C - Known";
					 r = c / (2 * pi); label1->Text = "R = D / 2 = " + r + "m";
					 d = 2 * r; label2->Text = "D = 2 * R = " + d + "m";
					 s = pi * r * r; label3->Text = "S = pi * r² = " + s + "m²";
					 break;
				 default:
					 std::cout << "calc. ERROR" << std::endl;
					 error = 1; // siis see kuvatakse
					 break;
				 }
				 answReturner(c, r, d, s, error, j);
			 }
			 //ANSWRETURNER
			 void answReturner(double c, double r, double d, double s, int error, int j) { // r, d, s, c, pi siin tagastatakse töödeldud, kontrollitud ja arvutatud andmed õigetesse lahtritesse. Ainuke mida ei muudeta on lahter kuhu parasjagu kirjutatakse.
				 if (j != 1) {
					 std::cout << "answR. 1" << std::endl;
					 if (error == 0) { textBox1->Text = unit(r, 1); }
					 else { textBox1->Text = "ERROR"; }
				 }
				 if (j != 2) {
					 std::cout << "answR. 2" << std::endl;
					 if (error == 0) {
						 textBox2->Text = unit(d, 2);
					 }
					 else { textBox2->Text = "ERROR"; }
				 }
				 if (j != 3) {
					 std::cout << "answR. 3" << std::endl;
					 if (error == 0) {
						 textBox3->Text = unit(s, 3);
					 }
					 else { textBox3->Text = "ERROR"; }
				 }
				 if (j != 4) {
					 std::cout << "answR. 4" << std::endl;
					 if (error == 0) {
						 textBox4->Text = unit(c, 4);
					 }
					 else { textBox4->Text = "ERROR"; }
				 }
			 }




	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();// see on sulgemisnupu käsk.
	}
	private: System::Void Ring_Load(System::Object^  sender, System::EventArgs^  e) {
		this->dragging = false;
	}
	private: System::Void Ring_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {//1
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
	private: System::Void Ring_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {//2
		if (this->dragging) {
			Point currentScreenPos = PointToScreen(e->Location);// need 3 eventit tegelevad draggimisega.
			Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
		}
	}
	private: System::Void Ring_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {//3
		this->dragging = false;
	}
	};
}