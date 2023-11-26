#include <iostream>
#include <string>
#include <fstream>

using namespace std;



int main()
{
    string str;
    ifstream inFile("./meds.csv");
    inFile >> str;
    cout << str;
}