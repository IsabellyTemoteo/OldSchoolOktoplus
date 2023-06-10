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
    int l, c; cin >> l >> c;
    int x, y; cin >> x >> y;

    x--; 
    y--;

    int matriz [l][c];

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cin >> matriz[i][j];
        }
    }

    int saveX, saveY;
    //visitado = 0;

    queue<int> visitandoX;
    queue<int> visitandoY;
    visitandoX.push(x);
    visitandoY.push(y);

    int visX[4] = {-1,0,1,0}; //cima, direita, baixo, esquerda.
    int visY[4] = {0,1,0,-1};

    while(!visitandoX.empty() && !visitandoY.empty()){
        int n = visitandoX.front();
        int m = visitandoY.front();

        for(int i = 0; i < 4; i++){
            if(n+visX[i] >= 0 && n+visX[i] < l && m+visY[i] >= 0 && m+visY[i] < c)
                if(matriz[n+visX[i]][m+visY[i]] == 1){
                    visitandoX.push(n+visX[i]);
                    visitandoY.push(m+visY[i]);
                }
                else{
                    saveX = n;
                    saveY = m;
                }
        }
    }

    cout << saveX << " " << saveY << endl;

    return 0;
}