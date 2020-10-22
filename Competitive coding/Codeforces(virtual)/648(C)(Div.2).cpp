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
        int i,j,n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        map <int , P> mp;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]].F=i;
        }
        for(i=0;i<n;i++){
            cin>>b[i];
            mp[b[i]].S=i;
        }
        int ans=INT_MIN;
        // vector<int> diff;
        map<int,int> diff;
        for(auto x:mp){
            int y=(x.S.F-x.S.S);
            y+=n;
            y%=n;
            diff[y]++;
        }
        for(auto x:diff){
            if(ans<x.S){
                ans=x.S;
            }
        }
        cout<<ans<<"\n";


    }
    return 0;
}

