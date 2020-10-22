#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;

ll func(ll n){
    ll sume=0,sumo=0,ans;
    for(ll i=1;i<=n;i++){
        if(i%2==0){
            if(n%i==0){
            sume+=i;}
        }else{
            if(n%i==0){
                sumo+=i;
            }
        }
    }
    ans=sume-sumo;
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
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        ans=func(n);
        cout<<ans<<endl;
        
    }
}

