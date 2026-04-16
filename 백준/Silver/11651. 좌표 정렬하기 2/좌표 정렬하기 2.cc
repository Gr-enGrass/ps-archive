#include <iostream>
#include <algorithm>

using namespace std;

struct xy
{
    int x;
    int y;
};

bool compareXY(xy a,xy b)
{
    if(a.y == b.y){
        return b.x > a.x;
    }
    return b.y > a.y;
}

int main()
{
    int n;
    cin >> n;
    struct xy arr[100000];
    for(int i =0;i<n;i++)
    {
        cin >> arr[i].x;
        cin >> arr[i].y;
    }
    sort(arr,arr+n,compareXY);
    for(int i =0;i<n;i++)
    {
        cout << arr[i].x <<" "<< arr[i].y << "\n";
    }
}