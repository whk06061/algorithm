#include <iostream>
#include <vector>

using namespace std;

int t;
vector<int> aReward = {500, 300, 200, 50, 30, 10};
vector<int> aPeople = {1, 3, 6, 10, 15, 21};
vector<int> bReward = {512, 256, 128, 64, 32};
vector<int> bPeople = {1, 3, 7, 15, 31};

int main() {
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int x, y, total = 0;
        cin >> x >> y;
        if (x != 0) {
            for (int j = 0; j < 6; ++j) {
                if (x <= aPeople[j]) {
                    total += aReward[j];
                    break;
                }
            }
        }
        if (y != 0) {
            for (int j = 0; j < 5; ++j) {
                if (y <= bPeople[j]) {
                    total += bReward[j];
                    break;
                }
            }
        }

        cout << total * 10000 << endl;

    }
    return 0;
}