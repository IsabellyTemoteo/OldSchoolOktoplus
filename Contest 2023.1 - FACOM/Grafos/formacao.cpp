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

int fatorial(int n);

int main()
{
    int n, resp;
    while(cin>>n){
        resp=(fatorial(5))/fatorial(5-n);
        cout<<resp<<endl;
    }
    return 0;
}

int fatorial(int n){
    if(n==1){
        return 1;
    }
    return n*fatorial(n-1);
}

