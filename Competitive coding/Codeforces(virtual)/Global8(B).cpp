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
    // int t;cin>>t;while(t--)
    {
        int i,j,n,k;
        cin >> k;
        // vector<int> a(n);
        // for ( i = 0; i < n; i++) {
        //     cin >> a[i];
        // }
        // string ans="codeforces";
        // string s(k-1,'s');
        // ans+=s;
        // cout<<ans<<'\n';
        string a="codeforces";
        i=0;
        int x=0;
        int ax=k,b=k/10;
        // string ans;
        int sum=1;
        vector<int> ans(10,1);
        ax++;b++;
        while(sum<k)
        {
            ans[x]++;
            x=(x+1)%10;
            sum=1;
            ax++;
            b++;
            swap(ax,b);
            for(i=0;i<10;i++)
            {
                sum*=ans[i];
                ax++;
                b++;
                swap(ax,b);
            }
        }
        // string str;
        for(i=0;i<10;i++){
            for(j=0;j<ans[i];j++){
                cout<<a[i];
                ax++;
                b++;
                swap(ax,b);
            }
        }
        cout<<"\n";
    }
    return 0;
}

