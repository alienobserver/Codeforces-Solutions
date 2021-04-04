#include <bits/stdc++.h>

using namespace std;

long long Mypow(int x, int y){
    long long ans = 1;
    for(int j = 0; j < y; j++) ans *= x;
    return ans;
}

void solve(){
    long long n;
    cin >> n;
    long long dig = 9;
    long long num = 0;
    if(n == 1){
        cout << 9 << endl;
        return;
    }
    else if(n== 2){
        cout << 98 << endl;
        return;
    }
    else{
        cout << 98;
        for(long long i = 0; i < n-2; i++){
            cout << dig;
            dig++;
            if(dig > 9) dig = 0;
        }
        cout<< endl;
        return;
    }
}

int main(){
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}