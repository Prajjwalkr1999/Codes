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
        ll i, j, a, b, m, ans = 0, cnt = 0, sum = 0;
        cin >> a>>b;
        ans=min(a,b);
        cnt=max(a,b);
        // cout<<(2*ans)
        sum=max(2*ans,cnt);
        cout<<sum*sum<<"\n";

    }
}

