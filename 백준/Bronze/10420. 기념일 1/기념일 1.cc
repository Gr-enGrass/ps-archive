#include <iostream>

using namespace std;

int main()
{
    int year=2014;
    int month=4;
    int date=2;
    
    int n;
    cin >> n;
    n--;
    date+=n;
    
    while(1)
    {
        if(month==2)
        {
            if(year%4==0&&year%100!=0||year%400==0)
            {
                if(date>29)
                {
                    date-=29;
                    month++;
                }
                else
                    break;
            }
            else
            {
                if(date>28)
                {
                    date-=28;
                    month++;
                }
                else
                    break;
            }
        }
        else if(month==4||month==6||month==9||month==11)
        {
            if(date>30)
            {
                date-=30;
                month++;
            }
            else
                break;
        }
        else
        {
            if(date>31)
            {
                date-=31;
                month++;
                if(month>12)
                {
                    year++;
                    month=1;
                }
            }
            else
                break;
        }
    }
    printf("%d-%02d-%02d",year,month,date);
    
}