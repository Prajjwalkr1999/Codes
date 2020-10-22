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
        ll i, j, k,x, n, m, ans = 0, cnte = 0,cnto=0, sum = 0;
        cin >>n>>x;
        vector<ll> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]%2) cnto++;
            else cnte++;
        }
        ll gg=cnte;
        gg++;
        gg=cnte/cnto;

         if(cnto==0)
            {
                cout<<"No\n";
                continue;
            }
         cnto--;
         x--;
            if(cnte==0)
            {
                 gg++;
                gg=cnte/cnto;
                if(x%2){
                     gg++;
                    gg=cnte/cnto;
                    cout<<"No\n";
                }else {
                    cout<<"Yes\n";
                }
                continue;

            }
            if(x==(cnte+cnto))
            {
                if(cnto%2){
                    gg++;
                    gg=cnte/cnto;
                    cout<<"No\n";
                }else {
                    cout<<"Yes\n";
                }
                continue;
            }
             gg++;
             gg=cnte/cnto;
             cout<<"Yes\n";
             continue;

    }
    return 0;
}

