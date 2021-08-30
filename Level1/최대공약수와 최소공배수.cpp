#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int gcd, lcm;
    int big = (n>m) ? n : m;
    int small = (n<m) ? n : m;
    for(int i = small; i > 0; i--){
        if(big%i == 0 && small%i == 0){
            gcd = i;
            lcm = (big/i) * (small/i) * i;
            answer.push_back(gcd);
            answer.push_back(lcm);
            break;
        }
    }
    return answer;
}
