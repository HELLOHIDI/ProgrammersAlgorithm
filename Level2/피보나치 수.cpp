#include <string>
#include <vector>

using namespace std;



int solution(int n) {
    long long int answer = 0;
    if(n == 0){
        answer = 0;
    }else if(n == 1 || n == 2){
        answer = 1;
    }else{
        int temp = 2;
        int a = 0;
        int b = 1;
        while(temp <= n){
            answer = (a + b)%1234567;
            a = b;
            b= answer;
            temp++;
        }
       
    }
    return answer;
}
