#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n1, n2, t;
vector<pair<char, int>> ants; // 최종 결과

int main() {
    cin >> n1 >> n2;
    vector<char> tmp1;
    for (int i = 0; i < n1; ++i) {
        char x;
        cin >> x;
        tmp1.push_back(x);
    }
    // 1그룹 역순으로 넣기 & 두 그룹 합치기
    for (int i = n1 - 1; i >= 0; --i) {
        ants.push_back({tmp1[i], 1});
    }
    for (int i = 0; i < n2; ++i) {
        char x;
        cin >> x;
        ants.push_back({x, 2});
    }
    // 뛰어넘기
    cin >> t;
    while (t) {
        t--;
        for (int i = 0; i < n1 + n2 - 1; ++i) {
            if (ants[i].second == 1 && ants[i + 1].second == 2) {
                char tmp2;
                tmp2 = ants[i].first;
                ants[i] = {ants[i + 1].first, 2};
                ants[i + 1] = {tmp2, 1};
                ++i;
            }
        }
    }
    // 답 출력
    for (int i = 0; i < n1 + n2; ++i) {
        cout << ants[i].first;
    }
    cout << endl;
}