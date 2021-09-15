#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n;
    
    for(auto a = lost.begin(); a!= lost.end();a++){
        auto it = find(reserve.begin(), reserve.end(), *a);
        if(it != reserve.end()){
            reserve.erase(it);
            /* erase한 후 반환값은 다음 요소를 가리키는 iterator */
            a = lost.erase(a);
            a--;
        }
    }
    
    

    for(int i = 0; i < lost.size(); i++){
        bool check = false;
        for(int j = 0; j < reserve.size(); j++){
            if(lost[i]-1 == reserve[j] || lost[i]+1 == reserve[j]){
                reserve[j] = -1;
                check = true;
            }
        }
        if(!check){      
            answer -= 1;
        }
    }    

    return answer;
}
