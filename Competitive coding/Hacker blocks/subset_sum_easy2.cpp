#include<bits/stdc++.h>
using namespace std;

#define ll long long int

const ll N=100005;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ll t;
    cin>>t;
    while(t--){
        ll n,j,sum,y,flag;
        cin>>n;
        ll a[n];
         for ( ll i = 0; i < n; i++) {
                 cin>>a[i];   
                }
        ll x=(1<<n)-1;
        for(ll i=1;i<=x;i++){
            flag=1;
            j=0;
            sum=0;
            y=i;
            while(y>0){
                if(y&1){
                    sum+=a[j];
                }
                j++;
                y=y>>1;
            }
            if(sum==0){
                cout<<"Yes"<<endl;
                flag--;
                break;
            }
        }
        if(flag)
        cout<<"No"<<endl;
    }
}