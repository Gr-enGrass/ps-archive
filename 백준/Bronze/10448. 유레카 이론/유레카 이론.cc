#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a;
        cin >> a;
        bool isThree = false;

        // 첫 번째 삼각수 t1을 계산하는 루프
        for (int i = 1; ; ++i) {
            int t1 = i * (i + 1) / 2;  // t1을 갱신
            if (t1 > a) break;  // t1이 a보다 크면 종료

            // 두 번째 삼각수 t2를 계산하는 루프
            for (int j = 1; ; ++j) {
                int t2 = j * (j + 1) / 2;  // t2를 갱신
                if (t1 + t2 > a) break;  // t1 + t2가 a보다 크면 종료

                // 세 번째 삼각수 t3을 계산하는 루프
                for (int k = 1; ; ++k) {
                    int t3 = k * (k + 1) / 2;  // t3을 갱신
                    if (t1 + t2 + t3 > a) break;  // t1 + t2 + t3가 a보다 크면 종료

                    // t1 + t2 + t3가 a와 같으면 조건 만족
                    if (t1 + t2 + t3 == a) {
                        isThree = true;
                        break;  // 조건을 만족하면 가장 안쪽 루프 종료
                    }
                }

                if (isThree) break;  // 두 번째 루프에서 조건을 만족하면 종료
            }

            if (isThree) break;  // 첫 번째 루프에서 조건을 만족하면 종료
        }

        cout << (isThree ? "1\n" : "0\n");  // 조건을 만족하면 1 출력, 아니면 0 출력
    }

    return 0;
}
