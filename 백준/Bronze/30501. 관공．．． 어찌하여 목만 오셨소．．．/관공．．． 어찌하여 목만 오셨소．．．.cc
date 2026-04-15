
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string name;
    string result;
    while(n--)
    {
        cin >> name;
        for(const auto &a : name)
        {
            if(a=='S')
                result = name;
        }
    }
    cout << result;
    return 0;
}