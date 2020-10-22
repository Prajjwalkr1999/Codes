#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e5+7;

vector<int> adj[N];

P bfs(int u,int V){
    int dis[V]; 
    memset(dis, -1, sizeof(dis)); 
  
    queue<int> q; 
    q.push(u); 

    dis[u] = 0; 
  
    while (!q.empty()) 
    { 
        int t = q.front();       q.pop(); 
  
        //  loop for all adjacent nodes of node-t 
        for (auto it = adj[t].begin(); it != adj[t].end(); it++) 
        { 
            int v = *it; 
  
            // push node into queue only if 
            // it is not visited already 
            if (dis[v] == -1) 
            { 
                q.push(v); 
  
                // make distance of v, one more 
                // than distance of t 
                dis[v] = dis[t] + 1; 
            } 
        } 
    } 
  
    int maxDis = 0; 
    int nodeIdx; 
  
    //  get farthest node distance and its index 
    for (int i = 0; i < V; i++) 
    { 
        if (dis[i] > maxDis) 
        { 
            maxDis = dis[i]; 
            nodeIdx = i; 
        } 
    } 
    return make_pair(nodeIdx, maxDis); 
}
// int found=0;
// vector<int> vis(N,0);
// int dfs(int a,int b){
// int cur=0;
//     vis[a]++;
//     for(auto x:adj[a]){
//         if(!vis[x]&&!found&&(x!=b)){
//             cur=1+dfs(x,b);
//         }else if(!found&&x==b){
//             found=1;
//             cur=1;
//             // return (cur+1);
//         }
//     }
//     return cur;
// }
int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int t;cin>>t;while(t--)
    {
        int i,j,n,a,b,da,db;
        cin>>n>>a>>b>>da>>db;
        for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        // int dist=dfs(a,b);
        // cout<<dist<<endl;
        // if(dist<=da){
        //     cout<<"Alice\n";
        //     continue;
        // }
            int initial=0;

            list<P> q;

            vector<bool> vis(n+1,false);

            vis[a]=true;

            q.pb({a,0});

            while(!q.empty())
            {
                P temp=q.front();
                int u=temp.F;
                q.pop_front();

                for(int i=0;i<adj[u].size();i++)
                {
                    if(vis[adj[u][i]]==false)
                    {
                        if(adj[u][i]==b)
                        {
                            initial=temp.S+1;
                            break;
                        }
                        vis[adj[u][i]]=true;
                        q.push_back({adj[u][i],temp.S+1});
                        if(adj[u][i]==b)
                        {
                            initial=temp.S+1;
                            break;
                        }
                    }
                }
            }
            if(initial<=da)
            {
                cout<<"Alice\n";
                continue;
            }
        P t1=bfs(0,N);
        P t2=bfs(t1.F,N);
        cout<<t2.second<<endl;
        if(2*da>=min(t2.second,db)){
            cout<<"Alice\n";
        }else{
            cout<<"Bob\n";
        }
        for(int i=0;i<N;i++){
            adj[i].clear();
        }
        // vis.clear();
        // cur=0;
        // found=0;
    }
    return 0;
}

