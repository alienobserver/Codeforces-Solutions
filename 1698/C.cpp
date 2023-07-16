#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>  
#include <sstream> 
#include <bits/stdc++.h>

using namespace std;

void solve (){
	long long n, k;
	long long sum = 0;
	long long posNum = 0;
	long long negNum = 0;
	long long arr[2*100000];
	int anasun[10];
	bool hasZero = false;
	int j = 0;

	cin >> n;

	for(long long i = 0; i < n; i++){
		cin >> k;
		arr[i] = k;

		sum += arr[i];
		//cout << sum << " ";

		if(arr[i] > 0) posNum++;
		if(arr[i] < 0) negNum ++;


		if(posNum < 3 && negNum < 3){
			if(k == 0 && !hasZero){
				hasZero = true;
				anasun[j] = k;
				j++;
			}
			else if(k != 0){
				anasun[j] = k;
				j++;
			}
		}
	}
	// cout << endl;

	if( (posNum > 2 && n > 3)  ||  (negNum > 2 && n > 3)){
		cout << "NO" << endl;
		// cout << "Case 1: sum : " << sum << " posNum: " << posNum << " negNum: " << negNum << " n: " << n << endl; 
		return;
	}

	else if(n == 3){
		for(long long i = 0; i < n; i++){
			if(arr[i] == sum) { 
				cout << "YES" << endl;
				// cout << "Case 2: sum : " << sum << " posNum: " << posNum << " negNum: " << negNum << " n: " << n << endl; 
				return;
			}
		}
		cout << "NO" << endl;
		// cout << "Case 3: sum : " << sum << " posNum: " << posNum << " negNum: " << negNum << " n: " << n << endl; 
		return;
	}

	else{
		for(int i = 0; i < j; i++){
			for(int k = i+1; k < j; k++){
				for(int g = k+1; g < j; g++){
					bool flag = false;
					int number = anasun[i] + anasun[k] + anasun[g];

					for(int h = 0; h < j; h++){
						if(anasun[h] == number) flag = true;
					}

					if (flag == false){
						// cout << "Case wanted: nums: " << anasun[i] << " " << anasun[k] << " " << anasun[g] << endl;
						cout << "NO" << endl;
						return;
					}
				}
			}
		}
		cout << "YES" << endl;
		// cout << "Case 4: sum : " << sum << " posNum: " << posNum << " negNum: " << negNum << " n: " << n << endl; 
		return;
	}

}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}