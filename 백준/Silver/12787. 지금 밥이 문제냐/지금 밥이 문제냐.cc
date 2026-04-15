#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include <cmath>

using namespace std;

void Ipv8ToInt(string str)
{
    string temp="";
    unsigned long long int num = 0;
    stringstream sstream(str);
    int bit = 7;
    while(getline(sstream, temp, '.'))
    {
        num*=256;
        num+=stoi(temp);
    }
    cout << num << '\n';
}

void IntToIpv8(unsigned long long num)
{
    string ip = "";
    for(int i=7;i>=0;i--)
    {
        int bitnum=0;
        for(int bit=7;bit>=0;bit--)
        {
            bitnum = (num >> (i * 8)) & 0xFF;
        }
        ip+=to_string(bitnum)+ '.';
    }
    ip.erase(ip.end()-1);
    cout << ip << "\n";
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    
    for(int i=0;i<n;i++)
    {
        unsigned long long num;
        string str;
        int check;
        cin >> check;
        cin.ignore();
        if(check==2)
        {
            //10진수 - IP
            cin >> num;
            IntToIpv8(num);
        }
        else
        {
            //IP - 10진수
            cin >> str;
            Ipv8ToInt(str);
        }
        cin.ignore();
    }
    return 0;
}