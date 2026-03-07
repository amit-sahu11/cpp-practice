#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> new_matrix;

    int m = matrix.size();
    int n = matrix[0].size();

    int sR = 0, eR = m-1;
    int sC = 0, eC = n-1;

    while(sR <= eR && sC <= eC){

        for(int i = sC; i <= eC; i++){
            new_matrix.push_back(matrix[sR][i]);
        }
        sR++;

        for(int i = sR; i <= eR; i++){
            new_matrix.push_back(matrix[i][eC]);
        }
        eC--;

        if(sR <= eR){
            for(int i = eC; i >= sC; i--){
                new_matrix.push_back(matrix[eR][i]);
            }
            eR--;
        }

        if(sC <= eC){
            for(int i = eR; i >= sR; i--){
                new_matrix.push_back(matrix[i][sC]);
            }
            sC++;
        }
    }

    for(int x : new_matrix){
        cout << x << " ";
    }
}