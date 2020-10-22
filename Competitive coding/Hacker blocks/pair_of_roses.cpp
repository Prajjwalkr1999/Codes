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
        pair<ll,ll> p[n];
        for ( i = 0; i < n; i++) {
            cin >> p[i].F;
            p[i].S=i;
        }

        cin>>m;
         // for ( int i = 0; i < n; i++) {
         //         cout<<p[i].F;   
         //        }

        pair<ll,pair<ll,ll>> st[n];
        for(i=0;i<n;i++){
            st[i].F=INT_MAX;
            st[i].S.F=INT_MAX;
            st[i].S.S=INT_MAX;
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if((p[i].F+p[j].F)==m){
                    st[i].F=p[j].F-p[i].F;
                    st[i].S.F=i;
                    st[i].S.S=j;
                }
            }
        }
        sort(st,st+n);
        ll x,y;
        x=st[0].S.F;
        y=st[0].S.S;
        // cout<<x<<" "<<y<<endl;
        ll ans1,ans2;
        if(p[st[0].S.F].F>p[st[0].S.S].F){
            ans1=p[y].F;
            ans2=p[x].F;
        }else{
            ans1=p[x].F;
            ans2=p[y].F;
        }
        cout<<"Deepak should buy roses whose prices are "<<ans1<<" and "<<ans2<<endl;

    }
}

