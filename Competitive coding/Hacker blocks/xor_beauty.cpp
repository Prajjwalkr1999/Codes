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
    ll n;
    cin>>n;
    ll t;cin>>t;
    string s;
    cin>>s;
    while(t--)
    {   
        map<char,int> m;
        ll l,r;
        ll ans=0;
        cin>>l>>r;
        for (ll i = l-1; i <= r-1; i++) {
             m[s[i]]++;
        }
        // map<char,int> :: iterator it;
        for(auto it:m){
            ans=(ans^(it.S));
        }
        cout<<ans<<endl;
    }
}

