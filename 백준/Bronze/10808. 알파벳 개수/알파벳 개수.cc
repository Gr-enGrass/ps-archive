
#include <iostream>

using namespace std;

int main()
{
    string word="";
    cin >> word;
    short alphabet[26]={0};
    
    for(const auto &a : word)
    {
        alphabet[a-'a']++;
    }
    for(int i =0;i<26;i++)
    {
        cout << alphabet[i] << ' ';
    }
}