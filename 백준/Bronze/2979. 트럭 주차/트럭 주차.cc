#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ts1, te1, ts2, te2, ts3, te3;
    cin >> ts1 >> te1 >> ts2 >> te2 >> ts3 >> te3;

    int maxlen = max({te1, te2, te3});

    vector<bool> stay1(maxlen, false);
    vector<bool> stay2(maxlen, false);
    vector<bool> stay3(maxlen, false);

    fill(stay1.begin() + ts1 - 1, stay1.begin() + te1 - 1, true);
    fill(stay2.begin() + ts2 - 1, stay2.begin() + te2 - 1, true);
    fill(stay3.begin() + ts3 - 1, stay3.begin() + te3 - 1, true);

    int result = 0;
    for (int i = 0; i < maxlen; i++)
    {
        int cnt = stay1[i] + stay2[i] + stay3[i];
        if (cnt == 1) result += a;
        else if (cnt == 2) result += 2 * b;
        else if (cnt == 3) result += 3 * c;
    }

    cout << result;
    return 0;
}
