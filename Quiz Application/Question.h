#pragma once

#include <string>
#include "Answer.h"

using namespace std;

public class Question
{
public:

    string quesText;
    bool corrAnswer;
    Answer answer1;
    Answer answer2;
    Answer answer3;
    Answer answer4;

    string getText() 
    {
        return this->quesText;
    }

    void setText(std::string text) 
    {
        this->quesText = text;
    }

    Answer getCorrectAnswer() 
    {
        if (answer1.correct = true)
        {
            return answer1;
        }

        else if (answer2.correct = true)
        {
            return answer2;
        }

        else if (answer2.correct = true)
        {
            return answer3;
        }

        else if (answer4.correct = true)
        {
            return answer4;
        }
    }

    string getAnswerText(Answer ans) 
    {
        return ans.ansText;
    }

    void setAnswer(int ans, string input) 
    {
        if (ans == 1)
        {
            answer1.ansText = input;
        }

        else if (ans == 2)
        {
            answer2.ansText = input;
        }

        else if (ans == 3)
        {
            answer3.ansText = input;
        }

        else if (ans == 4)
        {
            answer4.ansText = input;
        }
    }

    bool isCorrect() 
    {
        if (answer1.selected == true && answer1.correct == true)
        {
            this->corrAnswer = true;
        }

        else if (answer2.selected == true && answer2.correct == true)
        {
            this->corrAnswer = true;
        }

        else if (answer3.selected == true && answer3.correct == true)
        {
            this->corrAnswer = true;
        }

        else if (answer4.selected == true && answer4.correct == true)
        {
            this->corrAnswer = true;
        }

        else
            this->corrAnswer = false;

        return corrAnswer;
    }
};