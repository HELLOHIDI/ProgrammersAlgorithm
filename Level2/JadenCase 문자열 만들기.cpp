#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int start = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ' || i == s.length()-1){
            string temp = "";
            string sub = s.substr(start,i-start+1);
            cout << sub << endl;
            if(97 <= (int)sub[0] && (int)sub[0] <= 122){
                temp += (char)((int)sub[0]-32);
            }else{
                temp += sub[0];
            } 
            for(int j = 1; j < sub.length(); j++){
                if(65 <= (int)sub[j] && (int)sub[j] <= 90){
                    temp += (char)((int)sub[j]+32);
                }else{
                    temp += sub[j];
                }
            }
            answer += temp;
            start = i + 1;
        }
    }
    
    return answer;
}
