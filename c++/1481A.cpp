#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long x, y, n, x1, y1;
    long long u = 0; 
    long long d = 0;
    long long r = 0;
    long long l = 0;
    string s;
    cin >> x >> y >> s;
    n = s.size();
    for(long long i = 0; i < n; i++){
        if(s[i] == 'U') u++;
        else if(s[i] == 'D') d++;
        else if(s[i] == 'R') r++;
        else if(s[i] == 'L') l++;
    }
    if(x > 0 && r < x){
        cout << "NO"<< endl;
        return;
    }
    if(x < 0 && l < -1*x){
        cout << "NO" << endl;
        return;
    }
    if(y > 0 && u < y){
        cout << "NO" << endl;
        return;
    }
    if(y < 0 && d < -1*y){
        cout << "NO" << endl;
        return;
    }
    else{
        cout << "YES" << endl;
        return;
    }
}

int main(){
    std::ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}