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

void solve(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != 'a'){
            cout << "YES" << endl;
            if(s[0] != 'a') cout << s + 'a' << endl;
            else if(s[s.size()-1] != 'a') cout << 'a' + s << endl;
            else cout << s + 'a' << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}