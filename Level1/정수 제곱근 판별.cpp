#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = (sqrt(n) == (int)sqrt(n)) ?  pow(sqrt(n)+1,2) : -1;
    return answer;
}
