#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1000005;
int pr[N];
vector<int> primes;
void seive() {
    ll i, j;
    for (i = 2; i < N; i++) {
        if (!pr[i]) {
            primes.pb(i);
            for (j = i; j < N; j += i) {
                pr[j]++;
            }
        }
    }
}
bool isprime(ll num){
    bool flag=true;
    for(ll i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
ll calc(ll n){
    for(ll x=3;x<=n;x++){
        if(n%x==0){
            n+=x;
            break;
        }
    }
    return n;
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
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n>>k;
         if(isprime(n)==true){
            ans=(2*n)+(2*(k-1));
            cout<<ans<<"\n";
            continue;
        }
        while(k--){
        if(n%2==0){
             // ans=(n+2);
             n+=2;
             break;
        }
       else{
            ll x=calc(n);
            // ans+=x;
            n=x;
            // cout<<ans<<"\n";

        }
    }
    if(k>0){
        n+=(k*2);
    }
    cout<<n<<"\n";
    }
}

