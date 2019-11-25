#include "Transition.h"
#include <sstream>
using namespace std;
Transition::Transition(string description)
{
    stringstream ss(description);
    ss >> this->state >> this->tapeSymbols >> this->newSymbols >> this->directions >> this->newState;
}

string Transition::toString()
{
    return this->state + " " + this->tapeSymbols + " " + this->newSymbols + " " + this->directions + " " + this->newState + "\n";

}

bool Transition::match(string state, string tapeSymbols)
{
    return false;
}

string Transition::getNewSymbols()
{
    return this->newSymbols;
}

string Transition::getNewState()
{
    return this->newState;
}