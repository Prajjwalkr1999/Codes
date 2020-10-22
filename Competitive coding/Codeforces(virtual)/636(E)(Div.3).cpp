#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;

vector<vector<ll>> g;

void bfs(ll src,vector<ll> &dis){
    dis[src]=0;
    queue<ll> q;
    q.push(src);
    while(!q.empty()){
        ll child=q.front();
        q.pop();
        for(auto ele:g[child]){
            if(dis[ele]==-1){
                dis[ele]=dis[child]+1;
                q.push(ele);
            }
        }
    }
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
        ll n,m,a,b,c,x,y;
        cin >> n>>m>>a>>b>>c;
        vector<ll> price(m);
        vector<ll> pre(m+1,0);
        for (ll i = 0; i < m; i++) {
            cin >> price[i];
        }
        sort(price.begin(),price.end());
        for(ll i=0;i<m;i++){
             pre[i+1]=pre[i]+price[i];
        }

        // clear 2d vector along with resizing.
        g=vector<vector<ll>>(n);
        for(ll i=0;i<m;i++){
            cin>>x>>y;
            --x; --y;
            g[x].pb(y);
            g[y].pb(x);
        }

        vector<ll> disa(n+1,-1),disb(n+1,-1),disc(n+1,-1);
        --a;--b;--c;
        bfs(a,disa);
        bfs(b,disb);
        bfs(c,disc);

        ll ans=1e18;
        for(ll i=0;i<n;i++){
            if(disa[i]+disb[i]+disc[i]>m) continue;
            ans=min(ans,(pre[disb[i]])+pre[disa[i]+disb[i]+disc[i]]);
        }
        cout<<ans<<"\n";
    }
}

