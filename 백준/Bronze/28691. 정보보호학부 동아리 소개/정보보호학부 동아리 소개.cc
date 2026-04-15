
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    char temp[2];
    cin >> temp;
    switch(temp[0])
    {
        case 'M':
            cout << "MatKor";
            break;
        case 'W':
            cout << "WiCys";
            break;
        case 'C':
            cout << "CyKor";
            break;
        case 'A':
            cout << "AlKor";
            break;
        case '$':
            cout << "$clear";
    }
}