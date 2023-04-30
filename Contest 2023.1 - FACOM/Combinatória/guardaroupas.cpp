#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

ull factorial(int N){
    ull f = 1; 
    for (ull i = 2; i <= N; i++)
        f *= i;
    return f;
}

vector<int> multiply(vector<int>& digits, int factor) {
    int carry = 0;
    for (int i = 0; i < digits.size(); i++) {
        int prod = digits[i] * factor + carry;
        digits[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry) {
        digits.push_back(carry % 10);
        carry /= 10;
    }
    return digits;
}
 
void print(vector<int>& digits) {
    for (int i = digits.size() - 1; i >= 0; i--) {
        cout << digits[i];
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x,y,z;
    while(cin >> x >> y >> z)
        cout << factorial(x+y+z) << endl;

    return 0;
}

