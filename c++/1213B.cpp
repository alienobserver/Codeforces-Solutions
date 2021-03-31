#include <bits/stdc++.h>
using namespace std;

int solve(){
    vector<int> arr;
    int n, k, min;
    int badNums = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> k;
        arr.push_back(k);
    }
    for(int i = arr.size() - 1; i >= 0; i--){
        if(i == arr.size() - 1) min = i;
        else if( arr[i] > arr[min] ) badNums++;
        else if( arr[i] < arr[min] ) min = i; 
    }
    return badNums;
}

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        cout << solve() << endl;
    }
    return 0;
}