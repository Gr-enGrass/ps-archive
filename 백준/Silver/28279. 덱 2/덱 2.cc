#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int x;
    cin >> n;
    deque<int>test;
    int order;
    
    for(int i =0;i<n;i++)
    {
        cin >> order;
        switch(order)
        {
            case 1:
                cin >> x;
                test.push_front(x);
                break;
                
            case 2:
                cin >> x;
                test.push_back(x);
                break;
                
            case 3:
                if(test.empty())
                {
                    cout << "-1" << "\n";
                }
                else
                {
                    cout << test.front() << "\n";
                    test.pop_front();
                }
                break;
                
            case 4:
                if(test.empty())
                {
                    cout << "-1" << "\n";
                }
                else
                {
                    cout << test.back() << "\n";
                    test.pop_back();
                }
                break;
                
            case 5:
                cout << test.size() << "\n";
                break;
                
            case 6:
                if(!test.empty())
                {
                    cout << "0" << "\n";
                }
                else
                {
                    cout << "1" << "\n";
                }
            
                break;
                
            case 7:
                if(test.empty())
                {
                    cout << "-1" << "\n";
                }
                else
                {
                    cout << test.front() << "\n";
                }
                break;
                
            default:
                if(test.empty())
                {
                    cout << "-1" << "\n";
                }
                else
                {
                    cout << test.back() << "\n";
                } 
                break;
        }
    }

    return 0;
}