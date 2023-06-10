// W.A - Provavelmente por nao tratar posicoes seguras
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int l, c;
    while (cin >> l >> c)
    {
        if (l == 0 and c == 0)
            break;
        char mat[l][c];
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> mat[i][j];
            }
        }

        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (mat[i][j] == 'T')
                {
                    if (mat[i][j - 1] == 'A' && (j-1) >= 0 && j-1 <= l)
                        mat[i][j - 1] = 'T';
                    else if (mat[i][j + 1] == 'A' && (j+1) < l)
                        mat[i][j + 1] = 'T';
                    else if (mat[i - 1][j] == 'A' && (i-1) >= 0)
                        mat[i - 1][j] = 'T';
                    else if (mat[i + 1][j] == 'A' && (i+1) < l)
                        mat[i + 1][j] = 'T';
                }
            }
        }

        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << mat[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
