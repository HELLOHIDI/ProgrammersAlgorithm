#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = citations.size();
    while(1){
        int high = 0;
        for(int i = 0; i < citations.size(); i++){
            if(citations[i] >= answer){
                high++;
            }
        }
        if(high >= answer && citations.size()-high <= answer){
            break;
        }else{
            answer--;
        }
    }
    return answer;
}
