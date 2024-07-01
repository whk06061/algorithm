#include<iostream>
#include<vector>

using namespace std;

int main() {
    for (int i = 0; i < 3; ++i) {
        int x = 0; //배
        int y = 0; //등
        for (int j = 0; j < 4; ++j) {
            int a;
            cin >> a;
            if (a == 0) x++;
            if (a == 1) y++;
        }
        switch (x) {
            case 1:
                cout << "A" << endl;
                break;
            case 2:
                cout << "B" << endl;
                break;
            case 3:
                cout << "C" << endl;
                break;
            case 4:
                cout << "D" << endl;
                break;
            default:
                cout << "E" << endl;
                break;
        }
    }
}