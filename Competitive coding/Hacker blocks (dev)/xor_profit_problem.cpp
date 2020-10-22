#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
  int a,b;
  n=a*b;
  int k=0,ar[n];
  cin>>a>>b;
  for(int i=a;i<=b;i++){
      for(int j=i;j<=b;j++){
          ar[k]=i^j;
          k++;
      }
  }
  sort(ar,ar+n);
  reverse(ar,ar+n);
  cout<<ar[0];
}


