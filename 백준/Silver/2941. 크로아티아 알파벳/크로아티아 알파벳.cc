#include <iostream>
#include <string>

using namespace std;

string alphabet[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
string s;

int main() {

    cin >> s;

    for (int i = 0; i < 8; i++) {
        while (1) {
            int idx = s.find(alphabet[i]);
            if (idx == string::npos) break;
            s.replace(idx, alphabet[i].length(), "#");
        }
    }

    cout << s.length() << endl;
}