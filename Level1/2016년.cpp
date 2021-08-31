#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int a, int b) {
    string answer = "";
    string yolil[7] = {"THU","FRI","SAT","SUN","MON","TUE","WED"};
    int month[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int day = 0;
    for(int i = 0; i < a-1; i++){
        day += month[i];
    }
    day += b;
    day = day%7;
    answer = yolil[day];
    return answer;
}
