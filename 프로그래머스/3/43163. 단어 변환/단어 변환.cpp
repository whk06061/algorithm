#include <iostream>
#include <vector>
#include <queue>

using namespace std;
vector<bool> check;
int answer = 0;

bool wordCheck(string word1, string word2) {
    bool same = true;
    for (int i = 0; i < word1.length(); ++i) {
        if (word1[i] != word2[i]) {
            if (!same) return false;
            same = false;
        }
    }
    return true;
}

void bfs(string begin, string target, vector<string> words){
    queue<pair<string, int>> q;
    q.push({begin, 0});
    
    while (!q.empty()){
        
        pair<string, int> cur = q.front();
        q.pop();
        
        if (cur.first == target) {
            answer = cur.second;
            return;
        }
        
        for (int i = 0; i < words.size(); ++i) {
            string next = words[i];
            if (check[i]) continue;
            if (wordCheck(cur.first, next)){
                q.push({next, cur.second + 1});
                check[i] = true;
            }
        }
        
    }
}

int solution(string begin, string target, vector<string> words) {
    check.assign(words.size(), false);
    bfs(begin, target, words);
    return answer;
}

int main(){
    int a = solution("hit", "cog", {"hot", "dot", "dog", "lot", "log"});
    cout << a;
}
