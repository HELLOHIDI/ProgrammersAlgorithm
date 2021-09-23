#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> v;
    int num;
    int start = 0;
    string temp = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            temp = s.substr(start,i-start);
            num = stoi(temp);
            v.push_back(num);
            start = i+1;
        }      
    }
    temp = s.substr(start,s.length()-1);
    num = stoi(temp);
    v.push_back(num);
    
    
    
    
    int max = *max_element(v.begin(),v.end());
    int min = *min_element(v.begin(),v.end());
    answer += to_string(min);
    answer += " ";
    answer += to_string(max);
    
    return answer;
}
