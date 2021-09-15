#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long temp = num;
    int answer = 0;
    int cnt = 0;
    while(temp != 1 && cnt < 500){
        if(temp%2 == 0){
            temp /= 2;
        }else{
            temp = temp*3 + 1;
        }
        cnt++;
        
    }
    answer = (temp == 1) ? cnt : -1;
    return answer;
}
