
#include <iostream>

using namespace std;

int main()
{
    int A[10];
    int B[10];
    
    for(int i =0;i<10;i++)
    {
        cin >> A[i];
    }
    for(int i =0;i<10;i++)
    {
        cin >> B[i];
    }
    int scoreA = 0;
    int scoreB = 0;
    int lastWinA = 123;
    for(int i =0;i<10;i++)
    {
        if(A[i]>B[i])
        {
            scoreA +=3;
            lastWinA = 1;
        }
        else if(A[i]<B[i])
        {
            scoreB +=3;
            lastWinA = 0;
        }
        else
        {
            scoreA +=1;
            scoreB +=1;
        }
    }
    
    cout << scoreA << ' ' << scoreB << '\n';
    if(scoreA>scoreB)
    {
        cout << 'A';
    }
    else if(scoreA<scoreB)
    {
        cout << 'B';
    }
    else
    {
        if(lastWinA==123)
        {
            cout << 'D';
        }
        else if(lastWinA==1)
        {
            cout << 'A';
        }
        else
        {
            cout << 'B';
        }
    }
    return 0;
}