#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    int check = 0;
    for(int i = 0; i < s.length(); i++){
        char temp = s[i];
        if(temp == ' '){
            check = 0;
        }else{
            if(check%2 == 0){
                temp = toupper(s[i]);
                check++;
            }else{
                temp = tolower(s[i]);
                check++;
            }
        }
        answer += temp;
        
    }
    return answer;
}
