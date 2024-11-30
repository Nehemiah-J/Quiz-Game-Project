#pragma once

#include <string>
#include "Answer.h"

public class Question
{
public:

    std::string quesText;
    bool corrAnswer;
    Answer answer1;
    Answer answer2;
    Answer answer3;
    Answer answer4;

    std::string getText() 
    {
        return this->quesText;
    }

    void setText(std::string text) 
    {
        this->quesText = text;
    }

    Answer getAnswer(int ans) 
    {
        if (ans == 1)
        {
            return answer1;
        }

        else if (ans == 2)
        {
            return answer2;
        }

        else if (ans == 3)
        {
            return answer3;
        }

        else if (ans == 4)
        {
            return answer4;
        }
    }

    void setAnswer(int ans, std::string input) 
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