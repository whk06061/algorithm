#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> routes) {
    int answer = 1;

    sort(routes.begin(), routes.end());
    int focus = routes[0][1];
    for(auto route : routes){
        if (route[1] < focus) focus = route[1];
        else if (route[0] > focus){
            answer ++;
            focus = route[1];
        }
    }

    return answer;
}
