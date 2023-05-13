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



void solve(int k, int n);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int k, n; cin >> k >> n;
        solve(k, n);
    }
    return 0;
}

void solve(int k, int n) {
    vector<int> v(0, n);
    for (int i = 0; i < k; i++)
        v.push_back(1);
    v.push_back(k);

    ull aux = 0;
    for (int i = k+1; i < n; i++) {
        for(int c=0, j=i; c<k; c++, j++){
            aux=aux+v[j-k];
        }
        v.push_back(aux);
        aux=0;
    }
    cout<<v[n-1]<<endl;
}

