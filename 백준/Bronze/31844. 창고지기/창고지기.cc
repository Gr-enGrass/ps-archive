
#include <iostream>

using namespace std;

int main()
{
    char arr[11];
    for(int i =0;i<10;i++)
    {
        cin >>arr[i];
    }

    int robot_idx,box_idx,flag_idx;
    
    for(int i =0;i<10;i++)
    {
        if(arr[i]=='@')
            robot_idx=i;
        if(arr[i]=='#')
            box_idx=i;
        if(arr[i]=='!')
            flag_idx=i;
    }
    int result;
    if(robot_idx<box_idx&&box_idx<flag_idx)
    {
        result = flag_idx - robot_idx -1;
    }
    else if(flag_idx<box_idx&&box_idx<robot_idx)
    {
        result = robot_idx - flag_idx -1;
    }
    else
    {
        result = -1;
    }
    cout << result;
    return 0;
}