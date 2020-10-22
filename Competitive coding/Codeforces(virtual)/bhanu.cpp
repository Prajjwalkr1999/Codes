#include <bits/stdc++.h>
using namespace std;

#define int long long int
int mod =   998244353;

int sum = 0;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
     #endif

    int t,n;
    cin>>t; while(t--){

        sum = 0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int x=(1<<n);
        for(int i=0;i<x;i++){
            
            int j = 0;
            
            while(i>0){
                // int last_bit = i&1;
                if(i&1){
                    cout<<a[j]<<"\n";
                }
                j++;
                i= i>>1;
            }
    }

    }
}