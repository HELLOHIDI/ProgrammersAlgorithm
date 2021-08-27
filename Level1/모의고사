#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {

    vector<int> answer = {0,0,0};
    vector<int> result;
    vector<int> first = {1,2,3,4,5}; //5
    vector<int> second = {2,1,2,3,2,4,2,5}; //8
    vector<int> third = {3,3,1,1,2,2,4,4,5,5}; //10
    for(int i = 0; i < answers.size(); i++){
        if(first[i%5] == answers[i]){
            answer[0]++;
        }if(second[i%8] == answers[i]){
            answer[1]++;
        }if(third[i%10] == answers[i]){
            answer[2]++;
        }
    }
    int max = *max_element(answer.begin(),answer.end());
    for(int i = 0; i < answer.size(); i++){
        if(answer[i] == max){
            result.push_back(i+1);
        }
    }
    return result;
}
