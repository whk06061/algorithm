#include <iostream>
#include <algorithm>

using namespace std;

int n, pre = -1, answer = 0;
int alphabet[26];

bool check(string s) {
    fill_n(alphabet, 26, 0);
    for (char c: s) {
        int charNumber = c - 'a';
        if (alphabet[charNumber] == 0) {
            alphabet[charNumber] = 1;
        } else {
            if (charNumber != pre) return false;
        }
        pre = charNumber;
    }
    return true;
}

int main() {
    cin >> n;
    while (n) {
        string s;
        cin >> s;
        if (check(s)) answer++;
        n--;
    }
    cout << answer << endl;
    return 0;
}