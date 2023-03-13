/**
 * Henrique Junqueira 
 * Isabelly Temoteo
 * CEFET, Leopoldina
*/
 

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    string newString = "";
    int soma = 0;

    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'k') continue;

        switch (s[i])
        {
        case '+':
            

            break;

        case '*':

            break;

        case '-':

            break;
        
        default:
            newString += s[i];
            break;
        }

    }


    return 0;
}
