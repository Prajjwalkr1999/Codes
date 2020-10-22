#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		for(int i=0;i<n;i++){
			int count =0;
			for(int j=i;j<n;j++){
				count=count+v[j];
				if(count==0){
					cout<<"YES";
					return 0;
				}
			}
		}
		cout<<"NO";
	}
}
