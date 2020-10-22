#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
  int a,b;
  n=a*b;
  int k=0,ar[n],max=0;
  cin>>a>>b;
  for(int i=a;i<=b;i++){
      for(int j=i;j<=b;j++){
          k=(i^j);
          if(k>max){
            max=k;
          }
      }
  }
  // sort(ar,ar+n);
  // reverse(ar,ar+n);
  cout<<max;
}


