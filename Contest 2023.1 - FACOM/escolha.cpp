#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int d,x; ull c;
        cin >> d >> x >> c;
        double sum = 1;
        for(int i = 1; i <= x; i++)
            sum = sum * (d - x + i) / i;
        if (ull(sum) < c)
            cout << "Existem menos combinacoes!" << endl;
        else if (ull(sum) == c)
            cout << "Harry estah correto!" << endl;
        else
            cout << "Existem mais combinacoes!" << endl;
    }
    return 0;
}