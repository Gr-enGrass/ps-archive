#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int score_d = 0;
    int score_p = 0;
    while(n--)
    {
        char temp;
        cin >> temp;
        if(temp == 'D')
        {
            score_d++;
        }
        else
        {
            score_p++;
        }
        if(score_p>=score_d+2 || score_d>=score_p+2)
        {
            break;
        }
    }
    cout << score_d << ':' << score_p;
}