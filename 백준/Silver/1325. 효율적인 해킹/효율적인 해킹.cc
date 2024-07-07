#include<iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M;
vector<int> computers[10001];
int results[10001];

int bfs(int start) {
    int check[10001];
    fill_n(check, 10001, 0);
    int result = 0;
    queue<int> q;
    q.push(start);
    check[start] = true;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (int x: computers[cur]) {
            if (!check[x]) {
                result++;
                check[x] = true;
                q.push(x);
            }
        }
    }
    return result;
}


int main() {
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        computers[b].push_back(a);
    }
    for (int i = 1; i <= N; ++i) {
        int result = bfs(i);
        results[i] = result;
    }
    int maxResult = 0;
    for (int i = 1; i <= N; ++i) {
        int result = bfs(i);
        results[i] = result;
        if (result > maxResult) maxResult = result;
    }
    for (int i = 1; i <= N; ++i) {
        if (results[i] == maxResult) cout << i << " ";
    }
}