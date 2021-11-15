#include <iostream>
using namespace std;

int solution(int n)
{   
    int ans = 0;
    while(1){
        if(n%2 == 1){
            n -= 1;
            ans++;
        }
        if(n==0){
            break;
        }
        n /= 2;
    }
    
    return ans;
}
