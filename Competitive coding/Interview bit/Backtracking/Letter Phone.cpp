#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
char keypad[][11] = { "0", "1", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void solve(vector<string> &sol,string ans,int idx,int n,string a){
    if(idx==n){
        sol.push_back(ans);
    }
    int val=a[idx]-'0';
    for(int i=0;keypad[val][i]!='\0';i++){
        ans.push_back(keypad[val][i]);
        solve(sol,ans,idx+1,n,a);
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
        string s="136";
        n=s.size();
        vector<string> sol;
        string ans;
        solve(sol,ans,0,n,s);
        for(auto x:sol){
            cout<<x<<"\n";
        }

    }
}

