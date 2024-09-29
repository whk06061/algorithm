#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <cmath>

using namespace std;

int time_diff(string in, string out) {
    int h1 = stoi(in.substr(0, 2));
    int m1 = stoi(in.substr(3, 2));
    int h2 = stoi(out.substr(0, 2));
    int m2 = stoi(out.substr(3, 2));

    int diff = (h2 - h1) * 60 + m2 - m1;

    return diff;
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string, vector<string>> m;

    stringstream stream;

    for (auto record: records) {
        stream.str(record);
        string time, number, status;
        
        stream >> time >> number >> status;
        stream.clear();

        m[number].push_back(time);
    }

    for (auto it: m) {
        vector<string> time_info = it.second;
        if (time_info.size() % 2 == 1)
            time_info.push_back("23:59");

        int total = 0;
        for (int i = 0; i < time_info.size() - 1; i += 2) {
            total += time_diff(time_info[i], time_info[i + 1]);
        }

        int price = fees[1];

        if (total > fees[0]) {
            price += ceil((total - fees[0]) / (double) fees[2]) * fees[3];
        }

        answer.push_back(price);
    }
    
    return answer;
}