#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    stringstream ss;
    ss.str(s);

    string num;
    vector<int> numbers;
    while (ss >> num){
        numbers.push_back(stoi(num));
    }

    sort(numbers.begin(), numbers.end());

    string answer = "";
    answer += to_string(numbers.front()) + " " + to_string(numbers.back());
    return answer;
}