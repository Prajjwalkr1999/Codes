#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;
vector<vector<char>> a;
vector<vector<int>> vis;

int dfs(int i,int j){
    if(i>=a.size()||i<0||j>=a[i].size()||j<0){
        return 0;
    }

    if(vis[i][j]!=-1){
        return 1;
    }
    int ans1=0,ans2=0,ans3=0,ans4=0;
    if(a[i][j]=='X'){
        return 1;
    }
    if(a[i][j]=='O'){
        vis[i][j]=1;
        // a[i][j]='X';
        ans1=dfs(i-1,j);
        ans2=dfs(i+1,j);
        ans3=dfs(i,j-1);
        ans4=dfs(i,j+1);
    }
    if(ans1&&ans2&&ans3&&ans4){
        // vis[i][j]=1;
        a[i][j]='X';
    }
    return ans1&&ans2&&ans3&&ans4;
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
        vector<vector<char>> v(n,vector<char>(n,'X'));
        for ( i = 0; i < n; i++) {
            for(j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        a=v;
        vis.resize(n+1,vector<int> (n+1,-1));
        // memset(vis,-1,sizeof(vis));
        // for(i=0;i<n;i++){
        //     for(j=0;j<n;j++){
        //         if(a[i][j]=='O'&&vis[i][j]==-1){
        //             dfs(i,j);
        //         }
        //     }
        // }
        int c=v[0].size();
        for(int i=0;i<c;i++){
            if(a[0][i]!='X')dfs(0,i);
            if(a[n-1][i]!='X')dfs(n-1,i);
        }
        for(int i=0;i<n;i++){
            if(a[i][0]!='X')dfs(i,0);
            if(a[i][c-1]!='X')dfs(i,c-1);
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }




    }
    return 0;
}

