#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <string> 
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <utility>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <iomanip> 
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp> 
//setbase - cout << setbase (16)a; cout << 100 << endl; Prints 64
//setfill -   cout << setfill ('x') << setw (5); cout << 77 <<endl;prints xxx77
//setprecision - cout << setprecision (14) << f << endl; Prints x.xxxx
//cout.precision(x)  cout<<fixed<<val;  // prints x digits after decimal in val

using namespace std;
// using namespace __gnu_pbds;
#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define ll long long
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1000*1000*1000+7)
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define int ll

// typedef tree<
// int,
// null_type,
// less<int>,
// rb_tree_tag,
// tree_order_statistics_node_update>
// ordered_set;


//std::ios::sync_with_stdio(false);
int vis[200005],choose[200005],a[200005],b[210005];
vector<vi>adj(200005);
vi provinces;
vi res;
int dfs(int u){
    vis[u]=1;
    int i;
    provinces.pb(u);
    rep(i,adj[u].size()){
        if(vis[adj[u][i]]==0 && choose[adj[u][i]]==1){
            dfs(adj[u][i]);
        }
    }
}
main(){
    // std::ios::sync_with_stdio(false); cin.tie(NULL);
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
    
    
        #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
    int t;
    cin>>t;
    while(t--){
        int n,m,i,u,v,ans=0,num,den,max_id;
        provinces.clear();
        res.clear();
        cin>>n>>m;
        rep(i,n){
            adj[i].clear();
            vis[i]=0;
            choose[i]=0;
            cin>>a[i];
        }
        rep(i,n){
            cin>>b[i];
        }
        rep(i,m){
            cin>>u>>v;
            u--;
            v--;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        num=a[0];
        den=b[0];
        f(i,1,n){
            if(a[i]*den>num*b[i]){
                num=a[i];
                den=b[i];
            }
        }
        rep(i,n){
            if(a[i]*den==num*b[i]){
                choose[i]=1;
            }
            else{
                choose[i]=0;
            }
        }
        fd(i,n-1,0){
            if(vis[i]==0 && choose[i]==1){
                provinces.clear();
                dfs(i);
                if(provinces.size()>res.size())
                    res=provinces;
            }
        }
        cout<<res.size()<<endl;
        int siz=res.size();
        // fd(i,siz-1,0){
        random_shuffle(all(res));
        rep(i,siz){
            cout<<res[i]+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}