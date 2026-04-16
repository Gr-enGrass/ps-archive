#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int input;
    vector<int> nums(n);
    int sum = 0;

    // 입력과 합 계산
    for (int i = 0; i < n; i++) {
        cin >> input;
        nums[i] = input;
        sum += input;
    }

    // 평균 계산
    int total = round(sum / double(n));
    cout << total << "\n";

    // 중앙값 계산
    sort(nums.begin(), nums.end());
    cout << nums[n / 2] << "\n";

    // 최빈값 계산
    map<int, int> check;
    for (auto const& it : nums) {
        check[it]++;
    }

    int mode = 0;
    int mode_cnt = 0;
    vector<int> modes;  // 최빈값을 저장할 벡터

    // 최빈값 구하기
    for (auto const& it : check) {
        if (it.second > mode_cnt) {
            mode_cnt = it.second;
            modes.clear();  // 새로운 최빈값 발견 시 초기화
            modes.push_back(it.first);
        } else if (it.second == mode_cnt) {
            modes.push_back(it.first);  // 같은 빈도수의 값 추가
        }
    }

    // 최빈값이 여러 개인 경우 두 번째 최빈값을 출력
    if (modes.size() > 1) {
        sort(modes.begin(), modes.end());  // 여러 최빈값이 있을 경우 오름차순으로 정렬
        cout << modes[1] << "\n";  // 두 번째로 많이 나온 최빈값 출력
    } else {
        cout << modes[0] << "\n";  // 최빈값이 하나인 경우
    }

    // 범위 출력 (최댓값 - 최솟값)
    cout << nums[n - 1] - nums[0] << "\n";

    return 0;
}
