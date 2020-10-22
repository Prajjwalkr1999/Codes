#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
struct graph{
    map<ll,list<ll>> adjl;
}G;

void addedge(ll u,ll v){
    G.adjl[u].push_back(v);
    G.adjl[v].push_back(u);
}

void bfs(ll node,ll dist[],ll n){
    queue<ll> q;
    q.push(node);
    for(ll i=1;i<=n;i++) dist[i]=0;

    while(!q.empty())
    {
        ll st=q.front();
        q.pop();
            // cout<<"St : "<<st<<endl;
        for(auto nei:G.adjl[st]){
            if(dist[nei]==0&&nei!=node){
            q.push(nei);
            dist[nei]=dist[st]+6;}
            // cout<<"Nei : "<<nei<<endl;
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
        ll i, j, u,v,x, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n>>m;
        // ll a[n];
        // cout<<"n: "<<n<<endl;
        // cout<<"m: "<<m<<endl;
        for ( i = 0; i < m; i++) {
            cin>>u>>v;
            // if(u!=1&&v!=1)
            // cout<<"u : "<<u<<endl;
            // cout<<"v : "<<v<<endl;
            addedge(u,v);
        }
        cin>>x;
        ll visited[n+1];
        for(ll i=1;i<=n;i++) visited[i]=0;
        bfs(x,visited,n);
        for(ll i=1;i<=n;i++) 
         {
            if(visited[i]==0&&i!=x){
                cout<<-1<<" ";
            }else if(i!=x){
                cout<<visited[i]<<" ";
            }
        }
    cout<<endl;
    G.adjl.clear();
    }

}

