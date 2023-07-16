#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>  
#include <sstream> 
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

void solve(){
	long long n;
	long long arr[100000+10];
	long long min_a = INT_MAX;
	long long max_a = INT_MIN;

	cin >> n;

	for(long long i  = 0; i < n; i++){
		cin >> arr[i];
		min_a = min(arr[i], min_a);
		max_a = max(arr[i], max_a);
	}

	long long count_min = 0;
	long long count_max = 0;

	for(int i  = 0; i < n; i++){
		if(arr[i] == min_a) count_min++;
		if(arr[i] == max_a) count_max++;
	}	


	if(min_a == max_a){
		cout << n * (n-1) << endl;
		return;
	}
	cout << count_min * count_max * 2 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}