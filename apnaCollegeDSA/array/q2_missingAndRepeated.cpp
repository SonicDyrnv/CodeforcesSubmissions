#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> foundedElements((n*n)+1,0);
        vector<int> answerVector(2);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                foundedElements[grid[i][j]]++;
            }
        }
        for(int i=0; i<=(n*n); i++){
            if(foundedElements[i]==2){
                answerVector[0]=i;
            }else if(foundedElements[i]==0){
                answerVector[1]=i;
            }
        }
        return answerVector;
    }
};