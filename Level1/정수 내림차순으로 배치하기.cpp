#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string temp = "";
    vector<int> v;
    while(n > 0){
        v.push_back(n%10);
        n /= 10;
    }
    sort(v.rbegin(),v.rend()); //배운점 : 내림차순 sort(v.rbegin(),rend());
    for(int i = 0; i < v.size(); i++){
        temp += to_string(v[i]);
    }
    answer = stoll(temp);
    return answer;
}
