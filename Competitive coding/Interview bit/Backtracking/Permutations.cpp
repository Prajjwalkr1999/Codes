#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
void solve(vector<int> &a,int n,int idx,vector<vector<int>> &sol){
    if(idx==n-1){ 
        sol.push_back(a);
        return;
    }
        // if(find(sol.begin(),sol.end(),a)==sol.end())
        // cout<<1;
    // }
    for(int i=idx;i<n;i++){
        swap(a[idx],a[i]);
        solve(a,n,idx+1,sol);
        swap(a[idx],a[i]);
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
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<vector<int>> sol;
        solve(a,n,0,sol);
        sort(sol.begin(),sol.end());
        for(auto x:sol){
            for(auto y:x){
                cout<<y<<" ";
            }
            cout<<endl;
        }
    }
}

