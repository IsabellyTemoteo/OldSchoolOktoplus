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
    int a, b;
    cin >> a >> b;

    ull matriz [a][b];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cin >> matriz[i][j];
        }
    }

    ull aux [b][a];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            aux[j][i] = matriz[i][j]; 
        }
    }

   for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            cout << aux[i][j] << " ";    
        }
        cout << endl;
   }

    return 0;
}