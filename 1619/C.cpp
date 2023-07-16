#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;
const int inf = 2e9 + 100;
const int mod = 1e9 + 7;
const int N = 200000 + 10;
const int M = 500000 + 10;
void solve(){
    ll a1, s1;
    cin>>a1>>s1;
    int b[40];
    int k=0;

    while(s1>0){
        int ra=a1%10;
        int rs=s1%10;
        if(rs>=ra){
            b[k++]=rs-ra;
            a1/=10;
            s1/=10;
        }
        else{
            if(s1<10){
                cout<<-1<<endl;
                return;
            }
            rs=s1%100;
            if(rs-ra<10 && rs-ra>0){
                b[k++]=rs-ra;
                a1/=10;
                s1/=100;
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }

    }

    if(a1>0){
        cout<<-1<<endl;
        return;
    }

    for(int i=k-1; i>=0; i--){
        if(b[i]==0 && k>0) k--;
        else break;
    }

    for(int i=k-1; i>=0; i--){
        cout<<b[i];
    }
    cout<<endl;

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