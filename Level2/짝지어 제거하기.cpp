#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(string s)
{   
    vector<char> v;
    v.push_back(s[0]);
    for(int i = 1; i < s.length(); i++){
        if(s[i] != v.back()){
            v.push_back(s[i]);
        }else{
            v.pop_back();
        }
    }
    int answer = (v.size() == 0) ? 1 : 0; 
    return answer;
}
