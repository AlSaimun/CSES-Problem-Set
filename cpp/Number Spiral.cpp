
		
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MAX 1e9


ll solve() {
    ll row, col; cin >> row >> col;
    ll mx = max(row, col);
    if (mx % 2){
    	if(row == mx){
    		return (row - 1) * (row - 1) + col;
    	}
    	else {
    		return col * col - row + 1;
    	}
    }
    else{
    	if(row == mx){
    		return row * row - col + 1;
    	}
    	else {
    		return (col - 1) * (col - 1)  + row ;
    	}
    }
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
    return 0;
}