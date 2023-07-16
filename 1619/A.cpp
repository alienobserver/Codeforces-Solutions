#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;
const int inf = 2e9 + 100;
const int mod = 1e9 + 7;
const int N = 200000 + 10;
const int M = 500000 + 10;
void solve(){
    string s;
    cin>>s;
    int len=s.size();
    if(len &1){
        cout<<"NO"<<endl;
        return;
    }
    string s1=s.substr(0,len/2);
    string s2=s.substr(len/2,len/2);
    if(s1==s2){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;

}

int main() {

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
 
        
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