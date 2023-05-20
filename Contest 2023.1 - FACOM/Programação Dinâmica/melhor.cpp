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
    int m,v;

    while(true){
        cin >> m >> v; 
        int bola = 0, sum = 0, aux = 0, saveV = v;
        if(v == 0 && m == 0) return 0;

        while(v != 0){ 
            if(sum == v){ 
                aux++;  
                if(m == bola) break;
                if(aux == v){
                    v--;
                    aux = 0;
                }
                sum = 0;
            }
            bola++;
            sum++;
        }

        if(bola == m) cout << "1" << endl;
        else cout << "0" << endl;
    }

    return 0;
}
