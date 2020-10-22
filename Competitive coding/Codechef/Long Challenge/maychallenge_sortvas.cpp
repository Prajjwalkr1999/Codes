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
        cin >> n>>m;
        vector<ll> a(n);
        vector<P> pos(m);
        vector<P> posa(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            posa[i].F=a[i];
            posa[i].S=i;
        }
        for(i=0;i<m;i++){
            cin>>pos[i].F>>pos[i].S;
        }  

        sort(posa.begin(),posa.end());      
        vector<ll>vis(n,0);
        for(ll i=0;i<n;i++){
            cnt=0;
            j=i;
            if(vis[i]==1||posa[i].F==i){
                continue;
            }
            while(!vis[j]){
                vis[j]=1;
                j=posa[j].S;
                cnt++;
            }
            if(cnt>0){
                ans+=cnt-1;
            }

        }
        // cout<<endl;
        cout<<ans<<"\n";

    }
}

