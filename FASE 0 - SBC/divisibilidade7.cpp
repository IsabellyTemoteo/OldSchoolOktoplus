#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string x="", num="", ultimo;
    cin>>x;
    ll resp;
    if(stoi(x)%7==0){
        cout<<stoi(x)<<endl;
    }
    while(true){
      
        if(x.size()>1){
            ultimo=x[x.size()-1];
            x.erase(x.size()-1);
            num=x;
        }else{
            return 0;
        }
        resp=stoi(num)*3+stoi(ultimo);
        if(resp%7==0){
            cout<<resp<<endl;
            x=to_string(resp);
            num="";
            resp=1;
        }else{
            return 0;
        }
    }
    
    return 0;
}


