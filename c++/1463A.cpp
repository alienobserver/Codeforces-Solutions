#include <iostream>
using namespace std;

void solve(){
    long long a, b, c;
    cin >> a >> b >> c;
    long long minim = min(a, b);
    minim = min(minim, c);
    if((a+b+c) % 9 == 0 && minim >= (a+b+c) / 9){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}