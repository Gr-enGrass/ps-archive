
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string,string> a;
    a.insert(make_pair("Algorithm","204"));
    a.insert(make_pair("DataAnalysis","207"));
    a.insert(make_pair("ArtificialIntelligence","302"));
    a.insert(make_pair("CyberSecurity","B101"));
    a.insert(make_pair("Network","303"));
    a.insert(make_pair("Startup","501"));
    a.insert(make_pair("TestStrategy","105"));
    int n;
    cin >> n;
    while(n--)
    {
        string str;
        cin >> str;
        cout << a[str] << '\n';
    }
    return 0;
}