#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int count=0;
		for(int i=a;i<=b;i++){
			int c=i;
			while(c!=0){
				if(c&1==1){
					count++;
				}
				c=c>>1;
			}
		}
		cout<<count;
	}
}
