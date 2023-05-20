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

void kadane(vector<int>& vet);

int main()
{
    vector<int> vet;
    int a;

    while(cin>>a){
        vet.push_back(a);
    }
	kadane(vet);
    return 0;
}

void kadane(vector<int>& vet)
{
	int max_atual = 0, max_total = -1;
	int size_vet = vet.size();

	for(int i = 0; i < size_vet; i++)
	{
		max_atual = max_atual + vet[i];
		
		if(max_atual < 0)
			max_atual = 0;
		if(max_atual > max_total)
			max_total = max_atual;
	}
	
	cout <<max_total << endl;
}
