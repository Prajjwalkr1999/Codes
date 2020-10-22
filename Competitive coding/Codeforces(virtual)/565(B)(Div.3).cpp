#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        vector<ll> a(n);
        map<ll,ll> mp;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]%3!=0)
                mp[a[i]%3]++;
            else
                ans++;
        }

    
            cnt=min(mp[1],mp[2]);
            ans+=cnt;
            mp[1]-=cnt;
            mp[2]-=cnt;
            ans+=(mp[1]+mp[2])/3;
            // ans+=min(cnt,mp[2]);
            cout<<ans<<"\n";

    }
}

