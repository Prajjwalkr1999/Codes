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
        ll h,m;
        cin >> h>>m;
        ll h1=24;
        ll m1=60;
        ll ans=0;
        h1=(h1-h-1)*60;
        m1=m1-m;
        ans=h1+m1;
        cout<<ans<<"\n";
    }
}

