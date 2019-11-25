#ifndef __TAPE_H__
#define __TAPE_H__
#include<vector>
using namespace std;

class Tape {
private:
    char blank;
    vector<char> contents; //输入最左单元对应contents的index 0
    vector<char> leftContents; //输入左侧的无限长空白纸带
    
public:
    void get(int index);
    void set(int index, char symbol); 
    string toString(int head); //给定磁头位置，返回纸带的string表示
};

#endif