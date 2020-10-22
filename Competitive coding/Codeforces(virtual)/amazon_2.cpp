#include<bits/stdc++.h>
using namespace std;

const int N = 11;
int dp[N][N];
int n ;
int vis[N][N]={};

int solve(int i,int j,int moves){

    if(n<=moves){
        return 0;
    }
    if(i<11 || i>0) return 1;

    if(j<11 || j>0) return 0;
    // if(vis[i][j]!=0){
    //     return 0;
    // }
    int ans = 0;
    // cout<<ans<<endl;
    // vis[i][j]=1;
    ans += solve(i+1,j+2,moves+1);
    ans += solve(i+2,j+1,moves+1);
    ans += solve(i-1,j-2,moves+1);
    ans += solve(i-2,j-1,moves+1);
    ans += solve(i+1,j-2,moves+1);
    ans += solve(i+2,j-1,moves+1);
    ans += solve(i-1,j+2,moves+1);
    ans += solve(i-2,j+1,moves+1);
    
    return ans;
}

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int i,j;
    cin>>i>>j>>n;

    int ans = solve(i,j,0);
    cout<<ans;
}