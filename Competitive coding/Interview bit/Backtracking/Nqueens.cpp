//Did it myself
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
int ispossible(vector<string> &ans,int n,int row,int col){
    // check row ans column
    for(int i=0;i<n;i++){
        if(ans[row][i]=='Q'){
            return 0;
        }
        if(ans[i][col]=='Q'){
            return 0;
        }
    }
    // check diagonal left
    for(int i=row,j=col;i>=0&&j>=0;i--,j--){
        if(ans[i][j]=='Q'){
            return 0;
        }
    }
    //check diagonal right
    for(int i=row,j=col;i>=0&&j<n;i--,j++){
        if(ans[i][j]=='Q'){
            return 0;
        }
    }
    return 1;
}
void nqueens(vector<vector<string>> &sol,vector<string> &ans,int n,int row){
    if(row==n){
        // cout<<1;
        sol.push_back(ans);
        return;
    }
    for(int i=0;i<n;i++){
        if(ispossible(ans,n,row,i)){
            // cout<<1;
            ans[row][i]='Q';
            // for(auto x:ans) cout<<x<<endl;
            //     cout<<endl;
            nqueens(sol,ans,n,row+1);
            ans[row][i]='.';
        }
    }
    // return;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    // ll t;cin>>t;while(t--)
    {
        ll j, k, m,  cnt = 0, sum = 0;
        int n=4;
        vector<vector<string>> sol;
        vector<string> ans;
        if(n==2||n==3){
            return sol;
        }
        string x;
        for(int i=0;i<n;i++){
            x+='.';
        }
        for(int i=0;i<n;i++){
            ans.push_back(x);
        }
        nqueens(sol,ans,n,0);
        return sol;
        // for(auto x:ans) cout<<x<<endl;
        for(auto x:sol){
            for(auto y:x){
                cout<<y<<endl;
            }
            cout<<endl;
        }

    }
}

