#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;


vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    char alpabet[26] = {'a','b','c','d','e','f','g','h','i','j'
                  ,'k','l','m','n','o','p','q','r','s','t',
                 'u','v','w','x','y','z'};
    vector<pair<int,int>> m;
    for(int j = 0; j < strings.size(); j++){
        for(int i = 0; i < 26; i++){
        if(alpabet[i] == strings[j][n]){
            m.push_back(make_pair(i,j));
            }
        }    
    }

    sort(m.begin(),m.end());
    for(int i = 0; i < m.size(); i++){
        for(int j = i+1; j < m.size(); j++){
            if(m[i].first == m[j].first){
                if(strings[m[i].second].compare(strings[m[j].second]) > 0){
                    auto temp = m[i];
                    m[i] = m[j];
                    m[j] = temp;
                }
            }
        }
        }
        for(int i = 0; i < m.size(); i++){
            answer.push_back(strings[m[i].second]);
        }
    
    return answer;
}
