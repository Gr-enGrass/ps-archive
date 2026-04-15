
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    //빨간색: 620nm 이상 780nm 이하
    //주황색: 590nm 이상 620nm 미만
    //노란색: 570nm 이상 590nm 미만
    //초록색: 495nm 이상 570nm 미만
    //파란색: 450nm 이상 495nm 미만
    //남색: 425nm 이상 450nm 미만
    //보라색: 380nm 이상 425nm 미만
    if(n>=620)
        cout << "Red";
    else if(n>=590)
        cout << "Orange";
    else if(n>=570)
        cout << "Yellow";
    else if(n>=495)
        cout << "Green";
    else if(n>=450)
        cout << "Blue";
    else if(n>=425)
        cout << "Indigo";
    else
        cout << "Violet";
    return 0;
}