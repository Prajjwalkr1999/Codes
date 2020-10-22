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
void factorisation(int n) {
    factors.clear();
    // check by 2
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
        ll i, j, k, n, m, sum = 1;
        cin >> n;
        vector<ll> a(n);
        vector<vector<P>> fac;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(auto x:a){
            factorisation(x);
            fac.pb(factors);
        }

        // for(auto x:a){
        //     cout<<x<<" ";
        // }

        // for(j=0;j<n;i++){
        //     if (a[j] % 2 == 0) {
        //         int cnt = 0;
        //         while (a[j] > 1 && a[j] % 2 == 0) {
        //             a[j] /= 2;
        //             cnt++;
        //         }
        //         fac[j].pb({2, cnt});
        //     }
        //     for ( i = 3; i * i <= a[j]; i += 2) {
        //         if (a[j] % i == 0) {
        //             int cnt = 0;
        //             while (a[j] > 1 && a[j] % i == 0) {
        //                 a[j] /= i;
        //                 cnt++;
        //             }
        //             fac[j].pb({i, cnt});
        //         }
        //     }
        //     if (a[j] > 1) {
        //         fac[j].pb({a[j], 1});
        //     }
        // }
        // for(auto x:fac){
        //     for(auto z:x){
        //         cout<<z.F<<" "<<z.S<<" ";
        //     }
        //     cout<<"\n";
        // }
        map<ll, ll> mp;
        vector<ll> fl(n);
        vector<ll> sl(n);
        ll first,second;
        for(auto z:fac){
            first=INT_MAX;
            second=INT_MAX;
            for(auto x:z){
                mp[x.F]++;
            }
        }
        // for(auto x:mp){
        //     cout<<x.F<<" "<<x.S<<"\n";
        // }
        vector<P> ans;
        for(auto x:mp){
            if(x.S==n){
                vector<ll> one;
                for(auto q:fac){
                    for(auto z:q){
                        if(z.F==x.F){
                            one.pb(z.S);
                            break;
                        }
                    }
                }
                sort(one.begin(),one.end());
                ans.pb({x.F,one[1]});
                // cout<<x.F<<" "<<sl[x.F]<<"\n";
            }else if(x.S==(n-1)){
                vector<ll> one;
                for(auto q:fac){
                    for(auto z:q){
                        if(z.F==x.F){
                            one.pb(z.S);
                            break;
                        }
                    }
                }
                sort(one.begin(),one.end());
                ans.pb({x.F,one[0]});
            }else if(x.S<(n-1)){
                continue;
            }
        }
        sum=1;
        for(auto x:ans){
            while(x.S>0){
                sum=sum*x.F;
                x.S--;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}