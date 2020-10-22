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
        ll n,sum=0,ans=0,x=0;
        cin>>n;
        ll a[n],arrsum[N]={0};
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            // sum%=n;
            x=(sum%n+n)%n;
            arrsum[x]++;
        }
        arrsum[0]++;
        cout<<arrsum[0]<<endl;
        for(ll i=0;i<=n;i++){
            ans=ans+((arrsum[i]*(arrsum[i]-1))/2);
        }
        // if(arrsum[0]==1){
        //     cout<<(1)<<endl;
        // }else{
        cout<<ans<<endl;
        // }

    }
    
}