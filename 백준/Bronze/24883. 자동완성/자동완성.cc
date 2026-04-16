
#include <iostream>

using namespace std;

int main()
{
    char temp[2];
    cin >> temp;
    if(temp[0]=='n'||temp[0]=='N')
    {
        cout << "Naver D2";
        return 0;
    }
    else
    {
        cout << "Naver Whale";
        return 0;
    }
}