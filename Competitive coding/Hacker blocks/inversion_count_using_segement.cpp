#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
struct segment{
    vector<ll> st;
    void init(ll n){
        st.resize(4*n);
        std::fill(st.begin(),st.end(),0);
    }

    void update(ll index,ll s,ll e,ll node){
        if(index>e||index<s) return;
        if(s==e){
            st[node]=1;
            return;
        }
        ll mid=(s+e)/2;
        update(index,s,mid,2*node+1);
        update(index,mid+1,e,2*node+2);
        st[node]=st[2*node+1]+st[2*node+2];
    }
    int query(ll l,ll r,ll s,ll e,ll node){
        if(l>e||r<s){
            return 0;
        }
        if(s>=l&&e<=r){
            return st[node];
        }
        ll mid=(s+e)/2;
        ll q1=query(l,r,s,mid,2*node+1);
        ll q2=query(l,r,mid+1,e,2*node+2);
        return q1+q2;
    }
    void print(ll n){
         for ( ll i = 0; i < 4*n; i++) {
                 cout<<st[i]<<" ";   
                }
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
    
    ll t;cin>>t;while(t--)
    {
        ll n;
        cin >> n;
        G.init(n);
        ll num;
        pair<ll,ll> a[n];

        for ( ll i = 0; i < n; i++) {
            cin >>num;
            a[i].F=num;
            a[i].S=i;
       }

        sort(a,a+n);
   
        ll ans=0;
        
         for ( ll i = 0; i < n; i++) {
                 G.update(a[i].S,0,n-1,0);   
                 ans+= G.query(a[i].S+1,n-1,0,n-1,0);
                }
              
                cout<<ans<<endl;
                // G.print(n);
    }
}

