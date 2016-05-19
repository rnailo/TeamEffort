#pragma once
#include "resource.h"
#include "Ruut.h"
#include "Ring.h"
#include "Trapets.h"
#include "Ristkylik.h"
#include "Kolmnurk.h"



namespace PohiNS {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Pohi : public System::Windows::Forms::Form
	{
		
	public:
		Pohi(void)
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
		~Pohi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: bool dragging;
	private: Point offset;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button6;



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(9, 10);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(194, 392);
			this->panel1->TabIndex = 0;
			// 
			// button6
			// 
			this->button6->AutoSize = true;
			this->button6->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(169, 2);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
			this->button6->Size = System::Drawing::Size(27, 25);
			this->button6->TabIndex = 24;
			this->button6->Text = L"X";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Pohi::button6_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label4->Location = System::Drawing::Point(104, 76);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 42);
			this->label4->TabIndex = 0;
			this->label4->Text = L"E";
			this->label4->UseMnemonic = false;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label3->Location = System::Drawing::Point(104, 20);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 42);
			this->label3->TabIndex = 1;
			this->label3->Text = L"M";
			this->label3->UseMnemonic = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label2->Location = System::Drawing::Point(104, 184);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 42);
			this->label2->TabIndex = 2;
			this->label2->Text = L"U";
			this->label2->UseMnemonic = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label1->Location = System::Drawing::Point(104, 131);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 42);
			this->label1->TabIndex = 3;
			this->label1->Text = L"N";
			this->label1->UseMnemonic = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(13, 123);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(66, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Triangle";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Pohi::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(13, 95);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(66, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Rectangle";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Pohi::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(13, 67);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(66, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Trapeze";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Pohi::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 40);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Circle";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Pohi::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 12);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Square";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Pohi::button1_Click);
			// 
			// Pohi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(212, 412);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Pohi";
			this->Load += gcnew System::EventHandler(this, &Pohi::Pohi_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Pohi::Pohi_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Pohi::Pohi_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Pohi::Pohi_MouseUp);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		RuutNS::Ruut^ Ruut1 = gcnew RuutNS::Ruut;
		Ruut1->Show();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		RingNS::Ring^ Ring1= gcnew RingNS::Ring;
		Ring1->Show();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		TrapetsNS::Trapets^ Trapets1 = gcnew TrapetsNS::Trapets;
		Trapets1->Show();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		RistkylikNS::Ristkylik^ Ristkylik1 = gcnew RistkylikNS::Ristkylik;
		Ristkylik1->Show();
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		KolmnurkNS::Kolmnurk^ Kolmnurk1 = gcnew KolmnurkNS::Kolmnurk;
		Kolmnurk1->Show();
	}


private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}	private: System::Void Pohi_Load(System::Object^  sender, System::EventArgs^  e) {
	this->dragging = false;
}
	private: System::Void Pohi_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
	private: System::Void Pohi_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (this->dragging) {
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
		}
	}
	private: System::Void Pohi_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->dragging = false;
	}
	};}
