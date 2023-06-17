#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

string DecimalToBinary(int n) {
  string aux = "";
  for (int i = 31; i >= 0; i--) {
    int k = n >> i;
    if (k & 1)
      aux += "1";
    else
      aux += "0";
  }
  return aux;
}

int main() {
  int a, b;
  while (cin >> a >> b) {
    string aa = DecimalToBinary(a);
    string bb = DecimalToBinary(b);
    string aux(32, '0');
    for (int i = 32; i >= 0; i--) {
      if (aa[i] != bb[i])
        aux[i] = '1';
    }
    int number = stoi(aux, 0, 2);
    cout << number << endl;
  }
  return 0;
}

