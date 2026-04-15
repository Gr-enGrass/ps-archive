#include <iostream>
using namespace std;


int main()
{
    int N;

    string problems[10][2] = {{"11", "A B C D E F G H J L M"},
					   {"9", "A C E F G H I L M"},
					   {"9", "A C E F G H I L M"},
					   {"9", "A B C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A B C F G H L M"}};

    cin >> N;

    cout << problems[N-1][0] << '\n';
    cout << problems[N-1][1];
}