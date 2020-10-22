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
        // int i,j,n;
        // cin >> n;
        // vector<int> a(n);
        // for ( i = 0; i < n; i++) {
        //     cin >> a[i];
        // }
        vector<string> a;
        int n=a.size();
        string x;
        unordered_map<string,vector<int>> mp;
        for(int i=0;i<n;i++){
            x=a[i];
            sort(x.begin(),x.end());
            mp[x].push_back(i+1);
        }
        vector<vector<int>> sol;
        for(auto x:mp){
            sol.push_back(x.second);
        }
        return sol;

    }
    return 0;
}

