#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;



int main()
{
    ll n; cin>>n;
    vector<double> vet, x;
    double aux;
    for(int i=0; i<n; i++){
        cin>>aux;
        vet.push_back(aux);
        x.push_back(aux);
    }
    sort(vet.begin(), vet.end());

    for(int i=0; i<3; i++){
        for(int j=0; j<n; j++){
            if(vet[i]==x[j]){
                cout.precision(2);
                cout.setf(ios::fixed);
                cout<<i+1<<"o. lugar: competidor "<<j+1<<" - "<<vet[i]<<" segundos\n";
            }
        }
        
    }

    return 0;
}