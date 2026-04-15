
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag= 0;
    while(n--)
    {
        string str;
        cin >> str;
        for(int i =0;i<str.size();i++)
        {
            if(str[i]>=97)
                str[i]-=32;
        }
        if(str=="ANJ")
        {
            flag = 1;
            continue;
        }
    }
    cout << (flag?"뭐야;":"뭐야?");
    return 0;
}