#include <iostream>
#include <vector>

using namespace std;

int n, a, b;
vector<pair<int, int>> v;

int main() {
    cin >> n;
    while (n) {
        cin >> a >> b;
        v.push_back({a, b});
        n--;
    }
    for (int i = 0; i < v.size(); i++) {
        pair<int, int> cur = v[i];
        int cnt = 1;
        for (int j = 0; j < v.size(); ++j) {
            if (v[j].first > cur.first && v[j].second > cur.second) {
                cnt++;
            }
        }
        cout << cnt << " ";
    }
}