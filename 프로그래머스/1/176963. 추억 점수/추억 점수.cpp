#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    unordered_map<string, int>um;
    int size = name.size();
    for(int i = 0;i<size;i++)
    {
        um.insert({name[i],yearning[i]});
    }
    
    for(const auto &a : photo)
    {
        int score = 0;
        for(const string &b : a)
        {
             score += um[b];
        }
        answer.push_back(score);
    }
    return answer;
}