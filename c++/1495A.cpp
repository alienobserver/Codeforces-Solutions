#include <bits/stdc++.h>
using namespace std;
const int maxn = 100005;
int n,X[maxn],Y[maxn],t1,t2;

int main(){
  int T; scanf("%d",&T);
  for(int i(1);i <= T;++i){
    scanf("%d",&n); t1 = t2 = 0;

    for(int i(1);i <= 2*n;++i){
      int x,y;
      scanf("%d%d",&x,&y);
      if(x == 0) Y[++t2] = abs(y);
      else X[++t1] = abs(x);
    }

    sort(X+1,X+1+t1);
    sort(Y+1,Y+1+t2);

    double Ans = 0;
    
    for(int i(1);i <= n;++i)
      Ans += sqrt(1.0*X[i]*X[i]+1.0*Y[i]*Y[i]);

    printf("%.15lf\n",Ans);
  }
  return 0;
}