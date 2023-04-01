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

int getGCD(int a, int b)
{
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }
    if (a == 0) {
        return b;
    }
    return a;
}
 
int GcdOfArray(vector<int>& arr)
{
    int gcd = 0;
    for (int i = 0; i < arr.size(); i++) {
        gcd = getGCD(gcd, arr[i]);
    }
    return gcd;
}

int main(){
    int n;
    vector<int> arr;
    while(cin >> n){
        arr.push_back(n);
    }
    cout << GcdOfArray(arr);

    return 0;
}

