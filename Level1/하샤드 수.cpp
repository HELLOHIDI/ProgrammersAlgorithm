#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int tempx = x;
    while(tempx > 0){
        sum += tempx%10;
        tempx /= 10;
    }
    
    answer = (x%sum == 0) ? true : false;
    return answer;
}
