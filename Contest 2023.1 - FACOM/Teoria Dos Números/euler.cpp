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

/**
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int h; cin >> h;
    int resp = 0;

    while (h % 12 != 0) {
            h += 1;
            resp += 1;
    }
    cout << resp << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int h, aux=0;cin>>h;
    if(h%12==0){
        cout<<"0\n";
    }
    else{
       
    
        int a=1;
        while(a!=0){
            aux+=1;
            h+=1;
            if(h%12==0){
                cout<<aux<<endl;
                return 0;
            }
        }
    }
    return 0;
}

*/

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull n; cin >> n;
    cout << 12 - n%12 << endl; 
    
    return 0;
}



