    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef pair<int, int> pa;
    const int inf = 2e9 + 100;
    const int mod = 1e9 + 7;
    const int N = 1000 + 10;
    pair<int, int> arr[N];
    // bool cmp(const pair<int,int> &a,const pair<int,int> &b)
    // {
    //        if(a.first!=b.first) return a.first<b.first;
    //        else return a.second<b.second;
    // }

    bool cmp(const pair<int,int> &a,const pair<int,int> &b)
    {
           if(a.second!=b.second) return a.second>b.second;
           else return a.first<b.first;
    }

    void solve(){
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i].first>>arr[i].second;
        }

        sort(arr,arr+n, cmp);
        // for(int i=0; i<n; i++){
        //     cout<<arr[i].first<<" "<<arr[i].second<<endl;
        // }
        // cout<<endl;

        for(int i=0; i<n-1; i++){
            if(arr[i].second==arr[i+1].second){
                cout<<arr[i].first<<" "<<arr[i].second<<" "<<arr[i+1].first-1<<endl;
            }
            else{
                cout<<arr[i].first<<" "<<arr[i].second<<" "<<arr[i].second<<endl;
            }
        }

        cout<<arr[n-1].first<<" "<<arr[n-1].second<<" "<<arr[n-1].first<<endl;
        cout<<endl;

     
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