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

int main(){
    int n, aux=1, aux2=0, num=0; cin>>n;
    int vet[n];

    for(int i=0; i<n; i++){
        cin>>vet[i];
    }
    
    for(int i=1;i<n; i++){
        if(vet[i]==vet[i-1]){
            aux++;
        }
        else if(aux>aux2){
            num=vet[i-1];
            aux2=aux;
            aux=0;
        }
    }   
    cout<<num<<"\n";
    
    return 0;
}