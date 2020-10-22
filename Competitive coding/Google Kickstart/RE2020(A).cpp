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
    
    int t;cin>>t;int tc=0;while(t--)
    {
        sieve();
        int i,j,n;
        cin >> n;
        vector<int> a(n);
        int even=0,od=0;
        unordered_map<int,int> mp;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]%2){
                od++;
            }else{
                even++;
            }
        }
        int ans=1;
        int prev=a[1]-a[0];
        // mp[prev]++;
        // for(int i=1;i<n-1;i++){
        //     int val=a[i+1]-a[i];
        //     if(val==prev){
        //             mp[val]++;
        //             if(ans<mp[val]){
        //                 ans=mp[val];
        //             }
        //     }else{
        //         prev=val;
        //         mp.clear();
        //         mp[val]++;
        //         if(ans<mp[val]){
        //             ans=mp[val];
        //         }
        //     }
        // }
        i=1;
        int max_t=1;
        while(i<n){
            int val=a[i]-a[i-1];
            if(val==prev){
                max_t++;
                if(max_t>ans){
                    ans=max_t;
                }
                if(val%2){
                    od--;
                }else{
                    even--;
                }
                // mp[prev]++;
            }else{
                prev=val;
                max_t=2;
                if(prev%2){
                    od--;
                }else{
                    even--;
                }
                // mp[prev]++;
            }
            i++;
        }
        tc++;
        cout<<"Case #"<<tc<<": "<<ans<<"\n";

    }
    return 0;
}

