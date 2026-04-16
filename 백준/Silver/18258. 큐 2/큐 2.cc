#include <iostream>
#include <queue>
#include <sstream>

using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    queue <int> test;
    string str;
    int a;
    cin>>x;
    
    for(int i =0 ;i<x;i++)
    {
        cin>>str;
        switch(str[0])
        {
            case 'p':
                if(str[1]=='u')
                {
                    cin>>a;
                    test.push(a);
                }
                else
                {
                    if(test.empty()==1)
                    {
                        cout<<"-1"<<"\n";
                    }
                    else
                    {
                        cout<<test.front()<<"\n";
                        test.pop();
                    }
                }
            break;
            
            case 's':
                cout<<test.size()<<"\n";
            break;
            
            case 'e':
                cout<<test.empty()<<"\n";
            break;
                
            case 'f':
                if(test.empty()==1)
                    {
                        cout<<"-1"<<"\n";
                    }
                    else
                    {
                        cout<<test.front()<<"\n";
                    }
            break;
            
            default:
                if(test.empty()==1)
                    {
                        cout<<"-1"<<"\n";
                    }
                    else
                    {
                        cout<<test.back()<<"\n";
                    }
            break;
        }
    }

    return 0;
}