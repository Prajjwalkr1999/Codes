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
        cin >> n>>k;
        vector<ll> a(n);
        set<ll> s;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
        }
        if(s.size()>k){
            cout<<-1<<endl;
            continue;
        }
        vector<ll> check;
        for(auto x:s){
            check.pb(x);
        }       
        if(s.size()<k){
            ll size=k-s.size();
            for(ll i=0;i<size;i++){
                check.pb(a[i]);
            }
        }
        ll answ=check.size()*n;
        cout<<answ<<"\n";
        for(ll i=0;i<n;i++){
            for(auto x:check){
                cout<<x<<" ";
            }
        }

        cout<<"\n";
    }
}

