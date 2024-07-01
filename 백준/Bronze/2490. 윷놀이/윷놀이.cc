#include<iostream>

using namespace std;

int main() {
    for (int i = 0; i < 3; ++i) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int sum = a + b + c + d;
        cout << "DCBAE"[sum] << endl;
    }
}