
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    while(1){
        string word="";
        getline(cin,word);
        if(word=="END")
        {
            return 0;
        }
        reverse(word.begin(),word.end());
        cout << word <<'\n';
    }
    
    
}