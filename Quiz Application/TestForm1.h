
#include "Question.h"
#include "Answer.h"
#include "Database.h"

#pragma once

namespace QuizApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TestForm1
	/// </summary>
	public ref class TestForm1 : public System::Windows::Forms::Form
	{
	public:
		TestForm1(void)
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
		~TestForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ timerLabel;
	protected:
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ scoreLabel;
	private: System::Windows::Forms::Label^ QuestionLabel;
	private: System::Windows::Forms::Button^ AnswerButton1;
	private: System::Windows::Forms::Button^ AnswerButton2;
	private: System::Windows::Forms::Button^ AnswerButton3;
	private: System::Windows::Forms::Button^ AnswerButton4;
	private: System::Windows::Forms::Timer^ timer2;


	private: System::ComponentModel::IContainer^ components;

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
			this->scoreLabel = (gcnew System::Windows::Forms::Label());
			this->QuestionLabel = (gcnew System::Windows::Forms::Label());
			this->AnswerButton1 = (gcnew System::Windows::Forms::Button());
			this->AnswerButton2 = (gcnew System::Windows::Forms::Button());
			this->AnswerButton3 = (gcnew System::Windows::Forms::Button());
			this->AnswerButton4 = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timerLabel
			// 
			this->timerLabel->AutoSize = true;
			this->timerLabel->Location = System::Drawing::Point(95, 68);
			this->timerLabel->Name = L"timerLabel";
			this->timerLabel->Size = System::Drawing::Size(42, 16);
			this->timerLabel->TabIndex = 0;
			this->timerLabel->Text = L"Timer";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &TestForm1::timer1_Tick);
			// 
			// scoreLabel
			// 
			this->scoreLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->scoreLabel->AutoSize = true;
			this->scoreLabel->Location = System::Drawing::Point(955, 68);
			this->scoreLabel->Name = L"scoreLabel";
			this->scoreLabel->Size = System::Drawing::Size(49, 16);
			this->scoreLabel->TabIndex = 1;
			this->scoreLabel->Text = L"Score: ";
			// 
			// QuestionLabel
			// 
			this->QuestionLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->QuestionLabel->AutoSize = true;
			this->QuestionLabel->Location = System::Drawing::Point(498, 123);
			this->QuestionLabel->Name = L"QuestionLabel";
			this->QuestionLabel->Size = System::Drawing::Size(60, 16);
			this->QuestionLabel->TabIndex = 2;
			this->QuestionLabel->Text = L"Question";
			// 
			// AnswerButton1
			// 
			this->AnswerButton1->Location = System::Drawing::Point(318, 211);
			this->AnswerButton1->Name = L"AnswerButton1";
			this->AnswerButton1->Size = System::Drawing::Size(138, 58);
			this->AnswerButton1->TabIndex = 3;
			this->AnswerButton1->Text = L"Answer 1";
			this->AnswerButton1->UseVisualStyleBackColor = true;
			this->AnswerButton1->Click += gcnew System::EventHandler(this, &TestForm1::AnswerButton1_Click);
			// 
			// AnswerButton2
			// 
			this->AnswerButton2->Location = System::Drawing::Point(613, 211);
			this->AnswerButton2->Name = L"AnswerButton2";
			this->AnswerButton2->Size = System::Drawing::Size(125, 58);
			this->AnswerButton2->TabIndex = 4;
			this->AnswerButton2->Text = L"Answer 2";
			this->AnswerButton2->UseVisualStyleBackColor = true;
			this->AnswerButton2->Click += gcnew System::EventHandler(this, &TestForm1::AnswerButton2_Click);
			// 
			// AnswerButton3
			// 
			this->AnswerButton3->Location = System::Drawing::Point(318, 326);
			this->AnswerButton3->Name = L"AnswerButton3";
			this->AnswerButton3->Size = System::Drawing::Size(138, 57);
			this->AnswerButton3->TabIndex = 5;
			this->AnswerButton3->Text = L"Answer 3";
			this->AnswerButton3->UseVisualStyleBackColor = true;
			this->AnswerButton3->Click += gcnew System::EventHandler(this, &TestForm1::AnswerButton3_Click);
			// 
			// AnswerButton4
			// 
			this->AnswerButton4->Location = System::Drawing::Point(613, 326);
			this->AnswerButton4->Name = L"AnswerButton4";
			this->AnswerButton4->Size = System::Drawing::Size(125, 57);
			this->AnswerButton4->TabIndex = 6;
			this->AnswerButton4->Text = L"Answer 4";
			this->AnswerButton4->UseVisualStyleBackColor = true;
			this->AnswerButton4->Click += gcnew System::EventHandler(this, &TestForm1::AnswerButton4_Click);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &TestForm1::timer2_Tick);
			// 
			// TestForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1081, 537);
			this->Controls->Add(this->AnswerButton4);
			this->Controls->Add(this->AnswerButton3);
			this->Controls->Add(this->AnswerButton2);
			this->Controls->Add(this->AnswerButton1);
			this->Controls->Add(this->QuestionLabel);
			this->Controls->Add(this->scoreLabel);
			this->Controls->Add(this->timerLabel);
			this->Name = L"TestForm1";
			this->Text = L"TestForm1";
			this->Load += gcnew System::EventHandler(this, &TestForm1::TestForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int counter = 0;
		int counter2 = 0;
		int score = 0;

		

	private: System::Void TestForm1_Load(System::Object^ sender, System::EventArgs^ e) {

		// Start of question initialization
		
		Database db;

		Question question1;

		question1.setText("What is the Powerhouse of the Cell?");
		question1.setAnswer(1, "Nucleus");
		question1.setAnswer(2, "Mitochondria");
		question1.setAnswer(3, "Atom");
		question1.setAnswer(4, "Blood");

		question1.answer2.SetCorr();

		db.AddNewQuestion(question1);

		Question question2;

		question2.setText("What is the 55 + 192");
		question2.setAnswer(1, "277");
		question2.setAnswer(2, "207");
		question2.setAnswer(3, "247");
		question2.setAnswer(4, "307");

		question2.answer3.SetCorr();

		db.AddNewQuestion(question2);

		Question question3;

		question3.setText("What Element is the H in H2O?");
		question3.setAnswer(1, "Hydrogen");
		question3.setAnswer(2, "Oxygen");
		question3.setAnswer(3, "Carbon");
		question3.setAnswer(4, "Peroxide");

		question3.answer1.SetCorr();

		db.AddNewQuestion(question3);

		Question question4;

		question4.setText("What does log mean in mathematics?");
		question4.setAnswer(1, "Logs");
		question4.setAnswer(2, "Logistics");
		question4.setAnswer(3, "Logarithm");
		question4.setAnswer(4, "Login");

		question4.answer3.SetCorr();

		db.AddNewQuestion(question4);

		Question question5;

		question5.setText("Which Answer is a member of the Animal Kingdom?");
		question5.setAnswer(1, "Orchid");
		question5.setAnswer(2, "Rose");
		question5.setAnswer(3, "Oak");
		question5.setAnswer(4, "Platypus");

		question5.answer4.SetCorr();

		db.AddNewQuestion(question5);


		// End of question initialization

		Question currQuestion = db.GetRandQuestion();
		

		Answer currAns = currQuestion.getCorrectAnswer();

		string ans1 = currQuestion.getAnswerText(currAns);

		AnswerButton1->Text = "ans1";

		AnswerButton1->Text = "The other one doesnt work";

		counter = 3;

		timerLabel->Text = "60";

		timer1->Start();

	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		timerLabel->Text = counter.ToString();
		

		if (counter <= 0)
		{

			timerLabel->Text = "0";
			timer1->Stop();

			QuestionLabel->Text = "You Lose!";

			AnswerButton1->Visible = false;
			AnswerButton2->Visible = false;
			AnswerButton3->Visible = false;
			AnswerButton4->Visible = false;

		}

		counter--;

	}

	private: System::Void AnswerButton4_Click(System::Object^ sender, System::EventArgs^ e) {

	}

    private: System::Void AnswerButton3_Click(System::Object^ sender, System::EventArgs^ e) {

    }

    private: System::Void AnswerButton2_Click(System::Object^ sender, System::EventArgs^ e) {

		//QuestionLabel->Text = "Correct Answer !";

		//counter2 = 3;

		//score++;
		//scoreLabel->Text = score.ToString();

		//timer2->Start();

		//timer1->Stop();

		CorrectAnswer();

		AnswerButton1->Text = "The other one doesnt work";

    }

    private: System::Void AnswerButton1_Click(System::Object^ sender, System::EventArgs^ e) {

    }

    private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		
		QuestionLabel->Text = counter2.ToString();

		if (counter2 <= 0) 
		{
			QuestionLabel->Text = "Question";
			timer2->Stop();

			counter = 0;

			timer1->Start();
		}

		counter2--;
    }

		   public: void CorrectAnswer() 
		   {
			   QuestionLabel->Text = "Correct Answer !";

			   counter2 = 3;

			   score++;
			   scoreLabel->Text = score.ToString();

			   timer2->Start();

			   timer1->Stop();
		   }
};
}
