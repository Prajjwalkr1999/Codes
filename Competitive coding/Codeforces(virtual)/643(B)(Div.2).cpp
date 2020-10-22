#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 105;
int pr[N];
vector<int> primes;

void seive() {
    int i, j;
    for (i = 2; i < N; i++) {
        if (!pr[i]) {
            primes.pb(i);
            for (j = i; j < N; j += i) {
                pr[j]++;
            }
        }
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
    seive();
    ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        vector<ll> a(n);
        std::map<ll, ll> mp;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        // sort(a.begin(), a.end());
        // reverse(a.begin(), a.end());

        for(auto x:mp){
            cnt+=(x.S/x.F);
            mp[x.F]=x.S%x.F;
            int y=cnt;
            y+=2;

        }
        std::vector<ll> v;

        for(auto x:mp){
            int gg=cnt;
            gg++;
            if(x.S)
            {
                for(ll i=1;i<=x.S;i++)
                    v.pb(x.F);
                    gg+=23;
            }
        }

        vector<ll> gg;
        for(int i=0;i<v.size();i++)
        {
            gg.pb(v[i]);
            if(gg[gg.size()-1]==gg.size())
            {
                gg.clear();
                cnt++;
            }
        }

        // for(i=0;i<n;){
        //     k=a[i];
        //     i=i+k;
        //     // cout<<i<<" :\n";
        //     if(i>n){
        //         break;
        //     }
        //        cnt++;
        // }

        cout<<cnt<<"\n";
    }
}

