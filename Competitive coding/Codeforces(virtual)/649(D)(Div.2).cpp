//Used shortest cycle code from gfg.
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

 int n = 1e5;
vector<int> gr[N];
vector<int> cycles[N]; 
  
// Function to mark the vertex with 
// different colors for different cycles 
void dfs_cycle(int u, int p, int color[], 
               int mark[], int par[], int& cyclenumber) 
{ 
  
    // already (completely) visited vertex. 
    if (color[u] == 2) { 
        return; 
    } 
  
    // seen vertex, but was not completely visited -> cycle detected. 
    // backtrack based on parents to find the complete cycle. 
    if (color[u] == 1) { 
  
        cyclenumber++; 
        int cur = p; 
        mark[cur] = cyclenumber; 
  
        // backtrack the vertex which are 
        // in the current cycle thats found 
        while (cur != u) { 
            cur = par[cur]; 
            mark[cur] = cyclenumber; 
        } 
        return; 
    } 
    par[u] = p; 
  
    // partially visited. 
    color[u] = 1; 
  
    // simple dfs on graph 
    for (int v : graph[u]) { 
  
        // if it has not been visited previously 
        if (v == par[u]) { 
            continue; 
        } 
        dfs_cycle(v, u, color, mark, par, cyclenumber); 
    } 
  
    // completely visited. 
    color[u] = 2; 
} 
  
// add the edges to the graph 
void addEdge(int u, int v) 
{ 
    graph[u].push_back(v); 
    graph[v].push_back(u); 
} 
  
// Function to print the cycles 
void printCycles(int edges, int mark[], int& cyclenumber) 
{ 
  
    // push the edges that into the 
    // cycle adjacency list 
    for (int i = 1; i <= edges; i++) { 
        if (mark[i] != 0) 
            cycles[mark[i]].push_back(i); 
    } 
  
    // print all the vertex with same cycle 
    // for (int i = 1; i <= cyclenumber; i++) { 
    //     // Print the i-th cycle 
    //     cout << "Cycle Number " << i << ": "; 
    //     st.pb(cycle[i]); 
    // } 
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
        int i,j;
        cin >> n>>m>>k;
        vector<int> gr(n);
        int x,y;
        for(int i=0,i<m;i++){
            cin>>x>>y;
            gr[x].pb(y);
            gr[y].pb(x);
        }
         int color[N]; 
    int par[N]; 
  
    // mark with unique numbers 
    int mark[N]; 
  
    // store the numbers of cycle 
    int cyclenumber = 0; 
    int edges = 13; 
  
    // call DFS to mark the cycles 
    dfs_cycle(1, 0, color, mark, par, cyclenumber); 
  
    // function to print the cycles 
    printCycles(edges, mark, cyclenumber); 
    vector<vector<int>> ans;
    int min=INT_MAX;
    for (int i = 1; i <= cyclenumber; i++) { 
        // Print the i-th cycle 
        // cout << "Cycle Number " << i << ": "; 
        if(cycles[i].size()<min){
            min=cycles[i].size();
        }
    } 

        

    }
    return 0;
}

