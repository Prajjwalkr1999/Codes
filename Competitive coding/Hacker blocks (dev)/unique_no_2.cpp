#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a[n];
cin>>n;
for(int i=0;i<n;i++){
	cin>>a[i];
}
int x=a[0];
for(int i=1;i<n;i++){
    x=x^a[i];
}
// cout<<x<<" ";
int i=0;
while(x!=0){
    i++;
    if(x&1){
        break;
    }
    x=x>>1;
}

int setb=1<<i;
int u=0,y=0;
for(int i=0;i<n;i++){
    if((a[i]>>i)&1==1){
        u=u^a[i];
    }else{
        y=y^a[i];
    }
}
if(u>y){
    cout<<y<<" "<<u;
}else{
    cout<<u<<" "<<y;
}
}
