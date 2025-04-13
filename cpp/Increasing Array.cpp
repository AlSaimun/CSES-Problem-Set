
#include<bits/stdc++.h>
using namespace std;

#define  ll long long


int main(){
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i ++){
		cin >> arr[i];
	}

	ll ans = 0;
	for (int i = 1; i < n; i ++){
		if (arr[i - 1] > arr[i]){
			ans += (ll)(arr[i - 1] - arr[i]);
			arr[i] = arr[i - 1];
		}
	}
	cout << ans << "\n";
}