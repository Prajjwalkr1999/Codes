#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;

ll calc(ll a[],ll n,ll m, ll c){
    unordered_map<int,int> ans;
    ll res=0;
    for(ll i=0;i<n;i++){
        ans[a[i]]++;
    }

    for(ll i=0;i<n;i++){
        ll x=a[i];
        ll y=(m*x)+c;

        if(ans.find(y)!=ans.end()){
            res+=ans[y];
        }

        if(x==y){
            res--;
        }
    }

    return res;

}
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
        ll n, m, ans = 0, c;
        cin >> n>>m>>c;
        ll a[n];
        for ( ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ans=calc(a,n,m,c);
        cout<<ans<<endl;
    }
}

