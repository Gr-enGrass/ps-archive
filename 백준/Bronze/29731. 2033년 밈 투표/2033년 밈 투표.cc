#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    string check[7] = {
        "Never gonna give you up",
        "Never gonna let you down",
        "Never gonna run around and desert you",
        "Never gonna make you cry",
        "Never gonna say goodbye",
        "Never gonna tell a lie and hurt you",
        "Never gonna stop"
    };
    int n;
    bool same = false;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        getline(cin,str);
        for(int i=0;i<7;i++)
        {
            if(str.compare(check[i])==0)
                same = true;
        }
        if(!same)
        {
            cout << "Yes";
            return 0;
        }
        same=false;
    }
    cout << "No";
}