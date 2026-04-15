
#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int result=0;;
    for(int i =0;i<10;i++)
    {
        int a,temp=0;
        cin >> a;
        sum+=a;
        temp=a;
        if(sum>=100)
        {
            if(sum-100>-(sum-temp-100))
            {
                result=sum-temp;
                break;
            }
            else if(sum-100<-(sum-temp-100))
            {
                result=sum;
                break;
            }
            else
            {
                result=sum;
                break;
            }
        }
        result+=a;
    }
    cout << result;

    return 0;
}