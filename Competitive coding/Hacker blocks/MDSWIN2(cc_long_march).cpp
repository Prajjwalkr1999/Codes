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

struct segment{
    vector<ll> st;
    void init(int n) {
        st.resize(4 * n);
    }
    void build(ll s,ll e,ll node){
        if(s==e){
            st[node]=a[s];
            return;
        }
        ll mid=(s+e)/2;
        // cout<<"h1"<<endl;
        build(s,mid,2*node+1);
        build(mid+1,e,2*node+2);
        // cout<<"h2"<<endl;
        st[node]=(st[2*node+1]^st[2*node+2]);
        // cout<<"h3"<<endl;
    }

ll query(ll s,ll e,ll l,ll r,ll node){
            if(s>r||e<l){
                return 0;
            }
            if(s>=l&&r>=e){
                return st[node];
            }
            ll m=(s+e)/2;
            ll q1=query(s,m,l,r,2*node+1);
            ll q2=query(m+1,e,l,r,2*node+2);
            return (q1^q2);

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
    
   
    ll t;cin>>t;
    while(t--){
        ll n;
        cin >> n;
        
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
          G.init(n);
          G.build(0,n-1,0);
        ll q;
        cin>>q;
        // cout<<t<<endl;
      
        while(q--){
            ll l,r,k,ans=0;
            cin>>l>>r;
            // ans=G.query(0,n-1,l-1,r-1,0);
            // cout<<ans<<endl;
        }

    }
    
}

