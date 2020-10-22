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
        int i,j=0,n,k=-1,ans=0,cnt=0,sum=0,flag=0;
        cin >> n;
        vector<int> a(n);
        // vector<int> mp(1025,0);
        map<int,int> mp;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]=1;
         
        }
        for(i=1;i<=1024;i++){
            flag=0;
            for(j=0;j<n;j++){
                cnt=a[j]^i;
                if(mp.find(cnt)==mp.end()){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                k=i;
            }
            if(k!=-1){
                break;
            }
        }
        cout<<k<<"\n";
    }
    return 0;
}

