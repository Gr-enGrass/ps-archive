
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int A,B;
    cin >> A >> B;
    int sum = 0;
    vector<int> result;
    for(int i = 1;i<=B;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            sum+=i;
            result.push_back(sum);
        }
    }
    cout << result[B-1]-result[A-2];
    return 0;
}