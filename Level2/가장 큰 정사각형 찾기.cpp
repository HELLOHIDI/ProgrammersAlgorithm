#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;


int solution(vector<vector<int>> board)
{
    int result = board[0][0];
    for(int i = 1; i < board.size(); i++){
        for(int j = 1; j < board[0].size(); j++){
            if(board[i][j] == 1){
                board[i][j] = min({board[i-1][j-1],board[i-1][j],board[i][j-1]}) + 1;
                result = max(result,board[i][j]);
            }
            
        }
    }
    return result*result;
}


//https://donggoolosori.github.io/2020/12/20/pgmsquare/
