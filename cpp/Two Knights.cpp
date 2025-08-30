#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000000
#define ll long long

int main(){
    int n; cin >> n;
    
    for (int k = 1; k <= n; k ++){
    	ll totalWay = ((ll)(k * k) * ((ll)k * k - 1) / 2);
    	ll attack = 4 * (k - 1) * (k - 2);
    	cout << totalWay - attack << "\n";
    }
    return 0;
}