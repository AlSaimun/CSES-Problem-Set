#include<bits/stdc++.h>
using namespace std;

#define  ll long long


int main(){
	string st; cin >> st;

	char prevous_char = 'D';
	int ans = 0, current_mx = 0;

	for (int i = 0; i < st.size(); i ++){
		if(st[i] != prevous_char){
			ans = max(ans, current_mx);
			current_mx = 0;
		}

		current_mx ++;
		prevous_char = st[i];
	}
	ans = max(ans, current_mx);
	cout << ans << "\n";
}
