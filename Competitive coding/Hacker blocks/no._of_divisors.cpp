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
for(ll i=2;i<N;i++){
    // cout<<"Check";
    // cout<<pr[i]<<endl;
    if(!pr[i]){
        primes.pb(i);
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
    ll t;cin>>t;while(t--)
    {   
        cout<<"Check 2"<<endl;
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        ll a[n];
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll store[N]={0};
        // cout<<store[0]<<"h"<<endl;
        for(i=0;i<n;i++){
            cout<<"Check 3"<<endl;
            for(auto x:primes){
                cout<<"hii";
                while(a[i]%x){
                    cout<<"Hii";
                    a[i]=a[i]/x;
                    store[x]++;
                }
            }
        }

        for(i=0;i<N;i++){
            sum+=store[i];
        }
        cout<<sum<<endl;
    }
}

