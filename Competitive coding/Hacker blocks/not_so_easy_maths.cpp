#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
vector<int> primes;
int pr[20];
void prime(){
    for(ll i=2;i<20;i++){
        if(!pr[i]){
            primes.pb(i);
        }
        for(ll j=i;j<20;j=j+i){
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
        ll i, j, k, m, ans = 0, cnt = 1, sum = 0;
        cin >> n;
        ll a[n]={0};
        
        for(auto x:primes){
            if(x>n){
                break;
            }
            for( i=x;i<n;i+=x){
                if(a[i]==0){
                    cnt++;
                    a[i]++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}

