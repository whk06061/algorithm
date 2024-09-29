#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    vector<char> v;

    for(auto c: s){
        if (v.empty()){
            v.push_back(c);
        }else{
            if (v.back() == '(' && c == ')')
                v.pop_back();
            else
                v.push_back(c);
        }
    }
    answer = v.empty();

    return answer;
}