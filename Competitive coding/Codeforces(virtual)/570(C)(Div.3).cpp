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
        ll i, j, k, n, a,b, ans = 0, cnt = 0, sum = 0;
        cin >>k>>n>>a>>b;
        if(b*n>=(k)){
            cout<<-1<<"\n";
            continue;
        }
        if(a*n<k){
            cout<<n<<"\n";
            continue;
        }
        ll start=0;
        ll end=n;

        while(start<=end)
        {
            ll mid=(start+end)/2;
            if(k-(a*mid)>(n-mid)*b){
                ans=mid;
                start=mid+1;
            }else{
                end=mid-1;
            }            
        }
        cout<<ans<<"\n";
    }
}

