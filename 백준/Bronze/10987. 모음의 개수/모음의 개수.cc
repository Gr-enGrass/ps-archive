
#include <iostream>

using namespace std;

int main()
{
    string word="";
    cin >> word;
    int cnt = 0;
    for(const auto &a : word)
    {
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
            cnt++;
    }
    cout << cnt;
}