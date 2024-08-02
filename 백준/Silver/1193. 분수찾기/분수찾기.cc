#include <iostream>
#include <vector>

using namespace std;

vector<int> ssum = {0, 1};
int n, i, w = 1;

int main() {
    while (ssum.back() + w <= 10000000) {
        ssum.push_back(ssum.back() + w);
        w++;
    }

    cin >> n;

    for (i = 0; i < ssum.size(); ++i) {
        if (n < ssum[i]) {
            break;
        }
    }
    int idx = i - 1;
    int d = n - ssum[idx];

    if (idx % 2 == 0) {
        cout << d + 1 << "/" << idx - d << endl;
    } else {
        cout << idx - d << "/" << d + 1 << endl;
    }
}