
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
    vector<string> str(3);
    int cnt;
    int num;
    for(int i=0;i<3;i++)
    {
        cin >> str[i];
    }

    for(int i=0;i<3;i++)
    {
        if(atoi(str[i].c_str()))
        {
            num=atoi(str[i].c_str());
            cnt=i+1;
            break;
        }
    }

    int ans=num+4-cnt;
        
    if(ans%3==0&&ans%5==0)
    {
        cout << "FizzBuzz";
    }
    else if(ans%3==0&&!ans%5==0)
    {
        cout << "Fizz";
    }
    else if(!ans%3==0&&ans%5==0)
    {
        cout << "Buzz";
    }
    else
    {
        cout << ans;
    }

    return 0;
}