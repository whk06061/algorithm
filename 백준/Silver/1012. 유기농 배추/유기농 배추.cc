#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int t, m, n, k, x, y, cnt;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
vector<vector<int>> map;

void bfs(int sx, int sy) {
    cnt++;
    queue<pair<int, int>> q;
    q.push({sx, sy});
    map[sx][sy] = 0;
    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();
        for (int i = 0; i < 4; ++i) {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if (nx >= 0 && nx < m && ny >= 0 && ny < n && map[nx][ny] != 0) {
                q.push({nx, ny});
                map[nx][ny] = 0;
            }
        }
    }
}

int main() {
    cin >> t;
    while (t) {
        cnt = 0;
        cin >> m >> n >> k;
        map.assign(m, vector<int>(n, 0));
        for (int i = 0; i < k; ++i) {
            cin >> x >> y;
            map[x][y] = 1;
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (map[i][j] == 1) bfs(i, j);
            }
        }
        t--;
        cout << cnt << endl;
    }
    return 0;
}