#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    char auxchar;
    string aux;
    set<char> letras;
    vector<pair<int,char>> quantidade;

    cin >> N;

    cin.ignore();

    for(int c=0;c<N;c++)
    {
        getline(cin,aux);

        for(int c1=0;c1<aux.size();c1++)
        {
            if(!(letras.find(toupper(aux[c1]))!=letras.end()))
            {
                if((aux[c1]>='a'&&aux[c1]<='z')||((aux[c1]>='A'&&aux[c1]<='Z')))
                {
                    quantidade.push_back(make_pair(1,toupper(aux[c1])));
                    letras.insert(toupper(aux[c1]));
                }
            }
            else
            {
                for(int c2=0;c2<quantidade.size();c2++)
                {
                    if(quantidade[c2].second==toupper(aux[c1])) quantidade[c2].first++;
                }
            }
        }
    }

    int maior;

    for(int c2=0;c2<quantidade.size();c2++)
    {
        maior=c2;
        for(int c=c2+1;c<quantidade.size();c++)
        {
            if(quantidade[c].first>quantidade[maior].first)
            {
                maior=c;
            }
            else if(quantidade[c].first==quantidade[maior].first)
            {
                if(quantidade[c].second<quantidade[maior].second)
                {
                    maior=c;
                }
            }
        }
        if(maior!=c2) swap(quantidade[c2],quantidade[maior]);
    }

    for(int c2=0;c2<quantidade.size();c2++)
    {
        cout << quantidade[c2].second << ' ' << quantidade[c2].first << '\n';
    }

    return 0;
}


/*
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
   
    int n; cin>>n;
    string x;
    vector<string> st;
    for(int i=0; i<n; i++){
        getline(cin>>ws, x);
        st.push_back(x);
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<st[i].length(); j++){
            st[i][j]=toupper(st[i][j]);
        }
        sort(st[i].begin(), st[i].end());
    }
    for(int i=0; i<n; i++){
        cout<<st[i]<<endl;
    }
    return 0;
}
*/