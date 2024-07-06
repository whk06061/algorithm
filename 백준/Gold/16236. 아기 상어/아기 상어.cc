#include<iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;

int board[22][22];
int check[22][22]; // 물고기로부터 얼마나 떨어져 있는지 기록
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int seconds = 0, babySize = 2, N, x, y;
int eatFish = 0;

int main() {
    // 문제 입력
    cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 9) {
                x = i;
                y = j;
            }
        }
    }

    while (1){
        // check 배열 초기화
        for (int i = 0; i <= N; ++i) {
            for (int j = 0; j <= N; ++j) {
                check[i][j] = -1;
            }
        }
        check[x][y] = 0;
        // 아기 상어의 위치를 0으로 바꿔줌
        board[x][y] = 0;
        // 아기 상어의 시작 위치
        queue<pair<int, int>> q;
        // 아기 상어가 먹을 수 있는 물고기의 좌표
        vector<pair<int, int>> fish;
        if (eatFish >= babySize) {
            eatFish -= babySize;
            babySize++;
        }
        q.emplace(x, y);

        // bfs
        while (!q.empty()){
            auto cur = q.front();
            q.pop();
            for (int i = 0; i < 4; ++i) {
                int nx = cur.first + dx[i];
                int ny = cur.second + dy[i];
                if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                if (check[nx][ny] != -1) continue;
                if (board[nx][ny] > babySize) continue;
                else if (board[nx][ny] == babySize || board[nx][ny] == 0){
                    // 지나갈 수 있으므로 체크 배열에 거리를 기록
                    check[nx][ny] = check[cur.first][cur.second] + 1;
                    q.emplace(nx, ny);
                } else if (board[nx][ny] < babySize && board[nx][ny] >= 1){
                    check[nx][ny] = check[cur.first][cur.second] + 1;
                    fish.emplace_back(nx, ny);
                    q.emplace(nx, ny);
                }
            }
        }

        if (fish.size() == 0){
            cout << seconds << "\n";
            return 0;
        } else if (fish.size() == 1){
            x = fish[0].first;
            y = fish[0].second;
            board[x][y] = 0;
            eatFish++;
            seconds += check[x][y];
        }else {
            int minDist = 1e5;
            for (auto x : fish) {
                minDist = min(minDist, check[x.first][x.second]);
            }
            vector<pair<int, int>> minFish;
            for (auto& x : fish) {
                if (minDist == check[x.first][x.second]) {
                    minFish.emplace_back(x.first, x.second );
                }
            }
            if (minFish.size() == 1) {
                x = minFish[0].first;
                y = minFish[0].second;
                board[x][y] = 0;
                seconds += check[x][y];
                eatFish++;
            }
            else {
                sort(minFish.begin(), minFish.end());
                x = minFish[0].first;
                y = minFish[0].second;
                seconds += check[x][y];
                board[x][y] = 0;
                eatFish++;
            }
        }
    }
}