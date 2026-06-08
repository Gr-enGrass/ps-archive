#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    
    for(const auto &a : data)
    {
        int idx;
        if(ext=="code")
            idx = 0;
        else if(ext=="date")
            idx = 1;
        else if(ext=="maximum")
            idx = 2;
        else if(ext=="remain")
            idx = 3;
        
        if(a[idx]<val_ext)
            answer.push_back(a);
    }
    
    int idx;
    if(sort_by=="code")
        idx = 0;
    else if(sort_by=="date")
        idx = 1;
    else if(sort_by=="maximum")
        idx = 2;
    else if(sort_by=="remain")
        idx = 3;
    
    sort(answer.begin(),answer.end(),[idx](const vector<int> &a, const vector<int> &b){
        return a[idx] < b[idx];
    });
    
    return answer;
}