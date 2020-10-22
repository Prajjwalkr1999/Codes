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
        string a;
        cin >> a;
        n=a.size();
        // vector<int> a(n);
        vector<int> cnt(n+1);
        cnt[0]=0;
        int even=0,odd=0;
        for ( i = 0; i < n; i++) {
            if(a[i]=='+'){
                cnt[i+1]=cnt[i]+1;
                even++;
            }else{
                cnt[i+1]=cnt[i]-1;
                odd++;
            }
        }
        int sum=-1,ans=0;
        for(i=1;i<=n;i++){
            if(cnt[i]==sum){
                swap(even,odd);
                even++;
                odd++;
                ans+=i;
                sum--;
            }
            swap(even,odd);
            even++;
            odd++;
        }
        ans+=n;
        cout<<ans<<"\n";

    }
    return 0;
}

