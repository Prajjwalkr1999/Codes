#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
const int N = 100005;
ll a[N];
vector<ll> sortarr(vector<ll> x,vector<ll> b){
    ll asize=x.size();
    ll bsize=b.size();
    vector<ll> c(asize+bsize);
    ll i=0,j=0,k=0;
    while((i<asize)&&(j<bsize)){
        if(x[i]<b[j]){
            c[k++]=x[i++];
        }else{
            c[k++]=b[j++];
        }
    }
    while(i<asize)
    {
        c[k++]=x[i++];
    }
    while(j<bsize){
        c[k++]=b[j++];
    }
    return c;
}
struct segment{
    vector<ll> st[4*N];
    void build(ll s,ll e,ll node){
        if(s==e){
            st[node].pb(a[s]);
            return;
        }
        ll mid=(s+e)/2;
        // cout<<"h1"<<endl;
        build(s,mid,2*node+1);
        build(mid+1,e,2*node+2);
        // cout<<"h2"<<endl;
        st[node]=sortarr(st[2*node+1],st[2*node+2]);
        // cout<<"h3"<<endl;
    }

ll query(ll s,ll e,ll l,ll r,ll node,ll k){
            if(s>r||e<l){
                return 0;
            }
            if(s>=l&&r>=e){
                return st[node].size()-(upper_bound(st[node].begin(),st[node].end(),k)-st[node].begin());
            }
            ll m=(s+e)/2;
            ll q1=query(s,m,l,r,2*node+1,k);
            ll q2=query(m+1,e,l,r,2*node+2,k);
            return (q1+q2);

}
}G;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
   
    
        ll n;
        cin >> n;
        
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
          G.build(0,n-1,0);
        ll t;
        cin>>t;
        // cout<<t<<endl;
      
        while(t--){
            ll l,r,k,ans=0;
            cin>>l>>r>>k;
            l=l^ans;
            r=r^ans;
            k=k^ans;
            ans=0;
            ans=G.query(0,n-1,l-1,r-1,0,k);
            cout<<ans<<endl;
        }
    
}

