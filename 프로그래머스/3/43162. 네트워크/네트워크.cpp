#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> v;
vector<int> visited;

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (int x: v[cur]) {
            if (!visited[x]) {
                visited[x] = true;
                q.push(x);
            }
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    v.assign(n, vector<int>());
    visited.assign(n, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && computers[i][j]) {
                v[i].push_back(j);
                v[j].push_back(i);
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            answer++;
            bfs(i);
        }
    }

    return answer;
}