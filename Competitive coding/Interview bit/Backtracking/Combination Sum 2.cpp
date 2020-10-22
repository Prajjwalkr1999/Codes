#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
void comb(vector<int> &a,int n,int sum,int idx,vector<int> &ans,vector<vector<int>> &sol){
    if(sum==0){
        if(find(sol.begin(),sol.end(),ans)==sol.end())
        sol.push_back(ans);
    }
    for(int i=idx;i<n;i++){
        ans.push_back(a[i]);
        sum-=a[i];
        comb(a,n,sum,i+1,ans,sol);
        sum+=a[i];
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
        ll i, j, k, n, m,  cnt = 0, sum = 0;
        cin >> n;
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin>>sum;
        sort(a.begin(),a.end());
        vector<int> ans;
        vector<vector<int>> sol;
        comb(a,n,sum,0,ans,sol);
        for(auto x:sol){
            for(auto y:x){
                cout<<y<<" ";
            }
            cout<<endl;
        }

    }
}

