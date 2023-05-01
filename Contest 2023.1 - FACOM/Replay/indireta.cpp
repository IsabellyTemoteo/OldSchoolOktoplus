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
#define N 10010

int n, m, mat[N][N], dist[N][N];
int dx[4] = {1,-1,0,0}, dy[4] = {0,0,1,-1};

int main(){
	cin >> n >> m;
	int x_ini, y_ini;
	int x_fim, y_fim;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++){
			cin>>mat[i][j];
			if(mat[i][j] == 2){
				x_ini = i;
				y_ini = j;
			}
			if(mat[i][j] == 3){
				x_fim = i;
				y_fim = j;
			}
		}

	queue<pair<int, int> > fila;
	fila.push({x_ini, y_ini});
	dist[x_ini][y_ini] = 1;
	while(!fila.empty()){
		int x = fila.front().first, y = fila.front().second;
		fila.pop();
		for(int i = 0; i < 4; i++){
			int a = x + dx[i], b = y + dy[i];
			if(a <= 0 or b <= 0 or a > n or b > m or dist[a][b] or mat[a][b] == 0) continue;
			dist[a][b] = dist[x][y] + 1;
			fila.push({a, b});
		}
	}

	cout << dist[x_fim][y_fim] << endl;
}