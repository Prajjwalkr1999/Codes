#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 100005;
// ll f[N]={0};
// ll fact(int n){
//     if(n==0||n==1){
//         return 1;
//     }
//     // if(f[n]!=0){
//     //     return f[n];
//     // }
//     ll ans=n*fact(n-1);
//     // f[n]=ans;
//     return ans;
// }
ll ncr(ll n,ll k){
    ll p1=1;
    for(ll i=n-1;i>=n-k-1;i--){
     p1=p1*i;
     cout<<"p1 "<<p1<<endl;
    }
    cout<<"p1 "<<p1<<endl;
    ll p2=1;
    for(ll i=k-1;i>=1;i--){
        p2=p2*i;
    }
    cout<<"p2 "<<p2<<endl;
    ll ans=p1/p2;
    cout<<ans<<endl;;
    return ans;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
     ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n>>k;
        ans=ncr(n,k);
        cout<<ans<<endl;
        
        // ans=fact(100);
        // cout<<ans;
    }
}

