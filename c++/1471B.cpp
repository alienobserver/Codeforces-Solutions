#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define t_itr     \
    ll test;     \
    cin >> test; \
    while (test--)
#define fio                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
 
int main(){
    fio
    t_itr{
        int n,te,x;
        ll su=0;
        vector<int> dta;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            cin>>te;dta.push_back(te);
            su+=te;
        }
        for(int i=0;i<dta.size();i++){
            if(dta[i]%x==0){
                if(i>=n)
                    su+=dta[i%n];
                else
                    su+=dta[i];
                // for(int j=0;j<x;j++)
                dta.push_back(dta[i]/x);
            }
            else
                break;
        }
        cout<<su<<endl;
    }
    return 0;
}