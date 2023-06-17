//Isabelly Araújo Temoteo
// - Belly s2

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

ull a, b, c;
ull sum = 0;

void to_A(){
    sum += a;

    sum += ((3*b)/2);
    sum += ((5*c)/2);
}

void to_B(){
    sum += b;

    sum += ((2*a)/3);
    sum += ((5*c)/3);
}

void to_C(){
    sum += c;

    sum += ((2*a)/5);
    sum += ((3*b)/5);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b >> c;

    char carac; cin >> carac;

    if(carac == 'A')
        to_A();
    else if(carac == 'B')
        to_B();
    else
        to_C();

    cout << sum << endl;


    return 0;
}