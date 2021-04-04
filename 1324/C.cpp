#include <bits/stdc++.h>
using namespace std;

int get_d(){
    string s;
    int max = 0;
    int count = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'L'){
            ++count;
        }
        else if(s[i] == 'R'){
            if(count > max) max = count;
            count = 0;
        }
        if(i == s.size() - 1){
            if(count > max) max = count;
        }
    }
    return max+1;
}

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        cout << get_d() << endl;
    }
}