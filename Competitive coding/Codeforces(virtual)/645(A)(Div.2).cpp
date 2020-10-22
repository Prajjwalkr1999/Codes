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
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n>>m;
        if(n==1){
            if(m%2==0){
                ans=m/2;
            }else{
                ans=(m/2)+1;
            }
            cout<<ans<<"\n";
            continue;
        }
        if(n%2==0){
            ans=(n/2)*m;
            cout<<ans<<"\n";
        }else{
            ans=(n/2)*m;
            if(m%2==0){
                ans+=m/2;
            }else{
                ans+=(m/2)+1;
            }
            cout<<ans<<"\n";
        }

    }
}

