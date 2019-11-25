#include "TuringMachine.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

string removeSpaces(string line)
{
    string res = "";
    bool flag = false;
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] != ' ')
        {
            flag = true;
        }
        if (flag)
        {
            res.push_back(line[i]);
        }
    }
    return res;
}

string removeComment(string line)
{
    int semiPos = line.find_last_of(';');
    //cout << semiPos << endl;
    if (semiPos != -1)
    {
        //有注释，要去掉
        line = line.substr(0, semiPos);
    }
    return line;
}

TuringMachine::TuringMachine(string tmConfig)
{
    this->stepCount = 0;
    ifstream fin = ifstream(tmConfig.c_str());
    string line;
    vector<string> buffer;
    while (getline(fin, line))
    {
        line = removeSpaces(line);
        line = removeComment(line);
        if (line.length() > 0)
        {
            //cout << line << endl;
            buffer.push_back(line);
        }
    }
    for (int i = 0; i < buffer.size(); i++)
    {
        string line = buffer[i];
        if (line[0] == '#')
        {
            stringstream ss(line);
            string attr;
            string assign;
            string value;
            ss >> attr >> assign >> value;
            this->set(attr, value);
        }
        else
        {
            //转移函数
            this->addTransition(line);
        }
    }
}

void TuringMachine::addTransition(string line)
{
    cout << "Add transition function: " << line << endl;
}

void TuringMachine::set(string attr, string value)
{
    cout << "Attribute: " << attr << endl;
    cout << "Value: " << value << endl;
    
}

void TuringMachine::step()
{
}

string TuringMachine::getID()
{

    return "";
}

string TuringMachine::toString()
{

    return "";
}

void TuringMachine::refresh()
{
}

void TuringMachine::input(string str)
{
}