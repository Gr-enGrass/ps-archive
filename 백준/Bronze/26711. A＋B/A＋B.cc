
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void BigIntAdd(string a, string b)
{
    string result = "";
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    
    while(a.length()<b.length())//0채우기
        a += '0';
    while(b.length()<a.length())
        b += '0';
    
    int carry = 0;
    int len = a.length(); 
    for(int i =0;i<len;i++)
    {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        result.push_back(sum % 10 + '0');
        carry = sum/10;
    }
    if (carry)
        result.push_back('1');
    
    reverse(result.begin(),result.end());
    cout << result;
}

int main()
{
    string a,b;
    cin >> a >> b;
    
    BigIntAdd(a,b);

    return 0;
}