    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;

    const int inf = 2e9 + 100;
    const int mod = 1e9 + 7;
    const int N = 200000 + 10;

    int arr[N];
    int c[N];
    int n;

    bool check(int m){
        for(int i=0; i<n; i++){
            c[i]=arr[i];
        }

        for(int i=n-1; i>=2; i--){
            if(c[i]<m) return false;
            int d=(min(arr[i], c[i]-m))/3;
            c[i-1]+=d;
            c[i-2]+=2*d;
        }
        return c[0]>=m && c[1]>=m;

    }

    void solve(){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i];

        }

        int l=1;
        int r=arr[n-1];
        while(l<r){
            int m=l+(r-l+1)/2;
            if(check(m)) l=m;
            else r=m-1;
            
        }
        cout<<l<<endl;
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