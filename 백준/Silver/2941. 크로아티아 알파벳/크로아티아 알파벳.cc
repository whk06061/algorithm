#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> alphabet[26] = {};
string s;
int answer = 0;
bool found = false;

int main() {
    alphabet['c' - 'a'].push_back("c=");
    alphabet['c' - 'a'].push_back("c-");
    alphabet['d' - 'a'].push_back("dz=");
    alphabet['d' - 'a'].push_back("d-");
    alphabet['l' - 'a'].push_back("lj");
    alphabet['n' - 'a'].push_back("nj");
    alphabet['s' - 'a'].push_back("s=");
    alphabet['z' - 'a'].push_back("z=");

    cin >> s;

    for (int i = 0; i < s.length();) {
        char c = s[i];
        found = false;
        if (!alphabet[c - 'a'].empty()) {
            for (string x: alphabet[c - 'a']) {
                if (s.substr(i, x.length()) == x) {
                    found = true;
                    i += x.length();
                    answer++;
                    break;
                }
            }
        }

        if (!found) {
            answer++;
            i++;
        }

    }

    cout << answer << endl;
}