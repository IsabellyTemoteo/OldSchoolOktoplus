/**
 * Henrique Junqueira 
 * Isabelly Temoteo
 * Vinícius Lima
 * CEFET, Leopoldina
*/

#include <bits/stdc++.h>
#define MAXM 1001
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int m, n;
vector<vector<int>> adj(MAXM);
vector<bool> used(MAXM, false);
vector<int> comp;
vector<int> tam;

void dfs(int v) {
    used[v] = true ;
    comp.push_back(v);
    for (int u : adj[v]) {
        if (!used[u])
            dfs(u);
    }
}

void find_comps() {
    for (int v = 0; v < n; ++v) {
        if (!used[v]) {
            comp.clear();
            dfs(v);
            tam.push_back(comp.size());
        }
    }
}

int main()
{   
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    find_comps();
    sort(tam.rbegin(), tam.rend());
    cout << tam.at(0) << endl;
    return 0;
}

