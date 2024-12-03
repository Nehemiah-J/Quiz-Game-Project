#pragma once

#include "Question.h"
#include "Answer.h"
#include <vector>
#include <iostream>
#include <random>

using namespace std;

public class Database
{
    public:

        vector<Question> questionList;

        void AddNewQuestion(Question input) 
        {
            questionList.push_back(input);
        }

        Question GetRandQuestion() 
        {
            int min = 0;
            int max = questionList.size();

            random_device randInt;

            mt19937 gen(randInt());
            uniform_int_distribution<> distrib(min, max);

            int randQuestion = distrib(gen);

            return questionList[randQuestion];
        }
};

