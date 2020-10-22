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
    
    int t;cin>>t;while(t--)
    {
        int i,j,n,m;
        cin >>n>>m;
        vector<int> a(n);
        vector<int> b(m);
        map<int,int> mp;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        int ans=-1;
        for(i=0;i<m;i++){
            cin>>b[i];
            if(mp.find(b[i])!=mp.end()){
                ans=b[i];
            }
        }
        if(ans!=-1){
            cout<<"YES\n";
            cout<<"1 "<<ans<<"\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}

