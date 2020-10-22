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
        ll i, j,l, r, n, m, cnt = 0, sum = 0;
        cin >> n>>m;
        vector<ll> a(m+1,0);
        for ( i = 0; i < n; i++) {
            cin >> l>>r;
            for(j=l;j<=r;j++){
                a[j]++;
            }
        }
        vector<ll> ans;
        for(i=1;i<=m;i++){
            if(a[i]==0){
                ans.pb(i);
            }
        }
        cout<<ans.size()<<"\n";
        for(auto x:ans ){
            cout<<x<<" ";
        }
        cout<<"\n";

    }
}

