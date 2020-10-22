#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
vector<P> factors;
void factoris(int n) {
    // check by 2
    factors.clear();
    if (n % 2 == 0) {
        int cnt = 0;
        while (n > 1 && n % 2 == 0) {
            n /= 2;
            cnt++;
        }
        factors.pb({2, cnt});
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            int cnt = 0;
            while (n > 1 && n % i == 0) {
                n /= i;
                cnt++;
            }
            factors.pb({i, cnt});
        }
    }
    if (n > 1) {
        factors.pb({n, 1});
    }
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
        ll i, j, k, n, m, cnt = 0, sum = 1;
        cin >> n;
        std::vector<ll> a(n);
        std::vector<vector<P>> fac;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        // std::map<ll, ll> fac;
        for(j=0;j<n;i++){
         factoris(a[j]);
         fac.pb(factors);
        }
        std::map<ll, ll> mp;
        // std::map<ll, ll> fl;
        // std::map<ll, ll> sl;
        // ll first,second;
        for(auto z:fac)
        {
            // first=INT_MAX;
            // second=INT_MAX;
            for(auto x:z){
                mp[x.F]++;
            }
        }
        std::vector<P> final;
        for(auto x:mp){
            if(x.S<(n-1)){
                continue;
            }else if(x.S==n){
                vector<ll> sl;
                for(auto q:fac)
                {
                    for(auto z:q)
                    {
                        if(z.F==x.F)
                           { 
                            sl.pb(z.S);
                            break;
                           }
                    }
                }
                sort(sl.begin(), sl.end());
                final.pb({x.F,sl[1]});
            }else if(x.S==(n-1)){
                  ll mini=INT_MAX;
                for(auto q:fac)
                {
                 for(auto z:q)
                {
                    if(z.F==x.F)
                    {
                        if(z.S<mini){
                            mini=z.S;
                        }
                        // break;
                    }
              
                 }
            // cout<<endl;
                 }
             final.pb({x.F,mini});  
            }
        }
        sum=1;
        for(auto x:final){
            while(x.S>0){
                sum*=x.F;
                x.S--;
            }
        }
        cout<<sum<<"\n";
    }
}

