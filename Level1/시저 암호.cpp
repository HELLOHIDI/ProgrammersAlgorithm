#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
   
    for (int i = 0; i < s.size(); i++){
        if (s[i] == ' '){
            answer.push_back(s[i]); 
            continue;
        }
        else if (s[i] >= 97){
            if (s[i] + n <= 122){
               s[i] = s[i] + n; //주어진 숫자 + 갈 숫자가 Z보다 작기 때문에 그냥 더하면 된다 
            }        
               
        else{
        s[i] = s[i] + n - 26;      
            }
    }
        
        else{
            if (s[i] + n <= 90)      
            { 
                s[i] = s[i] + n;
            }
            else
            {
                s[i] = s[i] + n - 26; 
            }
        }
        answer.push_back(s[i]);   
    }

    return answer;
}
