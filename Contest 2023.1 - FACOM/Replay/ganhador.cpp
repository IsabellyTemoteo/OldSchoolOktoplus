#include <bits/stdc++.h>
#define row 11
#define col 11

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

bool isPathPresent(int arr[row][col], int n) {
   arr[0][0] = -1;
   for (int i = 1; i < n; i++)
      if (arr[i][0] != 1)
         arr[i][0] = arr[i - 1][0];
   for (int j = 1; j < n; j++)
      if (arr[0][j] != 1)
         arr[0][j] = arr[0][j - 1];
   for (int i = 1; i < n; i++)
      for (int j = 1; j < n; j++)
         if (arr[i][j] != 1)
            arr[i][j] = min(arr[i][j - 1], arr[i - 1][j]);
   return (arr[n - 1][n - 1] == -1);
}

int mat[row][col] = {0};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x; cin >> x;
    for (int i = 0; i < x; i++) {
        int n; cin >> n;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cin >> mat[j][k];
            }
        }
        cout << (isPathPresent(mat, n) ? 1 : 0) << endl;
        mat[row][col] = {0};
    }
    return 0;
}
