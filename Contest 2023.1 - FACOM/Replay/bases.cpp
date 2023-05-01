#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

string toBinary(string number) {
    ull decimal = stoi(number); 
    string binario = "";
    
    if (decimal == 0) {
        return "0";
    }

    while (decimal > 0) {
        ull resto = decimal % 2;
        binario = to_string(resto) + binario;
        decimal /= 2;
    }
    
    return binario;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    for(ll i = 0; i < n; i++){
        ll init, ends;
        cin >> init >> ends;

        ll soma = 0;
        ll quantidade = 0;

        for(int j = init; j <= ends; j++){
            string number = to_string(j);
            string saveNb = number;
            reverse(number.begin(), number.end());

            if(number == saveNb){
                string binary = toBinary(number);
                string saveB = binary;
                reverse(binary.begin(), binary.end());
                if(binary == saveB){
                    soma += j;
                    quantidade++;
                }
            }
        }

        cout << soma << " " << quantidade << endl;
     
            
    }

    return 0;
}