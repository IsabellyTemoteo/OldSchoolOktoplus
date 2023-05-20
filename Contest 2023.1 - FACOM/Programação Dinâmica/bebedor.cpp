/**
 * Henrique Junqueira 
 * Isabelly Temoteo
 * Vinícius Lima
 * CEFET, Leopoldina

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        int init, achou, precisa, garrafas = 0;
        cin >> init >> achou >> precisa;

        int bebidas = 0;

        bebidas += (init/precisa);
        garrafas += (init/precisa) + (init%precisa);

        
        bebidas += (garrafas/precisa);
        garrafas += (garrafas/precisa) + (garrafas%precisa);
        

        garrafas += achou;

        
        bebidas += (garrafas/precisa);
        garrafas += (garrafas/precisa) + (garrafas%precisa);

        cout << bebidas << endl;
    }


    return 0;
}
*/


/**
 * Henrique Junqueira 
 * Isabelly Temoteo
 * Vinícius Lima
 * CEFET, Leopoldina*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void garrafas(int tem, int achou, int precisa);

int main()
{
    int n; cin >> n;

    for(int i=0; i<n; i++){
        int tem, achou, precisa;
        cin>>tem>>achou>>precisa;
        garrafas(tem, achou, precisa);
    }

    return 0;
}

void garrafas(int tem, int achou, int precisa){
    int soma=0;
    while((tem+achou)>=precisa){
        soma=soma+((tem+achou)/(precisa));
        tem=(tem+achou)/(precisa) + (tem+achou)%(precisa);
        achou=0;
    }
    cout<<soma<<endl;
}

