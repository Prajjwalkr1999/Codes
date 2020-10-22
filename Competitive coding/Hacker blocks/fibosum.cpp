#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const ll N = 100005;

const ll mod=1000000007;

const ll k=2;

ll b[]={1,1};

vector<vector<ll>> mult(vector<vector<ll>> a,vector<vector<ll>> b){
    vector<vector<ll>> c(k+1,vector<ll>(k+1));

    for(ll i=1;i<=k;i++){
        for(ll j=1;j<=k;j++)
        {
            for(ll x=1;x<=k;x++){
                c[i][j]=(c[i][j]+((a[i][x]*b[x][j])%mod))%mod;
            }
        }
    }
    return c;
}

vector<vector<ll>> pow(vector<vector<ll>> a,ll p){
    if(p==1){
        return a;
    }
    if(p&1){
        return mult(a,pow(a,p-1));
    }
    else{
        vector<vector<ll>> c=pow(a,p/2);
        return mult(c,c);
    }

}

ll compute(ll n){
    if(n==0){
        return 0;
    }

    if(n<=k){
        return b[n-1];
    }

    vector<ll> f1(k+1);

    for(ll i=1;i<=k;i++){
        f1[i]=b[i-1];
    }

    vector<vector<ll>> T(k+1,vector<ll>(k+1));

    for(ll i=1;i<=k;i++){
        for(ll j=1;j<=k;j++){
            if(i<k){
                if(j=i+1){
                    T[i][j]=1;
                }
                else{
                    T[i][j]=0;
                }
                continue;
            }
            T[i][j]=1;
        }
    }

    T=pow(T,n-1);
    ll res=0;
    for(ll i=1;i<=k;i++){
        res=res+((T[1][i]*(f1[i]%mod))%mod);
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
        ll i, j, k, l,r, m, ans = 0, cnt = 0, sum = 0;
        cin >> l>>r;
        ans=(compute(r+2)-compute(l+1)+mod)%mod;
        cout<<ans<<endl;

    }
}

