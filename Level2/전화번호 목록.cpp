#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(vector<string> p) {
    bool answer = true;
    for(int i = 0; i < p.size(); i++){
        for(int j = i+1; j < p.size(); j++){
            string jubdo = (p[i].length() < p[j].length()) ? p[i] : p[j];
            string unjubdo = (p[i].length() >= p[j].length()) ? p[i] : p[j];
            int cnt = 0;
            for(int k = 0; k < jubdo.length(); k++){
                if(jubdo[k] == unjubdo[k]){
                    cnt++;
                }else{
                    break;
                }
            }
            if(cnt == jubdo.length()){
                return false;
            }
        }
    }
    return answer;
}
