#include<bits/stdc++.h>



using namespace std;

#define rep(i,a,b); for(long long int i=a;i<b;i++)
#define mk make_pair        
#define LIMIT 100007
#define MOD 1000000007
#define ll long int
#define endl '\n'
#define min3(a,b,c) ((a>b)?((b>c?c:b):(a>c?c:a)))
#define max3(a,b,c) ((a<b)?((b<c?c:b):(a<c?c:a)))
#define min(a,b) (a>b?b:a)
// #define x.first x.f
// #define x.second x.s
#define max(a,b) (a<b?b:a)
#define pb push_back



int main() 
{ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll k;
    cin>>k;
    
    ll sum=1,t=0;
    ll v[10];
    rep(i,0,10) v[i]=1;
    while(sum<k)
    {
        v[t]++;
        t=(t+1)%10;
        sum=1;
        rep(i,0,10)
        {
            sum*=v[i];
        }
    }
    
    string str="codeforces";
    rep(i,0,10)
    {
        rep(j,0,v[i])
        {
            cout<<str[i];
        }
    }
    
    
    return 0; 
}