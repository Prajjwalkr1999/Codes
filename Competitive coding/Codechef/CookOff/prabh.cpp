#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

const int N = 200005;

vector<int> gr[N];
vector<int> vis;
map<int,int> highest;
void bfs(vector<int> &high)
{
    // int root=high[0];
    vector<int> best;
    for(int i=0;i<high.size();i++)
    {

        if(vis[high[i]])
            continue;

        vector<int> curr;
        queue<int> q;
        q.push(high[i]);
        // vis[high[0]]++;
        while(!q.empty())
        {

            // cout<<"sdsdsd";
            int gg=q.front();

            // cout<<gg<<" ";
            q.pop();
            if(vis[gg])
                continue;
            vis[gg]++;
            curr.pb(gg);

            for(auto x:gr[gg])
            {
                
                if(highest[x]>0&&vis[x]==0)
                {
                    // cout<<"dsd";
                    q.push(x);
                    // vis[]
                }

            }
        }
        if(curr.size()>best.size())
        {
            best.clear();
            best=curr;
            curr.clear();
        }
    }

    cout<<best.size()<<"\n";
    for(auto x:best)
        cout<<x<<" ";
    cout<<"\n";
    

}

int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t; cin>>t; while(t--)
    {

        for(int i=0;i<N;i++)
        {
            gr[i].clear();
        }
        // vis.clear();
        highest.clear();
        int n,m;
        cin>>n>>m;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        for (int i = 0; i < n; ++i)
        {
            cin>>b[i];
        }
        vis.resize(N,0);

        vector<int> high;
        float curr=-1;
            for(int i=0;i<n;i++)
            {
                float gg=(float)a[i]/(float)b[i];
                if(gg>curr)
                {
                    high.clear();
                    curr=gg;
                }
                if(gg==curr)
                    high.pb(i+1);
            }
            // cout<<high.size();
        // for(auto x:high)
        //     cout<<x<<" ";
        for(int i=0;i<m;i++)
            {
                int x,y;
                cin>>x>>y;
                gr[x].pb(y);
                gr[y].pb(x);
            }

            if(high.size()==1)
            {
                cout<<high[0]<<"\n";
                continue;
            }
            for(auto x:high)
                highest[x]++;
            bfs(high);

            
    }
    return 0;
}