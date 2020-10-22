#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
ll count(int n){
    ll c1=1,c2=1;
    for(ll i=1;i<n;i++){
    ll temp=c1;
    c1=c1+c2;
    c2=temp;
    }
    return c1+c2;
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
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin>>n;

        ans=count(n);
        cout<<ans<<endl;

    }
}

