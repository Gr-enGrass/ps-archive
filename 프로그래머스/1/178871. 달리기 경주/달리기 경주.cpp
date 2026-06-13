#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {

    unordered_map<string,int> um;
    
    int size = players.size();
    for(int i = 0; i < size ;i++)
    {
        um.insert({players[i],i});
    }
    
    for(const string &str : callings)
    {
        string temp;
        int idx = um[str]--;
        um[players[idx-1]]++;
        
        temp = players[idx];
        players[idx] = players[idx-1];
        players[idx-1] = temp;
    }
    
    return players;
}