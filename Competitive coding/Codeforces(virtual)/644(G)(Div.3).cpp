#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
 
 
const int N = 55;
vector<vector<ll>> ans;
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
        ans.clear();
        ans.resize(N,vector<ll> (N,0));
        ll n,m,a,b;
        cin >> n >> m >> a >> b;
        ll cur = 0;
        for(ll i = 0; i < n; i++)
        {
            ll cnt = a;
            while(cnt > 0)
            {
                ans[i][cur] = 1;
                cur++;
                cur %= m;
                cnt--;
            }
        }
        ll flag = 1;
        for(ll j = 0; j < m; j++)
        {
            ll cnt = 0;
            for(ll i = 0; i < n; i++)
                cnt += ans[i][j];
            if(cnt != b)
                flag = 0;
        }
        if(!flag)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for(ll i = 0; i < n; i++)
            {
                for(ll j = 0; j < m; j++)
                    cout << ans[i][j];
                cout << endl;
            }
        }
    }
}