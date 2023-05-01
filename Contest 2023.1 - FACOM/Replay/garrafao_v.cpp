#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

bool matriz(int mat[5][5], int i, int j, bool visited[5][5]);

int main()
{
    int n;
    int mat[5][5];
    for(int x=0; x<n; x++){
        for(int i=0; i<5;i++){
            for(int j=0; j<5; j++){
                cin>>mat[i][j];
            }
        }
        bool visited[5][5] = {{false}};
        matriz(mat, 0, 0, visited);
    }    
    return 0;
}
bool matriz(int mat[5][5], int i, int j, bool visited[5][5]){
    visited[i][j] = true; 
    if (i == 4 && j == 4) { 
        cout << "ganhou" << endl;
        return true;
    }
    if (i > 0 && mat[i - 1][j] == 0 && !visited[i - 1][j]) {
        matriz(mat, i - 1, j, visited);
    }

    if (i < 4 && mat[i + 1][j] == 0 && !visited[i + 1][j]) {
        matriz(mat, i + 1, j, visited);
    }
    
    if (j > 0 && mat[i][j - 1] == 0 && !visited[i][j - 1]) {
        matriz(mat, i, j - 1, visited);
    }
    
    if (j < 4 && mat[i][j + 1] == 0 && !visited[i][j + 1]) {
        matriz(mat, i, j + 1, visited);
    }
    if(visited[i][j + 1] && visited[i][j - 1] && visited[i + 1][j]&&visited[i - 1][j]){
        cout<<"perdeu\n";
    }
}

