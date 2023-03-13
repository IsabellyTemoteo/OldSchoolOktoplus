/**
 * Henrique Junqueira 
 * Isabelly Temoteo
 * CEFET, Leopoldina
*/
 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(cin >> n){
        if(n == 0) break;
        string s;
        int soma = 1;

        vector<string> vetor;
        for(int i = 0; i < n; i++){
            cin >> s;
            sort(s.begin(), s.end());

            vetor.push_back(s);
        }

        sort(vetor.begin(), vetor.end());
        for(int i = 1; i < n; i++){
            if(vetor[i] != vetor[i-1]) soma++;
        }

        cout << soma << endl;
    }

}
