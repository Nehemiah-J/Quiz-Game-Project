#include "windows.h"


#pragma once

namespace QuizApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for curGame
	/// </summary>
	public ref class curGame : public System::Windows::Forms::Form
	{
	public:
		curGame(void)
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
		~curGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ timerLabel;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
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
			this->timerLabel = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timerLabel
			// 
			this->timerLabel->AutoSize = true;
			this->timerLabel->Location = System::Drawing::Point(148, 95);
			this->timerLabel->Name = L"timerLabel";
			this->timerLabel->Size = System::Drawing::Size(42, 16);
			this->timerLabel->TabIndex = 0;
			this->timerLabel->Text = L"Timer";
			// 
			// curGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1097, 523);
			this->Controls->Add(this->timerLabel);
			this->Name = L"curGame";
			this->Text = L"curGame";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int counter = 0;

	private: System::Void curGame_Load(System::Object^ sender, System::EventArgs^ e) {

		counter = 60;

        timerLabel->Text = "60";

        timer1->Start();


	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		timerLabel->Text = counter.ToString();
		counter--;

		if (counter <= 0)
		{
			timerLabel->Text = "0";
			timer1->Stop();

			this->Close();

		}
	}

	};
}
