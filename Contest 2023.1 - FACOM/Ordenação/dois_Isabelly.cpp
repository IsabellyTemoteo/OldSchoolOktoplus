#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;

    if(n == 1){cout << 1 << endl; return 0;}

    queue<int> pessoas;
    queue<int> aux;
    for(int i = 1; i <= n; i++)
        pessoas.push(i);
    

    int sum = 0;
    int fila = 1;

    while(!pessoas.empty() || !aux.empty()){
        switch (fila){
        case 1:
            if(sum == 0){
                aux.push(pessoas.front());
                pessoas.pop();
                sum++;
            }
            else{
                cout << pessoas.front() << " ";
                pessoas.pop();
                sum--;
            }
            break;
        
        case 0:
            if(sum == 0){
                pessoas.push(aux.front());
                aux.pop();
                sum++;
            }
            else{
                cout << aux.front() << " ";
                aux.pop();
                sum--;
            }

            break;
        }

        if(pessoas.empty())fila = 0;
        if(aux.empty()) fila = 1;
    }

    
    return 0;
}

