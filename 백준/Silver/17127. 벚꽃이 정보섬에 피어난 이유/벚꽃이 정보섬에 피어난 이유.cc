#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[10]={};
    for(int i =0;i<n;i++)
    {
        cin >> arr[i];
    }
    int result = 0;
    for(int i =1;i<n-2;i++)
    {
        for(int j = i+1;j<n-1;j++)
        {
            for(int k = j+1;k<n;k++)
            {
                int temp1=1;
                for(int l = 0;l<i;l++)
                {
                    temp1*=arr[l];
                }
                int temp2=1;
                for(int l = i;l<j;l++)
                {
                    temp2*=arr[l];
                }
                int temp3=1;
                for(int l = j;l<k;l++)
                {
                    temp3*=arr[l];
                }
                int temp4=1;
                for(int l =k;l<n;l++)
                {
                    temp4*=arr[l];
                }
                if(result<temp1+temp2+temp3+temp4)
                {
                    result = temp1+temp2+temp3+temp4;
                }
            }
        }
    }
    cout << result;
}