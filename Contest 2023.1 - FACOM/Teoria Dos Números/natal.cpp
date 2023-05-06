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

void solve(ull p);

int main()
{
    ull p;
    while(cin>>p){
        solve(p);
    }
    return 0;
}

void solve(ull p) {
    ull  x, y;
    for(ull x=0; x<p; x++){
        y=sqrt(p-x*x);
        if(x*x + y*y == p){
            cout<<x<<" "<<y<<endl;
            return;
        }
    }
}
