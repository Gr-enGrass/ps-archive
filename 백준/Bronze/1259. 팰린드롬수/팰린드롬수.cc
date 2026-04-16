#include <iostream>
#include <cstring>
#include <regex>
using namespace std;

int main()
{
    int temp;
    cin >> temp;

    while (temp != 0)
    {
        if (temp > 0 && temp <= 9)
        {
            cout << "yes\n";
        }
        else
        {
            string num = to_string(temp);
            int size = num.length();
            int cnt = size / 2;
            bool is_palindrome = true;

            for (int i = 0; i < cnt; i++)
            {
                if (num[i] != num[size - 1 - i])  // size---1 -> size - 1 - i로 수정
                {
                    is_palindrome = false;
                    break;
                }
            }

            if (is_palindrome)
            {
                cout << "yes\n";
            }
            else
            {
                cout << "no\n";
            }
        }

        cin >> temp;
    }

    return 0;
}
