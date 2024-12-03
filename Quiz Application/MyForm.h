#include <iostream>
#include <chrono>
#include <thread>
#include "curGame.h"
#include "TestForm1.h"

#pragma once

namespace QuizApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ startButton;
	private: System::Windows::Forms::Label^ nameLabel;



	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ TimerLabel;

	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->TimerLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// startButton
			// 
			this->startButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->startButton->Location = System::Drawing::Point(508, 391);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(75, 23);
			this->startButton->TabIndex = 0;
			this->startButton->Text = L"Start";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// nameLabel
			// 
			this->nameLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->nameLabel->AutoSize = true;
			this->nameLabel->Location = System::Drawing::Point(468, 145);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(148, 16);
			this->nameLabel->TabIndex = 1;
			this->nameLabel->Text = L"Nehemiah\'s Quiz Game";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// TimerLabel
			// 
			this->TimerLabel->AutoSize = true;
			this->TimerLabel->Location = System::Drawing::Point(106, 63);
			this->TimerLabel->Name = L"TimerLabel";
			this->TimerLabel->Size = System::Drawing::Size(42, 16);
			this->TimerLabel->TabIndex = 2;
			this->TimerLabel->Text = L"Timer";
			this->TimerLabel->Click += gcnew System::EventHandler(this, &MyForm::TimerLabel_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1097, 523);
			this->Controls->Add(this->TimerLabel);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->startButton);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	int counter = 0;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		//curGame^ newGame = gcnew curGame();
		TestForm1^ newTest = gcnew TestForm1();

		newTest->Show();
		this->Hide();
		//newGame->Show(this);
		
		
	}

	private: System::Void TimerLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		TimerLabel->Text = counter.ToString();
		counter--;

		if (counter <= 0) 
		{
			TimerLabel->Text = "0";
			timer1->Stop();
		}
	}
};
}

