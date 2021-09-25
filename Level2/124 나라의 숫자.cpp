#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int n) {
    string answer = "";
    char arr[3] = {'4','1','2'};
    while(1){
        int temp = n%3;
        answer += arr[temp];
        if(temp == 0){
            n = n/3 -1; //정확히 나누어 떨어지면 몫이 하나 더 생기게 되서 빼줘야됨
        }else{
            n = n / 3;    
        }
        if(n < 1){break;}
    }
    reverse(answer.begin(),answer.end());
    
    return answer;
}
