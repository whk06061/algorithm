#include<vector>
#include<queue>
#include <cstring>
using namespace std;

int solution(vector<vector<int> > maps) {
    int n = maps.size(); int m = maps[0].size();
    int distance[n][m];
    memset(distance, -1, sizeof(distance));

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    queue<pair<int, int>> q;
    q.push({0, 0});
    distance[0][0] = 1;

    while (!q.empty()) {
        pair<int, int> cur = q.front(); q.pop();
        int x = cur.first;
        int y = cur.second;
        if (x == n-1 && y == m-1) return distance[x][y];
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx > -1 && nx < n && ny > -1 && ny < m && maps[nx][ny] == 1 && distance[nx][ny] == -1) {
                distance[nx][ny] = distance[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    return -1;
}