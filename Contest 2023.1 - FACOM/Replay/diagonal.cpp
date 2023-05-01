#include <bits/stdc++.h>
#define MAX 101

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void DiagonalSums(int mat[MAX][MAX], int n);
int mat[MAX][MAX] = {0};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    DiagonalSums(mat, n);
    return 0;
}

void DiagonalSums(int mat[MAX][MAX], int n) {
    int principal = 0, secondary = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                principal += mat[i][j];
            if ((i + j) == (n - 1))
                secondary += mat[i][j];
        }
    }
    cout << abs(principal - secondary) << endl;
}
