#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello world" << endl;
    if (argc < 2)
    {
        cout << "You need to pass the test directory through arguments." << endl;
        exit(-1);
    }
    string dir = argv[1];
    string tmConfig = dir + "/test.tm";
    string input = dir + "/input.txt";
    string result = dir + "/result.txt";
    string console = dir + "/console.txt";
    cout << tmConfig << endl;
    cout << input << endl;
    cout << result << endl;
    cout << console << endl;
    
    return 0;
}