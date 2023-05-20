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

void largura(int start, vector<int> lst[]);
void profundidade(vector<int> lst[], int u);

int main(){
    string s;
    queue<int> fila;
    vector<int> lst[105];
    
    while(getline(cin >> ws, s)){
        int x, y;
        string saveOne =  "", saveTwo = "";
        bool ok = false;

        for(int i = 0; i < s.size(); i++){
            if(s[i] != ',' && ok == false)
                saveOne += s[i];
            else {
                ok = true;
                if(s[i] == ',' || s[i] == ' ')
                    continue;
                else saveTwo += s[i];
            }
            
        }

        x = stoi(saveOne);
        y =  stoi(saveTwo);
        fila.push(x);

        lst[x].push_back(y);
        lst[y].push_back(x);
        
    }

    largura(fila.front(), lst);
    profundidade(lst, 0);

    return 0;
}

void largura(int start, vector<int> lst[]) {
    vector<int> visited(105, 0);
    queue<int> q;
    q.push(start);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        if (!visited[u]) {
            visited[u] = 1;
            cout << u << " "; 
            for (int i = 0; i < lst[u].size(); i++) {
                int v = lst[u][i];
                if (!visited[v]) {
                    q.push(v);
                }
            }
        }
    }
    cout << endl;
}


void profundidade(vector<int> lst[], int u) {
    vector<bool> visitados(105, false);
    stack<int> s;
    s.push(u);
    while (!s.empty()) {
        int u = s.top();
        s.pop();
        if (!visitados[u]) {
            visitados[u] = 1;
            cout << u << " ";
            for (int i = lst[u].size() - 1; i >= 0; i--){ 
                int v = lst[u][i];
                if (!visitados[v]) {
                    s.push(v);
                }
            }
        }
    }
    cout << endl;

}
