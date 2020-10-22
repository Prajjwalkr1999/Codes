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

void calc(){
for(ll i=0;i<N;i++){
    // cout<<"Check";
    // cout<<pr[i]<<endl;
    if(!pr[i]){
        primes.pb(i*i);
        for(ll j=i;j<N;j+=i){
            pr[j]++;
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
    calc();
    // ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, flag = 0, cnt = 0, sum = 0;
        cin >> n;
        ll a[n];
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(i=0;i<n;i++){
            flag=0;
        for(auto x:primes){
            if(a[i]==x){
                cout<<"YES"<<endl;
                flag=1;
            }
        }
            if(flag==0){
                cout<<"NO"<<endl;
            }
        

      }
    }
}

