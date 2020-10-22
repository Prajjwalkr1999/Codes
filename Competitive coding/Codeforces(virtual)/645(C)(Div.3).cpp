#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
ll calc(ll x, ll y) 
{ 
    ll ans = 1; 
    

    for (ll i = y; i < (x + y - 1); i++) { 


        ans *= i; 

        ans /= (i - y + 1); 


    } 
    
    return ans; 
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
        ll x1,x2,y1,y2;
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin>>x1>>y1>>x2>>y2;
        n=x2-x1+1;
        m=y2-y1+1;
        ans=calc(x2-x1+1,y2-y1+1);
        cnt=n-3+1;
        if(cnt<=0){
            cnt=0;
        }
        sum=m-3+1;
        if(sum<=0){
            sum=0;
        }
        ans=ans-(cnt*sum); 
        cout<<ans<<"\n";

    }
}

