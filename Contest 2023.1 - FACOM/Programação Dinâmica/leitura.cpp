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



int main()
{
    int q,d,p;
    int numpag;

    while(true){
        cin>>q;
        if(q==0){
            return 0;
        }
        cin>>d>>p;
        numpag=(p*q*d)/(p-q);
        cout<<numpag<<endl;
    }
    return 0;
}
