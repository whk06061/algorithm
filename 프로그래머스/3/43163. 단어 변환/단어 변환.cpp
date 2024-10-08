#include <string>
#include <vector>
#include <queue>

using namespace std;

bool word_check(string a, string b) {
    bool same = true;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            if (!same) return false;
            same = false;
        }
    }
    return !same;
}

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    vector<int> visited(words.size(), 0);
    queue<pair<string, int>> q;
    q.push({begin, 0});
    while (!q.empty()) {
        string word = q.front().first;
        int count = q.front().second;
        q.pop();
        for (int i = 0; i < words.size(); ++i) {
            if (word_check(word, words[i])) {
                visited[i] = true;
                if (target == words[i]) return count + 1;
                q.push({words[i], count + 1});
            }
        }
    }
    return answer;
}