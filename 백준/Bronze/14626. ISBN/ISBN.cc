
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    char isbn[14];
    int check = 0;
    int sum =0;
    cin.getline(isbn,14);
    for(int i =0;i<12 ;i++)
    {
        if(48<=isbn[i]&&isbn[i]<=57)//0~9
        {
            if((i+1)%2==0)
            {
                sum += (isbn[i]-48)*3;
            }
            else
            {
                sum += (isbn[i]-48);
            }
        }
        else
        {
            check = i+1;
            continue;
        }
    }
    int m = isbn[12]-48;
    int missing = (check%2==0)?3:1;
    for(int i = 0;i<10;i++)
    {
        int total = sum + missing * i + m;
        if(total % 10 == 0)
        {
            cout << i;
        }
    }
}