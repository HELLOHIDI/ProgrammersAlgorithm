#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    for(int i = 0; i < skill_trees.size(); i++){
        bool check = true;
        string temp = "";
        for(int j = 0; j < skill_trees[i].length(); j++){
            for(int k = 0; k < skill.length(); k++){
                  if(skill_trees[i][j] == skill[k]){
                     temp+=skill_trees[i][j];
                }
             }
         }
        for(int l = 0; l < temp.length(); l++){
            if(skill[l] != temp[l]){
                check = false;
                break;
            }
        }
        if(check){answer++;}
     }
    return answer;
}
