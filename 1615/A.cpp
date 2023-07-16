    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;

    const int inf = 2e9 + 100;
    const int mod = 1e9 + 7;
    const int N = 100 + 10;
    int arr[N];

    void solve(){
        int n;
        cin>>n;
        ll s=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            s+=arr[i];
        }
        if(s%n==0){
            cout<<0<<endl;
            return;
        }
        cout<<1<<endl;


        
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