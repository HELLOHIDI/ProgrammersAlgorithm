#include <string>
#include <vector>
#include <iostream>
#include <cmath>

//소수찾기 다시 공부하기!!1

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int *arr = new int[n]{0, };
    for(int i = 2; i <= sqrt(n); i++){
        for(int j = i; j <= n; j += i){
                if(i!=j){
                    arr[j-1] = 1;
                }
            }
        }
    for(int i = 1; i < n; i++){
        if(arr[i] == 0){
            answer += 1;
        }
    }
    

    return answer;
}
