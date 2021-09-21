#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

//velog에 정리할만한 문제!

using namespace std;

string solution(vector<string> p, vector<string> c) {
    string answer = "";
    sort(p.begin(),p.end());
    sort(c.begin(),c.end());
    
    
    for(int i = 0; i < p.size(); i++){
        if(p[i] != c[i]){
            return p[i];
        }
    }
}
