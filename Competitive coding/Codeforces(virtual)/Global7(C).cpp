#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 998244353;


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
        int i,j,n,k;
        cin >> n >> k;
        vector<P> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i].F;
            a[i].S=i+1;
        }
        vector<P> temp;
        map<int,int> mp;
        vector<int> ind;
        temp=a;
        sort(a.rbegin(),a.rend());
        int sum=0;
        for(i=0;i<k;i++){
            sum+=a[i].F;
            mp[a[i].F]++;
        }
        for(i=0;i<n;i++){
            if(mp[temp[i].F]){
                ind.pb(i);
            }
        }
        int ans=1;
        for(i=0;i<ind.size()-1;i++){
            // cout<<a[i+1].S<<" "<<a[i].S<<"\n";
            int cnt=(ind[i+1]-ind[i]);
            ans=(ans*cnt)%N;
        }

        cout<<sum<<" "<<ans<<'\n';

    }
    return 0;
}

