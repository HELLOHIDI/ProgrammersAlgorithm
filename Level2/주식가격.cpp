#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    for(int i = 0; i < prices.size()-1; i++){
        int second = 0;
        for(int j = i+1; j < prices.size(); j++){
            if(prices[j] < prices[i]){
                second++;
                break;
            }else{
                second++;
            }
        }
        answer.push_back(second);
    }
    answer.push_back(0);
    return answer;
}
