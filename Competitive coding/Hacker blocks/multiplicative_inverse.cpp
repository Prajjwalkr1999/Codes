#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 100005;
const ll m=1000000007;

ll x=0,y=0,gcd=0;

void exp(ll a,ll b){
    if(b==0){
        x=1;
        y=0;
        gcd=a;
        return;
    }
    exp(b,a%b);
    ll cx=y;
    ll cy=x-(a/b)*y;
    x=cx;
    y=cy;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    // ll t;cin>>t;while(t--)
    {
        ll n, ans = 0;
        cin >> n;
        exp(n,m);
        ans=(x+m)%m;
        cout<<ans<<endl;
    }
}

