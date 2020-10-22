#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


// const int N = 100005;
const ll mod=1e9+7;

ll solve(ll a,ll b){
    ll res=1;
    while(b>0){
        if(b&1){
            res=(res*a)%mod;
        }
        a=(a*a)%mod;
        b=b>>1;
    }
    return res;
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
        ll  a, n;
        cin >> n >>a;
        ll product=1,p,sum=0;
        if(a==0){
            cout<<0<<"\n";
            continue;
        }
        for(ll i=1;i<=n;i++){
            p=solve((product*a),(2*i-1));
            sum=(sum+p)%mod;
            product=(product*p)%mod;
        }
        cout<<sum%mod<<"\n";
    }
}

