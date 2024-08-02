#include <iostream>
#include <vector>

using namespace std;

vector<long> ssum = {0, 1};
int n, idx, w = 1;

int main() {
    while (ssum.back() + w <= 20000000) {
        ssum.push_back(ssum.back() + w);
        w++;
    }

    cin >> n;

    for (int i = 0; i < ssum.size(); ++i) {
        if (n < ssum[i]) {
            idx = i - 1;
            break;
        }
    }

    int d = n - ssum[idx];

    if (idx % 2 == 0) {
        cout << d + 1 << "/" << idx - d << endl;
    } else {
        cout << idx - d << "/" << d + 1 << endl;
    }
}