#pragma once

namespace KolmnurkNS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>

	public ref class Kolmnurk : public System::Windows::Forms::Form
	{
	public:
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
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::ComboBox^  comboBox6;
	public: System::Windows::Forms::TextBox^  textBox5;
	private:
	public: System::Windows::Forms::TextBox^  textBox6;
	public: System::Windows::Forms::CheckBox^  checkBox5;
	public: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
		void InitializeComponent(void)
		{
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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
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
			this->label1->Location = System::Drawing::Point(174, 52);
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
			this->checkBox4->ForeColor = System::Drawing::Color::Black;
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
			// 
			// checkBox2
			// 
			this->checkBox2->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox2->ForeColor = System::Drawing::Color::Black;
			this->checkBox2->Location = System::Drawing::Point(210, 279);
			this->checkBox2->Margin = System::Windows::Forms::Padding(2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(50, 19);
			this->checkBox2->TabIndex = 30;
			this->checkBox2->Text = L"b -";
			this->checkBox2->UseVisualStyleBackColor = false;
			// 
			// checkBox1
			// 
			this->checkBox1->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->checkBox1->ForeColor = System::Drawing::Color::Black;
			this->checkBox1->Location = System::Drawing::Point(210, 255);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(50, 19);
			this->checkBox1->TabIndex = 31;
			this->checkBox1->Text = L"a -";
			this->checkBox1->UseVisualStyleBackColor = false;
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
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Kolmnurk::textBox3_TextChanged);
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
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 30, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(11, 9);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(163, 58);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Triangle";
			this->label5->Click += gcnew System::EventHandler(this, &Kolmnurk::label5_Click);
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
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Cursor = System::Windows::Forms::Cursors::No;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(174, 180);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(346, 24);
			this->label7->TabIndex = 41;
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
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(11, 246);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(187, 164);
			this->pictureBox1->TabIndex = 51;
			this->pictureBox1->TabStop = false;
			// 
			// Kolmnurk
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
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
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
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
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void Kolmnurk_Load(System::Object^  sender, System::EventArgs^  e) {
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
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}




private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
}