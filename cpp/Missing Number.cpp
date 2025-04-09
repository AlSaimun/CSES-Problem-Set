#include<bits/stdc++.h>
using namespace std;

#define  ll long long


int main(){
	int n, a; cin >> n;
	ll sum = 0;

	for (int i = 0; i < n - 1; i ++){
		cin >> a;
		sum += (ll) a;
	}
	ll total_sum = ((ll)n * ( n + 1)) / 2;

	cout << total_sum - sum << '\n'; 
}