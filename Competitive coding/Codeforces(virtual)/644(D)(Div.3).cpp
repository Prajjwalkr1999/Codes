#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
vector<ll> ans;
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

void fac(ll n) 
{ 
    ans.clear();
    for (ll i=1; i*i<=(n); i++) 
    { 
        if (n%i == 0) 
        { 
            
            if (n/i == i){ 
                ans.pb(i);}
  
            else {
                ans.pb(i);
                ans.pb(n/i);}
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




    ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, cnt = 0, sum = 0;
        cin >> n>>k;
        // ll lo=1,hi=k;
        // ll mid;
        // while(lo<=hi){
        //     mid=lo+(hi-lo)/2;
        //     if(n%mid==0){
        //         ans=mid;
        //     }
        // }
        if(k>=n){
            cout<<1<<"\n";
            continue;
        }
        if(isprime(3)){
            // cout<<n<<"\n";
            // continue;
        }
        fac(n);
        sort(ans.begin(), ans.end());
        for(i=ans.size()-1;i>=0;i--){
            if(ans[i]<=k){
                cnt=ans[i];
                break;
            }
        }
        cout<<n/cnt<<"\n";
        // ans.clear();
    }
}

