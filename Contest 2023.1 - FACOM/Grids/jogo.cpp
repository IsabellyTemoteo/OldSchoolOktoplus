/**
 * Henrique Junqueira 
 * Isabelly Temoteo
 * Vinícius Lima
 * CEFET, Leopoldina
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    int n; cin >> n;
    ull matriz [n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
          cin >> matriz[i][j];
        }
    }

    ull sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == (n-1)-i){
                if((matriz[i][j])%2 != 0){
                    sum += matriz[i][j];
                }
            }
        }
    }

    cout << sum << endl;

    return 0;
}