#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

bool isNumber(const string& s) {
    for (char c : s) {
        if (!isdigit(c)) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    unordered_map<int, string> pb;
    unordered_map<string, int> pb2;
    
    string name;
    for (int i = 1; i <= n; i++) {
        cin >> name;
        pb[i] = name;
        pb2[name] = i;
    }
    
    string check;
    for (int i = 0; i < m; i++) {
        cin >> check;
        if (isNumber(check)) {
            int num = stoi(check);
            cout << pb[num] << "\n";
        } else {
            cout << pb2[check] << "\n";
        }
    }
    
    return 0;
}
