#include <iostream>
#include <string>
using namespace std;
int main(){
    string start;
    string str;
    
    getline(cin,start);
    int test = 0;
    while(1)
    {
        getline(cin,str);
        if(str=="문제")
        {
            test+=1;
        }
        else if(str=="고무오리")
        {
            if(test>=1)
            {
                test-=1;
            }
            else
            {
                test=2;
            }
        }
        else
        {
            if(test==0)
            {
                cout << "고무오리야 사랑해";
                return 0;                
            }
            else
            {
                cout << "힝구";
                return 0;               
            }
        }
    }
}