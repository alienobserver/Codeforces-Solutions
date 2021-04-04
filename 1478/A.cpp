#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long n;
    cin >> n;
    long long arr[100+1];
    long long count = 1; 
    long long maxim = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i != 0 && arr[i] == arr[i-1]) count++;
        else{
            maxim = max(count, maxim);
            count = 1;
        }
    }
    cout << max(maxim, count) << endl;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}