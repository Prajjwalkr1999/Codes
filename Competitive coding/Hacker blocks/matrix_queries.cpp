#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
ll r;
vector< vector<ll> > temp(2,vector<ll>(2,0));

// struct matrix
// {vector<vector<ll>>(2,vector<ll>(2));
// }M;
vector<vector<vector<ll>>> a(N,vector<vector<ll>>(2,vector<ll>(2,0)));
void assign(ll a){
    r=a;
}
vector<vector<ll>> multiply(vector<vector<ll>> a,vector<vector<ll>> b){
    vector<vector<ll>> c(2,vector<ll>(2,0));
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                c[i][j]+=((a[i][k]*b[k][j])%r);
                c[i][j]%=r;
            }
        }
    }
    return c;
}
struct segment{
    vector<vector<vector<ll>>> st;
    void init(ll n){
        st.resize(4*n);
    }
        void build(ll s,ll e,ll node){
            if(s==e){
                st[node]=a[s];
                return;
            }
            ll mid=(s+e)/2;
            build(s,mid,2*node+1);
            build(mid+1,e,2*node+2);
            st[node]=multiply(st[2*node+1],st[2*node+2]);
        }
         vector<vector<ll>> query(ll s,ll e,ll l,ll r,ll node){
            if(s>r||e<l){
                return temp;
            }
            if(s>=l&&r>=e){
                return st[node];
            }
            ll m=(s+e)/2;
            
            return multiply(query(s,m,l,r,2*node+1),query(m+1,e,l,r,2*node+2));
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
    temp[0][0]=1;
    temp[1][1]=1;
    ll n,r,q;
    cin>>r>>n>>q;
    assign(r);
    
    
    for(ll i=0;i<n;i++){
        cin>>a[i][0][0]>>a[i][0][1]>>a[i][1][0]>>a[i][1][1];
    } 
    G.init(n);
    G.build(0,n-1,0);
    while(q--){
        vector<vector<ll>> ans;
        ll l,r;
        cin>>l>>r;
        ans=G.query(0,n-1,l-1,r-1,0);
        for(int i = 0; i < 2; i++){
            for(int j = 0; j<2; j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<endl;
    }
    return 0;
}

