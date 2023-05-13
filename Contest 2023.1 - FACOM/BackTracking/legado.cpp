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
    string s;

    vector<int> lst[105];
    
    while(getline(cin >> ws, s)){
        int x, y;
        string saveOne =  "", saveTwo = "";
        bool ok = false;

        for(int i = 0; i < s.size(); i++){
            if(s[i] != ',' && ok == false)
                saveOne += s[i];
            else {
                ok = true;
                if(s[i] == ',' || s[i] == ' ')
                    continue;
                else saveTwo += s[i];
            }
            
        }

        x = stoi(saveOne);
        y =  stoi(saveTwo);

        lst[x].push_back(y);
        lst[y].push_back(x);
        
    }

    for(int i = 0; i <= 101; i++) {
            if(!lst[i].empty()){
                sort(lst[i].begin(), lst[i].end());
                cout << "V" << i << " ";
                for(auto v : lst[i])
                    cout << v << " ";
                cout << endl;
            }
        }


    return 0;
}