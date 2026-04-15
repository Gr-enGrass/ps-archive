
#include <iostream>

using namespace std;

int main()
{
    int a ,b ,c;
    char z[2];
    char x[2];
    cin >> a >> z >> b >> x >> c;
    int temp1;
    int temp2;
    if(z[0] == '+')
        temp1 = a + b;
    else if(z[0] == '-')
        temp1 = a - b;
    else if(z[0] == '*')
        temp1 = a * b;
    else if(z[0] == '/')
    {
        if(a<0)
            temp1 = (-1 * a) / b * -1;
        else if(b<0)
            temp1 = a / (b * -1) * -1;
        else
            temp1 = a / b;
    }
        
    
    if(x[0] == '+')
        temp1 = temp1 + c;
    else if(x[0] == '-')
        temp1 = temp1 - c;
    else if(x[0] == '*')
        temp1 = temp1 * c;
    else if(x[0] == '/')
    {
        if(temp1<0)
            temp1 = (-1 * temp1) / c * -1;
        else if(c<0)
            temp1 = temp1 / (c * -1) * -1 ;
        else
            temp1 = temp1 / c ;
    }
    
    if(x[0] == '+')
        temp2 = b + c;
    else if(x[0] == '-')
        temp2 = b - c;
    else if(x[0] == '*')
        temp2 = b * c;
    else if(x[0] == '/')
    {
        if(b<0)
            temp2 = (-1 * b) / c * -1;
        else if(c<0)
            temp2 = b / (c * -1) * -1 ;
        else
            temp2 = b / c ;
    }
    
    if(z[0] == '+')
        temp2 = a + temp2;
    else if(z[0] == '-')
        temp2 = a - temp2;
    else if(z[0] == '*')
        temp2 = a * temp2;
    else if(z[0] == '/')
    {
        if(temp2<0)
            temp2 = a / (-1 * temp2) * -1;
        else if(a<0)
            temp2 = (a * -1) / temp2 * -1;
        else
            temp2 = a / temp2;
    }
    
    cout << min(temp1,temp2) << '\n';
    cout << max(temp1,temp2) ;
    return 0;
}