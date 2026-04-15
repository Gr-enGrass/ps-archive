#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int total;
    cin >> total;
    int book = 9;
    int sum = 0;
    while(book--)
    {
        int temp;
        cin >> temp;
        sum += temp;
    }
    cout << total - sum;
}