#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[n];
    }
    int v[64]={0};
    // int x=1;
    for(int i=0;i<n;i++){
        int j=0;
      while(a[i]>0){
          int no=a[i]&1;
          v[j]=v[j]+no;
           j++;
          a[i]=a[i]>>1;
         
      }
    }
    int p=1;
    int ans=0;
      for(int i=0;i<64;i++){
          v[i]%=3;
          ans+=v[i]*p;
          p=p<<2;
      }
      cout<<ans;

}
