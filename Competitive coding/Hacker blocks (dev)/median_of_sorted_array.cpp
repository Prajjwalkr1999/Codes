#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int b[],int c[],int n){
	int i, j=0,k=0;

	for( i=0;i<2*n;i++){
		if(k==n||j==n){
			break;
		}
		if(a[j]>b[k]){
			c[i]=b[k];
			k++;
		}else{
			c[i]=a[j];
			j++;
		}
		
	}
	while(k<n){
		c[i++]=b[k++];
	}
	while(j<n){
		c[i++]=a[j++];
	}
	// return c;
}
int main(){
	int n,a[n],b[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
    int c[2*n];
	 merge(a,b,c,n);
    cout<<c[n-1];
	// for(int i=0;i<2*n;i++){
	// 	cout<<c[i];
	// }
}
