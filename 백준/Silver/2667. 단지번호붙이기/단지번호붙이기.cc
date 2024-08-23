#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, x;
vector<vector<char>> map;
vector<int> results;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void bfs(int sx, int sy) {
    int count = 1;
    queue<pair<int, int>> q;
    q.push({sx, sy});
    map[sx][sy] = '0';
    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();
        for (int i = 0; i < 4; ++i) {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && map[nx][ny] != '0') {
                map[nx][ny] = '0';
                count++;
                q.push({nx, ny});
            }
        }
    }
    results.push_back(count);
}

int main() {
    // 입력 받기
    cin >> n;
    map.assign(n, vector<char>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> map[i][j];
        }
    }

    // 답 구하기
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (map[i][j] != '0'){
                bfs(i, j);
            }
        }
    }

    // 답 출력
    cout << results.size()<< endl;
    sort(results.begin(), results.end());
    for(int r: results){
        cout << r << endl;
    }
}