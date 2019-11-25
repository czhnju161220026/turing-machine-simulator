#ifndef __TRANSITION_H__
#define __TRANSITION_H__
#include <vector>
#include <string>
using namespace std;

class Transition
{
private:
    string state;
    string tapeSymbols;
    string newSymbols;
    string directions;
    string newState;
public:
    Transition(string description);
    bool match(string state, string tapeSymbols);
    string getNewSymbols();
    string getNewState();
};

#endif