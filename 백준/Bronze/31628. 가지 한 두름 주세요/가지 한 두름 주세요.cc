
#include <iostream>

using namespace std;

int main()
{
    bool check_h = true,check_v = true;
    string str[10][10];
    string check;
    for(int i =0;i<10;i++)
    {
        check_h = true;
        cin >> str[i][0];
        check = str[i][0];
        for(int j =1;j<10;j++)
        {
            cin >> str[i][j];
            if(check!=str[i][j])
            {
                check_h=false;
            }
        }
        if(check_h)
        {
            cout << 1;
            return 0;
        }
    }
    for(int i =0;i<10;i++)
    {
        check_v = true;
        check = str[0][i];
        for(int j =1;j<10;j++)
        {
            if(str[j][i]!=check)
            {
                check_v=false;
            }
        }
        if(check_v)
        {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}