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

const int MAXN = 60;
const int MAXC = 200;

int parent[MAXN];
int heights[MAXN];

struct Edge {
    int u, v, w;
    bool operator<(Edge const& other) {
        return w < other.w;
    }
};

vector<Edge> edges;
vector<Edge> mst;

int find(int u) {
    if (parent[u] == u) {
        return u;
    }
    return parent[u] = find(parent[u]);
}

void merge(int u, int v) {
    u = find(u);
    v = find(v);
    if (u != v) {
        if (heights[u] < heights[v]) {
            swap(u, v);
        }
        parent[v] = u;
        if (heights[u] == heights[v]) {
            heights[u]++;
        }
    }
}

int main() {
    int r, c;
    cin >> r >> c;

    for (int i = 1; i <= r; i++) {
        parent[i] = i;
        heights[i] = 0;
    }

    for (int i = 1; i <= c; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }

    sort(edges.begin(), edges.end());

    for (Edge e : edges) {
        if (find(e.u) != find(e.v)) {
            merge(e.u, e.v);
            mst.push_back(e);
        }
    }

    int total_cost = 0;
    for (Edge e : mst) {
        total_cost += e.w;
    }

    cout << total_cost << endl;

    return 0;
}