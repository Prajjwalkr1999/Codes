#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
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
        ll a,b,c,n;
        cin>>a>>b>>c>> n;
        ll maxn=max(a,max(b,c));
        ll diff=(3*maxn)-a-b-c;
        ll ans=n-diff;
        if((ans%3)==0&&n>=diff){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }
}

