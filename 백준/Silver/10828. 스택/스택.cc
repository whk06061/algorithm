#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n;
vector<int> stack;

int main() {
    cin >> n;
    cin.ignore();
    while (n) {
        n--;
        string s;
        getline(cin, s);
        if (s == "pop") {
            if (stack.empty()) cout << -1 << endl;
            else {
                cout << stack.back() << endl;
                stack.pop_back();
            }
        } else if (s == "size") {
            cout << stack.size() << endl;
        } else if (s == "empty") {
            cout << stack.empty() << endl;
        } else if (s == "top") {
            if (stack.empty()) cout << -1 << endl;
            else cout << stack.back() << endl;
        } else {
            int number = stoi(s.substr(5));
            stack.push_back(number);
        }
    }
}