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
        vector<ll> gg(n+1,0);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            gg[a[i]]++;
        }
        // cout<<1;
        // for(auto x:gg){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        sort(gg.begin(),gg.end());
        reverse(gg.begin(), gg.end());

        vector<ll> vis(n+1,0);

        for(auto x:gg){
            // cout<<x<<"\n";
            if(!vis[x]){
                ans+=x;
                vis[x]++;
            }else{
                while(x>=0){
                x--;
                if(!vis[x]){
                    ans+=(x);
                    vis[x]++;
                    break;
                }
               }
            }
        }
        cout<<ans<<"\n";

    }
}

