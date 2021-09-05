#include <string>
#include <vector>
#include <iostream>

//2차원 벡터 push_back하는 법과 선언 공부하기


using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer(arr1.size());
    for(int i = 0; i < arr1.size(); i++){
        for(int j = 0; j < arr1[i].size(); j++){
            answer[i].push_back(arr1[i][j] + arr2[i][j]);
        }
        cout << endl;
    }
    return answer;
}
