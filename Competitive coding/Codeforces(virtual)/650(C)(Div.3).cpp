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
        int i,j,n,k;
        cin >> n>>k;
        string s;
        cin>>s;
        vector<int> prefix(n);
        prefix[0]=s[0];
        // for ( i = 1; i < n; i++) {
        //     prefix[i]=prefix[i-1]+s[i];
        // }
         int x = -1,a=0,b=0;
        int pre[k + 1 + n + k + 1] = {0};
        for(i=k+1;i<n+k+1;i++){
            if(s[i-k-1] == '1'){
                    pre[i-k]++;
                    pre[i+k+1]--;
                    a++;
                    b++;
                    swap(a,b);
                    // prefix[i]+=a;
                    // swap(prefix[i],prefix[i+1]);
            }
        }
        int cnt=0,ans=0;
        for(i=0;i<k+1;i++){
            a++;b++;
            cnt += pre[i];
            swap(a,b);
        }

        for(i=k+1;i<n+k+1;i++){
            cnt += pre[i];
            if(s[i-k-1] == '0'){
                swap(a,b);
                if(cnt == 0){
                    ans++;
                    pre[i-k]++;
                    a++;
                    b++;
                    cnt++;
                    pre[i+k+1]--;
                    a++;
                    b++;
                    a+=pre[i+k+1];
                    swap(a,b);
                }
            }
        }


        cout<<ans<<"\n";
    }
    return 0;
}

