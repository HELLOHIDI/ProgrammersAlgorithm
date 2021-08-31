#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    vector<pair<int,char>> v;
    for(int i = 0; i < s.length(); i++){
        int temp = s[i];
        v.push_back(make_pair(temp,s[i]));
    }
    sort(v.rbegin(),v.rend());
    for(int i = 0; i < v.size(); i++){
        answer += v[i].second;
    }
    return answer;
}
