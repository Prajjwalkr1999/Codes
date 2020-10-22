#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

// const int N = 1e6+7;
bool cycle;
const int N=100005;
vector<int> g[N];
vector<int> vis(N);
bool cycle_detect(int cur,int par){
    vis[cur]=1;
    for(auto x:g[cur]){
        if(!vis[x]){
            cycle_detect(x,cur);
        }else if(x!=par&&vis[x]==1){
            cycle=1;
        }
    }
    vis[cur]=2;
}

int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    // int t;cin>>t;while(t--)
    {
        int i,j,n;
        cin >> n;
        vector<int> b(30);
        vector<int> c(30);
        for ( i = 0; i < 30; i++) {
            cin >> b[i];
        }
        for(i=0;i<30;i++){
            cin>>c[i];
        }
        vis.resize(N,0);
        for(int i=1;i<=n;i++){
            g[i].clear();
        }
        for(int i=0;i<b.size();i++){
            g[b[i]].push_back(c[i]);
        }
        cycle=false;
        for(int i=1;i<=n;i++){
            // cout<<"H"<<i<<endl;
            if(vis[i]==0){
                cycle_detect(i,0);
                 if(cycle){
                    break;
                 }
            }
        }
        if(cycle)
            cout<<0<<endl;
        else
            cout<<1<<endl;

    }
    return 0;
}

