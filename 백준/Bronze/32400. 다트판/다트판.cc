#include <iostream>

using namespace std;

int main()
{
    double bob = 10.5;
    double alice = 0.0;
    int arr[20];
    for(int i =0;i<20;i++)
    {
        cin >> arr[i];
    }
    
    if(arr[0]==20)
    {
        alice = (arr[0] + arr[1] + arr[19])/3.0;
    }
    else if(arr[19]==20)
    {
        alice = (arr[19] + arr[18] + arr[0])/3.0;
    }
    else
    {
        for(int i =1;i<20;i++)
        {
            if(arr[i]==20)
            {
                alice = (arr[i-1] + arr[i] + arr[i+1])/3.0;
            }
        }
    }
    
    if(alice>bob)
    {
        cout << "Alice";
    }
    else if(bob>alice)
    {
        cout << "Bob";
    }
    else
    {
        cout << "Tie";
    }
    return 0;
}