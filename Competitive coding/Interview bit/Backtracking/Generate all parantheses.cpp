#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
void solve(int open,int n,int close,string ans,vector<string> &sol){
    if(close==n){
        // cout<<1;
        sol.push_back(ans);
        return;
    }
    if(open<n){
        ans+='(';
        // sum+=1;
        solve(open+1,n,close,ans,sol);
        ans.pop_back();
    }
    if(close<open){
        ans+=')';
        // sum-=1;
        solve(open,n,close+1,ans,sol);
        ans.pop_back();
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
    
    // ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, cnt = 0, sum = 0;
        n=3;
        vector<string> sol;
        string ans;
        // void solve(int sum,int n,string ans,vector<string> &sol){
        solve(0,n,0,ans,sol);
        for(auto x:sol){
            cout<<x<<"\n";
        }

    }
}

