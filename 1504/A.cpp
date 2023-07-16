#include <ios>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include <climits>
#include <cmath>
#include <utility>
#include <set>
#include <iomanip>

using namespace std;

bool palindrome(string s) {
    int n = s.length();
    for(int i = 0; i < n; i++) {
        if(s[i] != s[n - i - 1]) return false;
    }
    return true;
}

void solve(){
    string s;
    cin >> s;
    if(!palindrome('a' + s)) cout << "YES\n" << 'a' + s + "\n";
    else if(!palindrome(s + 'a')) cout << "YES\n" << s + "a\n";
    else cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}