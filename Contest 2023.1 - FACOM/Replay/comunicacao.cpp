#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;



int main()
{
    ll n, x, z;
    while(cin>>n){
        for(int i=1; i<=n; i++){
            x=i-1;
            z=i+1;
            if(i*x*z==n){
                cout<<x<<" "<<i<<" "<<z<<"\n";
                break;
            }
            else if(i==n){
                cout<<"mensagem falsa\n";
            }
        }
    }
    return 0;
}


