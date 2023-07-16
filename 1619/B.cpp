#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;
const int inf = 2e9 + 100;
const int mod = 1e9 + 7;
const int N = 200000 + 10;
const int M = 500000 + 10;
void solve(){
    int n;
    cin>>n;
    int s=sqrt(n);
    int c=cbrt(n);
    int b=cbrt(s);
    cout<<s+c-b<<endl;

}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
        
    cin.tie(0);
    ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
	  solve();
	}
	//solve();
	return 0;
}