/**
 * Henrique Junqueira 
 * Isabelly Temoteo
 * Vinícius Lima
 * CEFET, Leopoldina
*/

#include <bits/stdc++.h>

using namespace std;

int main(){   
  
    int n;cin>>n;
    float cont=0, ai=0;
    for(int i=0; i<n;i++){
        cin>>ai;
        cont=cont+ai;
    }
    
    cout.precision(2);
    cout.setf(ios::fixed);
    cout<<cont/n<<"\n";
    return 0;
}

