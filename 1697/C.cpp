#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>  
#include <sstream> 
#include <bits/stdc++.h>

using namespace std;

void printArr(int arr[], int n){
	cout << "N: " << n << " Array: " << endl;
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

string deleteB(string s){
	string ret = "";
	for(int i = 0; i < (int) s.size(); i++){
		if(s[i] != 'b') ret += s[i];
	}
	return ret;
}

void solve(){
	long long n;

	long long numSA = 0; 
	long long numSB = 0;
	long long numSC = 0;

	long long numTA = 0;
	long long numTB = 0;
	long long numTC = 0;

	long long SA[100000];
	long long SC[100000];

	long long TA[100000];
	long long TC[100000];

	string s, t;

	cin >> n >> s >> t;

	for(long long i = 0; i < n; i++){
		if(s[i] == 'a'){
			numSA++;
			SA[numSA-1] = i;
		}
		else if(s[i] == 'b'){ 
			numSB++;
		}
		else if(s[i] == 'c'){ 
			numSC++;
			SC[numSC-1] = i;
		}


		if(t[i] == 'a'){ 
			numTA++;
			TA[numTA-1] = i;
		}
		else if(t[i] == 'b'){ 
			numTB++;
		}
		else if(t[i] == 'c'){ 
			numTC++;
			TC[numTC-1] = i;
		}
	}


	// cout << "SA: " << numSA << endl;
	// printArr(SA, numSA);
	// cout << "SB: " << numSB << endl;
	// printArr(SB, numSB);
	// cout << "SC: " << numSC << endl;
	// printArr(SC, numSC);

	// cout << "TA: " << numTA << endl;
	// printArr(TA, numTA);
	// cout << "TB: " << numTB << endl;
	// printArr(TB, numTB);
	// cout << "TC: " << numTC << endl;
	// printArr(TC, numTC);


	if(numSA != numTA || numSB != numTB || numSC != numTC){
		cout << "NO" << endl;
		// cout << "Case 1: " << endl; 
		return;
	}
	else{
		for(long long i = 0; i < numSA; i++){
			if(SA[i] > TA[i] || (  s[SA[i]+1] == 'c' && SA[i] != TA[i])){
				cout << "NO" << endl;
				// cout << "Case 2: " << endl; 
				return;
			}
		}

		for(long long i = 0; i < numSC; i++){
			if(SC[i] < TC[i] || (s[SC[i]-1] == 'a' && SC[i] != TC[i])){
				cout << "NO" << endl;
				// cout << "Case 3: " << endl; 
				return;
			}
		}

		if(deleteB(s) == deleteB(t)){
			cout << "YES" << endl;
			return;
		}
		else{
			cout << "NO" << endl;
			return;
		}
	}
}

int main(){
	long long t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}