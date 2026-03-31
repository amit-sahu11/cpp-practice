#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            // full row
            for(int j = 0; j < m; j++){
                cout << "#";
            }
        }
        else{
            if((i / 2) % 2 == 0){
                // snake on right
                for(int j = 0; j < m - 1; j++){
                    cout << ".";
                }
                cout << "#";
            }
            else{
                // snake on left
                cout << "#";
                for(int j = 0; j < m - 1; j++){
                    cout << ".";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}