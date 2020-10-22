#include<bits/stdc++.h>
using namespace std;
bool compare(string a,string b){
	int count=0;
	int al=a.length();
	int bl=b.length();
	int check;
	if(al>bl){
		check=bl;
	}else{
		check=al;
	}
	for(int i=0;i<a.length()&&i<b.length();i++){
		if(a[i]==b[i]){
			count++;
		}else{
			return a<b;
		}
	}
	if(check==al){
		return a>b;
	}
	
}
int main(){

		int n;
		cin>>n;		
		vector<string> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}

	sort(v.begin(),v.end(),compare);
	for(int i=0;i<n;i++){
		cout<<v[i]<<endl;
	}
}
