#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		string str1,str2,str3;
		str3='';
		cin>>str1>>str2;
		for(int i=0;i<5;i++){
         str3=str3+(((str1[i]-'0')^(str2[i]-'0'))+'0');
		}
		cout<<str3;
	}
	return 0;
}
