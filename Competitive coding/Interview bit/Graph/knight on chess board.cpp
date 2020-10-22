#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;


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
        queue<pair<int,int>> q;
        q.push(sx,sy);
        vector<vector<int>> vis(a+1,vector<int>(b+1,0));
        int level=0;
        while(!q.empty()){
            level+=1;
            int len=q.size();
            for(int i=0;i<len;i++){
                pair<int,int> temp=q.front();
                q.pop();
                for(int j=0;j<8;j++){
                    int x=temp.first+dx[i];
                    int y=temp.second+dy[i];
                    if(x==tx&&y==ty){
                        return level+1;
                    }
                    if(!vis[x][y]){
                        vis[x][y]=1;
                        q.push({x,y});
                    }
                }
            }
        }
    }
    return 0;
}

