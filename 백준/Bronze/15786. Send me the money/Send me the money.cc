#include <iostream>
#include <vector>


using namespace std;


int main()
{
    int n,m;
    cin >> n >> m;
    string password;
    cin >> password;
    while(m--)
    {
        string temp;
        cin >> temp;
        int cnt = 0;
        int start =0;
        for(int i =0;i<password.size();i++)
        {
            
            for(int j =start;j<temp.size();j++)
            {
                if(password[i]==temp[j])
                {
                    start = j+1;
                    cnt ++;
                    break;
                }
            }
        }
        
        cout << (n==cnt ? "true\n" : "false\n");
    }

    return 0;
}