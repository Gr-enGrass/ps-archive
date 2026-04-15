#include <iostream>
using namespace std;

int n;
int cnt = 0;

void solve(int cols, int diag1, int diag2) {
    if (cols == (1 << n) - 1) 
    { // 모든 퀸 배치 완료
        cnt++;
        return;
    }

    // 현재 행에서 놓을 수 있는 위치 계산 ,상위비트 배제
    int available = ~(cols | diag1 | diag2) & ((1 << n) - 1);

    while (available) 
    {
        int pos = available & -available; // 가장 오른쪽 1비트 선택
        available -= pos;

        // 퀸 놓고 재귀
        solve(cols | pos, (diag1 | pos) << 1, (diag2 | pos) >> 1);
    }
}

int main() {
    cin >> n;
    solve(0, 0, 0); // 초기값
    cout << cnt << endl;
    return 0;
}