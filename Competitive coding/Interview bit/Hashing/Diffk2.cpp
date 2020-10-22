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
        int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n>>k;
        vector<int> a(n);
        map<int,int> mp;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        for(auto x:mp){
            int y=a[i]-k;
            if(mp.find(y)!=mp.end()){
                if(y!=a[i]||mp[a[i]]>1)
                    return 1;
                else 
                    continue;
            }
        }
        return 0;
    }
    return 0;
}

