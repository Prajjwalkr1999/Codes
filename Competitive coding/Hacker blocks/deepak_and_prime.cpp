#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 1000005;
vector<int> primes;
int pr[N];

void prime(){
    // primes.pb(2);
    for(ll i=2;i<N;i++){
        if(!pr[i]){
            primes.pb(i);
        }
        for(ll j=i*i;j<N;j=j+i){
            pr[j]++;
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

    ll t;
    cin>>t;
    
   prime();
    while(t--)
    {   
        ll n;
        ll i=1, j, z, y, ans = 0, cnt = 1, sum = 0;
        cin >> z>>y;
        // ll x=n*n+10;
        
        
        for(auto x:primes){
            if(x>=z&&x<=y)
                {cout<<x<<endl;}
        }
    }
}

