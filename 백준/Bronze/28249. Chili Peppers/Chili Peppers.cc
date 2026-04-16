#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    int price=0;
    string str;
    for(int i = 0; i< n;i++)
    {
        cin >> str;
        switch(str.front())
        {
            case 'P':
                price+=1500;
                break;
            case 'M':
                price+=6000;
                break;
            case 'S':
                price+=15500;
                break;
            case 'C':
                price+=40000;
                break;
            case 'T':
                price+=75000;
                break;
            case 'H':
                price+=125000;
                break;
        }
    }
    cout << price;
}