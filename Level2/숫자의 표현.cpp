#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int target) {
    int answer = 1;
    float a = 2;  float k = 1; float exk = 1;
    float x = target;
    while(1){
        x = (target - k)/a;
        int realx = (int)(target - k)/a;
        if(x < 1){
            break;
        }else{
            if(x == realx){
            answer++;
        }
            k = a + exk;
            exk = k;
            a++;
        }
        
        
    }
    
    return answer;
}
