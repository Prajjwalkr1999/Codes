#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

const int N=101;
vector<int> gr[N];
int ans[N];

void dfs(int curr, int parent, int mul)
{
    // cout<<curr<<" "<<parent<<" "<<mul;
    int temp=ans[curr];
    temp*=mul;
    temp/=__gcd(ans[curr],mul);
    ans[curr]=temp;

    for(auto x:gr[curr])
    {
        if(x!=parent)
            dfs(x,curr,mul+1);
    }

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
        int n;
        cin>>n;
        
        for(int i=1;i<=100;i++)
        {
            gr[i].clear();
            ans[i]=1;
        }
        for(int i=0;i<n-1;i++)
        {
            int a,b;
            cin>>a>>b;
            gr[a].pb(b);
            gr[b].pb(a);
        }

        vector<int> leaf;
        for(int i=1;i<=100;i++)
        {
            if(gr[i].size()==1)
            {
                leaf.pb(i);
            }
        }

        for(auto x:leaf)
            dfs(x,-1,1);

        int x=0,i,j;
        for(i=0;i<n-1;i++){
            for(j=0;j<gr[i].size();i++){
                x=__gcd(x,gr[i][j]);
            }
            if(x>0)
            ans[i+1]/=x;
        }
        for(int i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";

            
    }
    return 0;
}