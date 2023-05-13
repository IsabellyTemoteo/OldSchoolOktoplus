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

int n;

int findDegree(int mat[21][21], int ver) {   
    int degree = 0;        
    for (int i = 0; i < n; i++)    
        if (mat[ver][i] == 1)
            degree++;            
    if(mat[ver][ver] == 1)
          degree++;
    return degree;        
}

int main()
{
    cin >> n;
    int mat[21][21] = {0};
    vector<pair<int, int>> degree;
    for (int i = 0; i < n-1; i++) {
        int x, y;
        cin >> x >> y;
        mat[x][y] = 1;
        mat[y][x] = 1;
    }
    for (int i = 1; i <= n; i++) {
        degree.push_back(make_pair(findDegree(mat, i), i));
    }
    sort(degree.rbegin(), degree.rend());
    cout << degree[0].second << endl;
    return 0;
}
