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
    int n, q; cin >> n >> q;
    
    ll atual = n*2, anterior = n;
    cout << anterior << " ";
    for(int i = 0; i < q-1; i++){
        cout << atual << " ";

        ll save = atual;
        atual = anterior+atual;
        anterior = save;
    }
    return 0;
}