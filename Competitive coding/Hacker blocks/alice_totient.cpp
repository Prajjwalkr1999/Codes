#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;

vector<ll> primes;
ll pr[N]={};
ll tot[N];
void calc(){
for(ll i=2;i<N;i++){
    // cout<<"Check";
    // cout<<pr[i]<<endl;
    if(!pr[i]){
        primes.pb(i);
        for(ll j=i;j<N;j+=i){
            pr[j]++;
            tot[j]*=(i-1);
            tot[j]/=i;
        }
    }
}

}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    for(ll i=1;i<=N;i++){
        tot[i-1]=i;
    }
    calc();
    ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        cout<<tot[n]<<endl;

    }
}

