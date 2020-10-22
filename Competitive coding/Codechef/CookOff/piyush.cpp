#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

const int N = 200005;

vector<int> gr[N];
bool vis[N];
int a[N];
int b[N];
int even=0,odd=0;


struct dsu {
    vector<int> p, sz;
    int comp;
    void init(int NN) {
        sz.clear(); p.clear();
        p.resize(NN); sz.resize(NN, 1);
        iota(p.begin(), p.end(), 0);
        comp = NN;
    }
    int get(int x) {
        return (x == p[x] ? x : (p[x] = get(p[x])));
    }
    void unite(int x, int y) {
        x = get(x);
        y = get(y);
        if (x != y) {
            p[x] = y;
            sz[y] += sz[x];
            sz[x] = 0;
            comp--;
        }
    }
} G;

int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t; cin>>t; while(t--)
    {
        int i,j,k,n,m,ans = 1,cnt = 0,sum = 0;
        double mx = 0;
        cin>>n>>m;

        for(i=1;i<=n;i++){
            gr[i].clear();
            vis[i] = false;
        }

        for(i=1;i<=n;i++){
            cin>>a[i];
        }
        for(i=1;i<=n;i++){
            cin>>b[i];
            mx = max(mx , (double)a[i]/b[i]);
        }

        vector<int> v;
        for(i=1;i<=n;i++){
            double cur = (double)a[i]/b[i];
            if(cur == mx){
                v.pb(i);
            }
        }

        for(i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            gr[u].pb(v);
            gr[v].pb(u);
        }

        G.init(n+1);
        for(auto ele: v){
            if(vis[ele]){
                continue;
            }
            for(auto nb : gr[ele]){
                if(!vis[nb] && (((double)a[nb] / b[nb] ) == mx) ){
                    G.unite(nb,ele);
                    vis[nb] = true;
                }
            }
        }

        int x;
        for(i=1;i<=n;i++){
            if(G.sz[i] > ans){
                x = G.p[i];
            }
            ans = max(ans , G.sz[i]);
        }

        if(ans == 1){
            cout<<ans<<"\n";
            cout<<v[0]<<"\n";
            continue;
        }

        cout<<ans<<"\n";

        for(i=1;i<=n;i++){
            if(G.p[i] == x){
                cout<<i<<" ";
            }
        }
        cout<<"\n";




    }
    return 0;
}