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
	long long arr[200000+10];

	cin >> n;	

	long long i_const = n / 2 ;
	long long i_min = n / 2 ;
	long long i_max = n/2;

	for(long long i = 0; i < n; i++){
		cin >> arr[i];
	}

	sort(arr, arr + n);

	if(arr[0] == arr[n-1]){
		cout << n/2 << endl;
		return;
	}

	while(arr[i_min] == arr[i_min-1]){
		i_min--;
	}

	while(arr[i_max] == arr[i_max+1]){
		i_max++;
	}

	i_max++;

	// cout << "ARR" << i_min << " " << i_max << endl;

	if(i_min * (n-i_min) > i_max * (n-i_max)){
		cout << i_min * (n-i_min) << endl;
	}
	else{
		cout << i_max * (n-i_max) << endl;	
	}	

}

int main(){
	long long t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}