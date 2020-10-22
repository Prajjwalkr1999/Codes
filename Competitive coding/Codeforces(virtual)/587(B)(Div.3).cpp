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
        vector<pair<ll,ll>> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i].F;
            a[i].S=i+1;
        }
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());

        for(i=0;i<n;i++){
            ans+=(a[i].F*i) +1;
        }

        cout<<ans<<"\n";
        for(auto x:a){
            cout<<x.S<<" ";
        }
        cout<<"\n";
    }
}

