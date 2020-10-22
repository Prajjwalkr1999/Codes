#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
ll getm(ll a,string b){
    ll rem=0;
    for(ll i=0;i<b.length();i++){
       rem=(rem*10+b[i]-'0')%a;
    }
    return rem;
}
ll gcd(ll a,ll b){
    if(b==0){
        return a;
    }

    gcd(b,a%b);
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
        ll i, j, k, n, ans = 0, cnt = 0;
        cin >> n;
        string m;
        cin>>m;
        if(n==0){
            cout<<m<<endl;
        }
        else{ll x=getm(n,m);
        ans=gcd(n,x);
        cout<<ans<<endl;}
    }
}

