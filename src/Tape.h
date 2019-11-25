#ifndef __TAPE_H__
#define __TAPE_H__
#include <vector>
#include <string>
using namespace std;

class Tape
{
private:
    vector<char> contents;     //输入最左单元对应contents的index 0
    vector<char> leftContent; //输入左侧的无限长空白纸带
    char blank;
public:
    void init(string input);
    char get(int index);
    void set(int index, char symbol);
    void setBlank(char ch);
    string toString(int head, int index); //给定磁头位置，返回纸带的string表示
};

#endif