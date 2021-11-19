#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int stock, vector<int> dates, vector<int> supplies, int k) {
    int answer = 0;
    priority_queue<int> pq;
    int day = 0; int idx = 0;
    while(day < k){
        if(day == dates[idx]){
            pq.push(supplies[idx]);
            idx++;
        }
        if(stock == 1){
            stock += pq.top();
            pq.pop();
            answer++;
        }
        day++;
        stock--;
    }
    return answer;
}
