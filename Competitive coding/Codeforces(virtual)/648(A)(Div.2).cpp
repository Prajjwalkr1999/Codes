#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 107;

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
        int i,j,n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> c(n);
        // int a[n];
        // int b[n];
        map<int,P> mp;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            c[i]=a[i];
            mp[a[i]].F=i;
        }
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        sort(c.begin(),c.end());

        for(i=0;i<n;i++){
            mp[c[i]].S=i;
        }

        int flag=0,sum=0;
        int check[2];
        check[0]=0;
        check[1]=0;
        for(auto x:mp){
            if(x.S.F!=x.S.S){
                flag=1;
                check[b[x.S.F]]++;
            }
        }
        if((check[0]==0||check[1]==0)&&flag){
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
    }
    return 0;
}

