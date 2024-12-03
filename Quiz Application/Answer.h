#pragma once

#include <string>

using namespace std;

public class Answer
{
    public:
        string ansText;
        bool correct;
        bool selected;

        void SetCorr() 
        {
            this->correct = true;
        }

        bool GetCorr() 
        {
            return correct;
        }

        void SetSel() 
        {
            this->selected = true;
        }

        bool GetSel() 
        {
            return selected;
        }
};

