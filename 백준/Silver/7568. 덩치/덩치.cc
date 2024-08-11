#include <iostream>
#include <vector>

using namespace std;

int n, a, b;
vector<pair<int, int>> v;
vector<int> c;

int main(){
    cin >> n;
    c.assign(n, 1);
    while (n){
        cin >> a >> b;
        v.push_back({a, b});
        n--;
    }
    for(int i = 0; i<v.size(); i++){
        pair<int, int> cur = v[i];
        for (int j = 0; j < v.size(); ++j) {
            // v[j] 보다 v[i] 가 크면 c[j] += 1
            if (v[j].first < cur.first && v[j].second < cur.second){
                c[j] += 1;
            }
        }
    }
    for(int x: c){
        cout << x << " ";
    }
}