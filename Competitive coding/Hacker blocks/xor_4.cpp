#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n>130){
        cout<<"YES"<<endl;
    }else{
    int count=1,ans=0,flag=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int l=j+1;l<n;l++){
                for(int k=l+1;k<n;k++){
                    if((a[i]^a[j]^a[l]^a[k])==0){
                        cout<<"YES"<<endl;
                        flag--;
                        break;
                    }
                }
            }
        
        
    }
    if(flag){
        cout<<"NO"<<endl;
    }
    }
    return 0;
}