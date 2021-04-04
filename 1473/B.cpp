#include<iostream>
using namespace std;

int gcd(int a, int b){
    if (b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

int lcm(int a,int b){
    return (a/gcd(a,b))*b;
}

string StringLCM(string s,int n){
    string result = s;
    for (int i = 0; i < n-1; i++)
    {
        result.append(s);
    }
    return result;
}
 
int main(){
    int t;
    cin >> t;
    while (t--) {
        string s1;
        string s2;
        cin >> s1 >> s2;
        int n1= s1.length();
        int n2= s2.length();
        int l=lcm(n1,n2);  
        int flag=0;
        int e =-1;

        s1=StringLCM(s1,l/n1);
        s2=StringLCM(s2,l/n2);

        if (s1==s2)
        {
            flag=1;
        }
        if (flag==1)
        {
            cout<<s1<<endl;
        }else
        {
            cout<<e<<endl;
        }
    }
    return 0;
}