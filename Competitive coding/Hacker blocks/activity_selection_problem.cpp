#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;

bool comp(P a,P b){
    if(a.S!=b.S)
    return a.S<b.S;
    
    return a.F<b.F;
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
        P a[n];
        for ( i = 0; i < n; i++) {
            cin >> a[i].F>>a[i].S;
        }
        sort(a,a+n,comp);

         // for ( int i = 0; i < n; i++) {
         //         cout<<a[i].S<<" "<<a[i].F<<" ";   
         //        }

        ans=1;
        int ending=a[0].S;
        for(i=1;i<n;i++){
            if(a[i].F>=ending){
                ending=a[i].S;
                ans++;
            }

        }
        cout<<ans;
    }
}

