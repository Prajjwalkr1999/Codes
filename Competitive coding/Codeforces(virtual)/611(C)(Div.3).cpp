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
    
    // ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        std::vector<ll> a(n+1);
        std::vector<ll> vis(n+1,0);
        std::vector<ll> giv;
        std::vector<ll> rec;
        for ( i = 1; i < n+1; i++) {
            cin >> a[i];
            if(a[i]==0){
                giv.pb(i);
            }else{
                vis[a[i]]=1;
            }
        }
        // for(i=1;i<=n;i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<"\n";
        for(i=1;i<=n;i++){
            if(vis[i]==0){
                rec.pb(i);
            }
        }

        sort(giv.begin(), giv.end());
        sort(rec.begin(), rec.end());
        if(giv[giv.size()-1]==rec[rec.size()-1]){
            swap(rec[rec.size()-2],rec[rec.size()-1]);
        }
        for(i=0;i<giv.size();i++){
            if(giv[i]==rec[i]&&(i<giv.size()-1)){
                swap(rec[i],rec[i+1]);
                a[giv[i]]=rec[i];
            }else{
                a[giv[i]]=rec[i];
            }
        }
        for(i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
}

