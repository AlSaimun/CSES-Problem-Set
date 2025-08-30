#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000000
#define ll long long

int main(){
    int n; cin >> n;
    ll total_sum = (1LL * n * (n + 1)) / 2LL;
    if (total_sum % 2LL) {
    	cout << "NO\n";
    	return 0;
    }
    cout << "YES\n";

    
    vector<int> f, s;
    
    // idea1
    // int firstArraySize = n / 2;	
	// for (int i = 1; i <= n; i ++){
	// 	if(n % 2){
	// 		if(i <= firstArraySize / 2 or i >= n - firstArraySize / 2){
	// 	   		f.push_back(i);		
	// 		}
	// 		else s.push_back(i);	
	// 	}
	// 	else{
	// 		if(i <= firstArraySize / 2 or i >= n - firstArraySize / 2  + 1){
	//    			f.push_back(i);		
	// 		}
	// 		else s.push_back(i);
	// 	}

	// }
	
	// idea2
	ll targated_sum = total_sum / 2LL;

	for (int i = n; i > 0; i --){
		if (targated_sum >= (ll)i){
			f.push_back(i);
			targated_sum -= (ll)i;
		}
		else s.push_back(i);
	}
	cout << f.size() << "\n";
	for (int e : f){
		cout << e << " ";
	}
	cout << "\n";
	
	cout << s.size() << "\n";
	for (int e : s){
		cout << e << " ";
	}
	cout << "\n";
	
    
    
    return 0;
}