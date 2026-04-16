#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main()
{
    int k,n;
    
    cin >> k >> n;
    cin.ignore();
    int arr[k-1]={0};
    int check=k-n;
    string temp;
    
    for(int i=0;i<k-1;i++)
    {
        getline(cin, temp, ',');
        arr[i]=stoi(temp);
    }
    getline(cin, temp);
    arr[k-1]=stoi(temp);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k-1;j++)
        {
            arr[j]=arr[j+1]-arr[j];
        }
        k--;
    }

    for(int i=0;i<check-1;i++)
    {
        cout << arr[i] << ',';
    }
    cout << arr[check-1];
    return 0;
}