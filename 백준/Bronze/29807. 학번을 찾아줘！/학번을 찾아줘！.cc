
#include <iostream>

using namespace std;

int main()
{
    int n;
    long long num=0;
    
    cin >> n;
    
    int score[5]={0};
    for(int i =0;i<n;i++)
    {

        cin >> score[i];
    }

    if(score[0]>score[2])
    {
        num = ((score[0]-score[2])*508);
    }
    else
    {
        num = ((score[2]-score[0])*108);
    }

    if(score[1]>score[3])
    {
        num += ((score[1]-score[3])*212);
    }
    else
    {
        num += ((score[3]-score[1])*305);
    }
    
    if(n==5)
        num += (score[4]*707);
    
    cout << num*4763;
    return 0;
}