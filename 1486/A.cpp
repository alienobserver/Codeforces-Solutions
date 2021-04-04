#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long n;
    long long count = 0;
    cin >> n;
    long long arr[100000+1];
    bool tr = true;
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] < i){
            if(count >= i - arr[i]){
                count -= i - arr[i];
                arr[i] = i;
            }
            else{
                tr = false;
            }
        }
        else{
            count += arr[i] - i;
            arr[i] = i;
        }
    }
    if(tr)cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}