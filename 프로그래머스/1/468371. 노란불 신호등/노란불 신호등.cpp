#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) 
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) 
{
    return a / gcd(a, b) * b;
}

int solution(vector<vector<int>> signals) 
{
    int n = signals.size();
    int totalCycle = 1;
    
    for (int i = 0; i < n; i++) 
    {
        int G = signals[i][0];
        int Y = signals[i][1];
        int R = signals[i][2];
        
        int cycle = G + Y + R;
        totalCycle = lcm(totalCycle, cycle);
    }

    int G1 = signals[0][0];
    int Y1 = signals[0][1];
    int R1 = signals[0][2];
    int cycle1 = G1 + Y1 + R1;

    for (int base = 0; base < totalCycle; base += cycle1) 
    {
        for (int offset = 0; offset < Y1; offset++) 
        {
            int t = base + G1 + offset + 1;
            
            if (t > totalCycle) break;

            bool allYellow = true;
            
            for (int i = 0; i < n; i++) 
            {
                int G = signals[i][0];
                int Y = signals[i][1];
                int R = signals[i][2];
                
                int cycle = G + Y + R;
                int cur = (t - 1) % cycle;
                
                if (!(G <= cur && cur < G + Y)) 
                {
                    allYellow = false;
                    break;
                }
            }
            
            if (allYellow) 
                return t;
        }
    }
    
    return -1;
}