#include<iostream>
#include<vector>

using namespace std;

#define SIZE 5
vector<string> v(SIZE);

int main() {
    // 입력 받기
    for (int i = 0; i < SIZE; ++i) {
        string s;
        cin >> s;
        v[i] = s;
    }

    // 출력하기
    for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (v[j][i]) cout << v[j][i];
        }
    }
}