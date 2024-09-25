#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
#include <map>
#include <string>
#include <cmath>

using namespace std;

int defaultTime, defaultFee, timeUnit, feeUnit;

vector<string> split(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }

    return answer;
}

int calculateCarFees(vector<string> inOut) {
    int parkTime = 0;
    int fee = 0;
    for (int i = 0; i < inOut.size(); i += 2) {
        vector<string> in = split(inOut[i], ':');
        int inMinutes = stoi(in[0]) * 60 + stoi(in[1]);

        vector<string> out = split(inOut[i + 1], ':');
        int outMinutes = stoi(out[0]) * 60 + stoi(out[1]);

        parkTime += outMinutes - inMinutes;
    }

    if (parkTime > defaultTime) {
        fee += defaultFee + int(ceil(float(parkTime - defaultTime) / float(timeUnit))) * feeUnit;
    }else{
        fee += defaultFee;
    }

    return fee;
}

map<int, vector<string>> calculateCarInoutInfo(vector<string> records) {
    map<int, vector<string>> carsInoutInfo;
    // 차량의 in, out 시간을 저장
    for (string record: records) {

        vector<string> splitRecord = split(record, ' ');

        string time = splitRecord[0];
        int car = stoi(splitRecord[1]);

        carsInoutInfo[car].push_back(time);
    }
    for (auto carInoutInfo: carsInoutInfo) {
        int car = carInoutInfo.first;
        vector<string> carInout = carInoutInfo.second;
        if (carInout.size() % 2 != 0) {
            carsInoutInfo[car].push_back("23:59");
        }
    }
    return carsInoutInfo;
}

map<int, int> calculateFees(vector<string> records) {
    // calculateTimes 호출해서 차량의 요금 carsFees에 저장
    map<int, int> carsFees;

    for (auto carInputInfo: calculateCarInoutInfo(records)) {
        int car = carInputInfo.first;
        vector<string> carInout = carInputInfo.second;
        carsFees[car] = calculateCarFees(carInout);
    }

    return carsFees;
}

vector<int> solution(vector<int> fees, vector<string> records) {
    defaultTime = fees[0];
    defaultFee = fees[1];
    timeUnit = fees[2];
    feeUnit = fees[3];
    map<int, int> carsFees = calculateFees(records);
    vector<int> answer;
    for (auto carFee: carsFees) {
        answer.push_back(carFee.second);
    }
    return answer;
}