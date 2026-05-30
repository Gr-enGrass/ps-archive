#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0;
    
    int maxHealth = health;
    int size = attacks.back()[0];
    int check = 0;
    int idx = 0;
    for(int i =1;i<=size;i++)
    {
        if(attacks[idx][0]==i)
        {
            check = 0;
            health-=attacks[idx++][1];
            if(health<=0)
                return -1;
        }
        else
        {
            check++;
            health+=bandage[1];
            if(check==bandage[0])
            {
                check = 0;
                health += bandage[2];
            }
        }
        if(maxHealth<health)
            health = maxHealth;
    }
    
    answer = health;
    return answer;
}