#include "Tape.h"
#include <assert.h>
using namespace std;

char Tape::get(int index)
{
    if (index >= 0)
    {
        if (index >= this->contents.size())
        {
            return this->blank;
        }
        return this->contents[index];
    }
    else
    {
        index = -index - 1;
        if (index >= this->leftContent.size())
        {
            return this->blank;
        }
        return this->leftContent[index];
    }
}

void Tape::set(int index, char symbol)
{
    if (index >= 0)
    {
        if (index < this->contents.size())
        {
            this->contents[index] = symbol;
            return;
        }
        else if (index == this->contents.size())
        {
            this->contents.push_back(symbol);
            return;
        }
        assert(0);
    }
    else {
        index = -index - 1;
        if (index < this->leftContent.size())
        {
            this->leftContent[index] = symbol;
            return;
        }
        else if (index == this->leftContent.size())
        {
            this->leftContent.push_back(symbol);
            return;
        }
        assert(0);
    }
}

string Tape::toString(int head, int index)
{
    string res = "";
    res = res + "Index" + to_string(index) + "\t:";
    
    return "";
}

void Tape::setBlank(char ch) {this->blank = ch;}

void Tape::init(string input)
{
    for(int i = 0; i < input.length(); i++)
    {
        this->contents.push_back(input[i]);
    }
}