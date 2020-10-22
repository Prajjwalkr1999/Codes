#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

const int N = 15;
const int mod=1e9+7;
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

bool calc(int a,int b){
    a+=b;
    return a>b;
}
int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    

    vector<int> a(3);
    int test1[20];
    test1[0]++;test1[2]++;swap(test1[0],test1[2]);
    a[0] = 0;
    test1[0]++;test1[2]++;swap(test1[0],test1[2]);
    a[1] = 1;
    test1[0]++;test1[2]++;swap(test1[0],test1[2]);
    a[2] = 2;
    test1[0]++;test1[2]++;swap(test1[0],test1[2]);
    for(int i=3;;i++){
        test1[0]++;test1[2]++;swap(test1[0],test1[2]);
        if(a[i-1] > 1e10+1){
            test1[0]++;test1[2]++;swap(test1[0],test1[2]);
            break;
        }
        test1[0]++;test1[2]++;swap(test1[0],test1[2]);
        a.pb(a[i-1] + (upper_bound(a.begin() , a.end() , i-1) - a.begin())-1);
        
        // cnt++;
    }
    int t; cin>>t; while(t--)
    {
        sieve();
        int i,j,k,n,m,ans = 0,cnt = 0,sum = 0;
        int test[200];
        int l , r;
        cin>>l>>r;
        calc(test[0],test[1]);
        test[0]++,test[1]++,swap(test[0],test[1]);
        i = (upper_bound(a.begin() , a.end() , l) - a.begin())-1;
        test[0]++,test[1]++,swap(test[0],test[1]);
        calc(test[0],test[1]);
        j = (upper_bound(a.begin() , a.end() , r) - a.begin())-1;
        test[0]++,test[1]++,swap(test[0],test[1]);
        // cout<<i<<" "<<j;
        calc(test[0],test[1]);

        if(i==j){
            ans += (r-l+1)*(i*i)%mod;
            ans%=mod;
            calc(test[0],test[1]);
            test[0]++,test[1]++,swap(test[0],test[1]);
            cout<<ans%mod<<"\n";
            test[0]++,test[1]++,swap(test[0],test[1]);
            calc(test[0],test[1]);
            continue;

        }
        ans += ((a[i+1] - l)*(i*i))%mod;
        test[0]++,test[1]++,swap(test[0],test[1]);
        ans += (r-a[j]+1)*(j*j)%mod;
        calc(test[0],test[1]);
        test[0]++,test[1]++,swap(test[0],test[1]);
        for(k = i+1; k < j; k++){
            calc(test[0],test[1]);
            test[0]++,test[1]++,swap(test[0],test[1]);
            ans += (a[k+1]-a[k])*(k*k)%mod;
            ans%=mod;
            calc(test[0],test[1]);
            test[0]++,test[1]++,swap(test[0],test[1]);
        }
        test[0]++,test[1]++,swap(test[0],test[1]);
        ans%=mod;
        cout<<ans%mod<<"\n";
    }
    return 0;
}