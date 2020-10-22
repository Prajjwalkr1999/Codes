#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

// const int N = 1e6+7;


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
        // vector<int> a(n);
        int N=n;
        int paths[n-1][2];
        for ( i = 0; i < n-1; i++) {
            cin >> paths[i][0]>>paths[i][1];
        }
        // int n=paths.size();
        vector<int> g[N+1ll];
        for(int i=0;i<n-1;i++){
                g[paths[i][0]].push_back(paths[i][1]);
                // g[paths[i][1]].push_back(paths[i][0]);
        }
        // queue<int> q;
        // // q.push(1);
        // vector<int> ans(N,-1);
        // for(int i=1;i<=N;i++){
        //     cout<<1<<endl;
        //     if(ans[i-1]==-1){
        //         q.push(i);
        //         while(!q.empty()){
        //                 int y=q.front();
        //             cout<<y<<endl;
        //                 q.pop();
        //                 int col[5];
        //                 col[1]=-1;
        //                 col[2]=-1;
        //                 col[3]=-1;
        //                 col[4]=-1;
        //                 if(ans[y-1]==-1){
        //                     for(auto x:g[y]){
        //                         if(ans[x-1]!=-1){
        //                             col[ans[x-1]]++;
        //                         }else{
        //                             q.push(x);
        //                         }
        //                     }
        //                     for(int i=0;i<4;i++){
        //                         if(col[i+1]==-1){
        //                             ans[y-1]=i+1;
        //                             break;
        //                         }
        //                     }
        //                 }
        //         }
        //     }
        // }
        // int vis[N+1];
        int ans=-1;
        // memset(vis,-1,sizeof(vis));
        for(int i=1;i<=N;i++){
            g[i].push_back(0);
            cout<<g[i][0]<<endl;
            if(g[i].size()==1){
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
        // for(auto x: ans){
        //     cout<<x<<" ";
        // }
        // cout<<endl;

    }
    return 0;
}

