#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int N = 5; 

bool dfs(vector<vector<int>>& matrix, int i, int j) {
    if (i < 0 || i >= N || j < 0 || j >= N) {
        return false;
    }

    if (i == N - 1 && j == N - 1) {
        return true;
    }

    if (matrix[i][j] == 0) {
        matrix[i][j] = -1;

        if (dfs(matrix, i - 1, j) || dfs(matrix, i + 1, j) || dfs(matrix, i, j - 1) || dfs(matrix, i, j + 1)) {
            return true;
        }

        matrix[i][j] = 0;
    }

    return false;
}

int main() {
    int n;
    cin >> n; 

    while (n--) {
        vector<vector<int>> matrix(N, vector<int>(N));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> matrix[i][j];
            }
        }

        if (dfs(matrix, 0, 0)) {
            cout << "ganhou" << endl;
        } else {
            cout << "perdeu" << endl;
        }
    }

    return 0;
}