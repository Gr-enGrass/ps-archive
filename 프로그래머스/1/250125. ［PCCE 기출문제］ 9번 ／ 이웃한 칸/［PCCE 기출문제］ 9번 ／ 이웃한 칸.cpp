#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    
    int dh[4] = {-1,1,0,0};
    int dw[4] = {0,0,-1,1};
    
    int max_h = board.size()-1;
    int max_w = board[0].size()-1;
    
    string check = board[h][w];
    for(int i =0;i<4;i++)
    {
        int ch = h+dh[i];
        int cw = w+dw[i];
        
        if(ch<0||ch>max_h||cw<0||cw>max_w)
            continue;
        if(board[ch][cw]==check)
            answer++;
    }
    
    return answer;
}