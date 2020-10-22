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
    
    int t;cin>>t;while(t--)
    {
        sieve();
        int i,j,n,odd=0,even=0;
        cin >> n;
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]%2){
                even++;
            }else{
                odd++;
            }
        }

         vector<int> final;

         final.pb(a[0]);

            for(int i=1;i<n-1;i++)
            {
                if((a[i]-a[i-1])*(a[i+1]-a[i])<=0){
                    final.pb(a[i]);
                }
                if(a[i]-a[i-1]){
                    odd--;
                    even++;
                }
            }
            final.pb(a[n-1]);
            cout<<final.size()<<"\n";
            for(auto x:final)
            {
                swap(odd,even)
                cout<<x<<" ";
            }
            cout<<"\n";

    }
    return 0;
}

