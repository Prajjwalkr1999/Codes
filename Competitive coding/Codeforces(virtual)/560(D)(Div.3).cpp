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
        vector<ll> v;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
            ans=a[0]*a[n-1];
            for(i=2;i*i<=ans;i++){
                if(ans%i==0){
                    v.pb(i);
                    if(i!=ans/i){
                        v.pb(ans/i);
                    }
                }
            }
            sort(v.begin(), v.end());
            if(a==v){
                cout<<ans<<"\n";    
            }else{
            cout<<-1<<"\n";}
    }
}

