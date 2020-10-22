#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
ll gcd(ll a,ll b)
{return (b?gcd(b,a%b):a);
}
vector<P> factors;
void factorise(ll n) {
    // check by 2
    factors.clear();
    if (n % 2 == 0) {
        ll cnt = 0;
        while (n > 1 && n % 2 == 0) {
            n /= 2;
            cnt++;
        }
        factors.pb({2, cnt});
    }
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            ll cnt = 0;
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
        ll i, j, k, n, sum = 1,gc=1;
        cin >> n;
        vector<ll> a(n);
        // vector<vector<P>> fac;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        gc=a[0];
         for ( i = 1; i < n; i++) {
              gc=gcd(gc,a[i]);      
                }

            factorise(gc);  
            for(auto x:factors){
                sum=(sum*(x.S+1));
            }

              cout<<sum<<"\n";

    }
}

