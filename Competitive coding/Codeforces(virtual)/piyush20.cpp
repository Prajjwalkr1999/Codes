#include<bits/stdc++.h>
using namespace std;

#define int             long long
#define ld              long double
#define pb              push_back
#define P               pair<int,int>
#define F               first
#define S               second
#define vi              vector<int>
#define ps(x,y)         fixed<<setprecision(y)<<x
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int N = 100005;
const int mod = 1e9 + 7;
int mx = -1e18 , mn = 1e18;

void inp_out()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

vi g[N];
int d,a,b,da,db;
int cur_dist;


// void dfs_a(int cur , int par , int dep){

//     if(cur == b){
//         cur_dist = dep;
//         return;
//     }

//     for(auto ele:g[cur]){
//         if(ele == par){
//             continue;
//         }
//         dfs_a(ele , cur , dep+1);
//     }

// }

// int dfs_diameter(int cur, int par){ 
//     int m1 = 0, m2 = 0;
//     for(auto ele: g[cur]){
//         if(ele == par){
//             continue;
//         }
//         int c = dfs_diameter(ele,cur);
//         if(m1 <= c){
//             m2 = m1;
//             m1 = c;
//         }else if(c > m2){
//             m2 = c;
//         }
//     }
//     d = max(d, m1+m2);
//     return m1 + 1;
// }
int diam = 0;
 int depth[N];
int dfs(int x, int p) {
    int len = 0;
    for(int y : g[x]) {
        if(y != p) {
            depth[y] = depth[x] + 1;
            int cur = 1 + dfs(y, x);
            diam = max(diam, cur + len);
            len = max(len, cur);
        }
    }
    return len;
}
int32_t main(){

    FIO;
    inp_out();
    
    int t; cin>>t; while(t--)
    {
        int i,j,k,n,m,ans = 0,cnt = 0,sum = 0;
        cin>>n;

        for(i=0;i<=n;i++){
            g[i].clear();
        }
        cin>>a>>b>>da>>db;

        for(i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            g[x].pb(y);
            g[y].pb(x);
        }
        diam=0;
        // dfs_a(a,0,0);
        // cout<<cur_dist<<endl;
        depth[a]=0;
        dfs(a,-1);
        if(depth[b] <= da){
            cout<<"Alice\n";
        }else{
            // cout<<d<<endl;
            if(min(diam , db) <= 2*da){
                cout<<"Alice\n";
            }else{
                cout<<"Bob\n";
            }
        }

    }
    return 0;
}