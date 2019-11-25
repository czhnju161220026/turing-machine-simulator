#ifndef __TURING_MACHINE_H__
#define __TURING_MACHINE_H__
#include <string>
#include <vector>
#include <map>
#include "Tape.h"
#include "Transition.h"

using namespace std;

class TuringMachine
{
private:
    int numOfTapes;
    int stepCount;
    char blank;
    vector<string> states;
    vector<char> inputSymbols;
    vector<char> tapeSymbols;
    vector<Transition> transitions;
    vector<Tape> tapes;
    vector<int> heads;
    map<string, int> stateDict;

    void set(string attr, string value);
    void addTransition(string line);
public:
    TuringMachine(string tmConfig);
    void step();
    string getID();
    string toString();
    void refresh();
    void input(string str);
};

#endif