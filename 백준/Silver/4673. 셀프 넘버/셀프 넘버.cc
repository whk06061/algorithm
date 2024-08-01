#include <iostream>
#include <string>

using namespace std;
int n[10002];

int calculate(string s) {
    int sum = stoi(s);
    for (char c: s) {
        sum += c - '0';
    }
    return sum;
}

int main() {
    for (int i = 1; i <= 10000; ++i) {
        n[calculate(to_string(i))] = 1;
    }
    for (int i = 1; i <= 10000; ++i) {
        if (n[i] == 0) cout << i << endl;
    }
}