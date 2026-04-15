
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str ="";
    cin >> str;
    switch(str[0])
    {
        case 'S':
            cout << "HIGHSCHOOL";
            break;
        case 'C':
            cout << "MASTER";
            break;
        case '2':
            cout << "0611";
            break;
        case 'A':
            cout << "CONTEST";
    }
}