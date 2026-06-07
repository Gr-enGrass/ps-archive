#include <string>
#include <vector>

using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    
    int video_len_sec = (((video_len[0]-'0')*10)+(video_len[1]-'0'))*60+(video_len[3]-'0')*10+(video_len[4]-'0');
    int pos_sec = (((pos[0]-'0')*10)+(pos[1]-'0'))*60+(pos[3]-'0')*10+(pos[4]-'0');
    int op_start_sec = (((op_start[0]-'0')*10)+(op_start[1]-'0'))*60+(op_start[3]-'0')*10+(op_start[4]-'0');
    int op_end_sec = (((op_end[0]-'0')*10)+(op_end[1]-'0'))*60+(op_end[3]-'0')*10+(op_end[4]-'0');
    
    if(pos_sec >= op_start_sec && op_end_sec > pos_sec)
    {
        pos_sec = op_end_sec;
    }
    
    for(const string &str : commands)
    {
        if(str=="prev")
        {
            pos_sec -= 10;
            if(pos_sec < 0)
            {
                pos_sec = 0;
            }
            if(pos_sec >= op_start_sec && op_end_sec > pos_sec)
            {
                pos_sec = op_end_sec;
            }
        }
        else if(str=="next")
        {
            pos_sec += 10;
            if(pos_sec > video_len_sec)
            {
                pos_sec = video_len_sec;
            }
            if(pos_sec >= op_start_sec && op_end_sec > pos_sec)
            {
                pos_sec = op_end_sec;
            }
        }
    }
    
    answer += (to_string(pos_sec/60).length() == 1 ? '0' + to_string(pos_sec/60) : to_string(pos_sec/60));
    answer += ':';
    answer += (to_string(pos_sec%60).length() == 1 ? '0' + to_string(pos_sec%60) : to_string(pos_sec%60));
    return answer;
}