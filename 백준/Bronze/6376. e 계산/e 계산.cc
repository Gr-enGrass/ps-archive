
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double fact(double a)
{
    if(a<=1)
    {
        return 1;
    }
    else
    {
        return a*fact(a-1);
    }
}

int main()
{
    cout << "n e\n- -----------\n";
    double e=0;
    for(int i=0;i<=9;i++)
    {
        e+=1/fact(i);
        if(i<=3){
            cout.precision(10);
            cout << i << ' ' << e << "\n";
        }
        else{
            cout << fixed;
            cout.precision(9);
            cout << i << ' ' << e << "\n";
        }
        
    }
    return 0;
}