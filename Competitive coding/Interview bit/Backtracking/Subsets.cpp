#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;

void subset1(vector<int> &a,int n,int idx,vector<int> &ans,vector<vector<int>> &sol){
    
    sol.push_back(ans);
    for(int i=idx;i<n;i++){
        ans.push_back(a[i]);
        subset1(a,n,i+1,ans,sol);
        ans.pop_back();
    }
    return ;
}
void subset2(vector<int> &a,int n,int idx,vector<int> &ans,vector<vector<int>> &sol){

   if(find(sol.begin(),sol.end(),ans)==sol.end())
        sol.push_back(ans);

    for(int i=idx;i<n;i++){
        ans.push_back(a[i]);
        subset2(a,n,i+1,ans,sol);
        ans.pop_back();
    }
    return ;
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
        cin >> n;
        vector<int>a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        // int n=a.size();
        vector<int> ans;
        vector<vector<int>> sol;
        subset2(a,n,0,ans,sol);
        // return sol;
        for(auto x:sol){
            for(auto y:x){
                cout<<y<<" ";
            }
            cout<<endl;
        }
    }
}

