    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef pair<int, int> pa;
    const int inf = 2e9 + 100;
    const int mod = 1e9 + 7;
    const int N = 100 + 10;
    void solve(){
        int n, m;
        cin>>n>>m;
        int rb,cb,rd,cd;
        cin>>rb>>cb>>rd>>cd;
        int ans;
        if(rb==rd || cb==cd){
            ans=0;
        }
        else{
            int dr=1;
            int dc=1;
            ans=0;
            while(1){
                if(rb==n) dr*=-1;
                if(cb==m) dc*=-1;
                rb+=dr;
                cb+=dc;
                ans++;
                if(rb==rd || cb==cd) break;
     
            }
        }
     
        cout<<ans<<endl;
     
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