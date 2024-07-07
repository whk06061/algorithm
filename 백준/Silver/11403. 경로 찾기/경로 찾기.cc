#include<iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N;
vector<int> links[101];

int bfs(int start, int end) {
    int check[101];
    fill_n(check, 101, 0);
    queue<int> q;
    q.push(start);
    check[start] = true;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (int x: links[cur]) {
            if (x == end) return 1;
            if (!check[x]) {
                q.push(x);
                check[x] = true;
            }
        }
    }
    return 0;
}


int main() {
    // 초기 입력
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int x;
            cin >> x;
            if (x == 1) {
                links[i].push_back(j);
            }
        }
    }

    // 순회하면서 찾아주기
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            // i 에서 j 로 가는 경로가 있는지
            cout << bfs(i, j) << " ";
        }
        cout << endl;
    }

}