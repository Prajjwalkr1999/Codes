#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 17;
int pr[N];
vector<int> primes;

void sieve() {
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
int powr(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) res *= a;
        a *= a;
        b /= 2;
    }
    return res;
}
int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    sieve();
    int t;cin>>t;while(t--)
    {
        int i,j,n,k;
        cin >> n>>k;
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        int num=1;
        vector<P> ans;
        int sum=0; 
        for(i=0;i<=30;i++){
            sum=0;
            num=powr(2,i);
            for(j=0;j<n;j++){
                 sum+=(num&a[j]);
            }
                ans.pb({sum,(33-i)});
        }
        sort(ans.rbegin(),ans.rend());
        int x=0;
        for(i=0;i<k;i++){
            int val=33-ans[i].S;
            int z=powr(2,val);
            x=x|z;
        }

        cout<<x<<"\n";


    }
    return 0;
}

