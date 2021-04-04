#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int main(){
	fast
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> a(n);
		for(int i=0;i<n;i++)cin>>a[i];
		int mx = *max_element(all(a));
		if(n * mx < k){
			cout << -1 << '\n';
			continue;
		}
		int ans = n+1;
		for(int b=0;b<k;b++){
			int to = -2;
			for(int i=0;i<n-1;i++){
				if(a[i] < a[i+1]){
					to = i;
					break;
				}
			}
			ans = to + 1;
			if(to == -2)break;
			a[to]++;
		}
		cout << ans << '\n';
	}	
}