#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;

ll maxcrossing(ll arr[],ll l,ll m,ll r){

    ll left=INT_MIN;
    ll sum=0;
    for(ll i=m;i>=l;i--){
        sum=sum+arr[i];
        if(left<sum){
            left=sum;
        }
    }
    sum=0;
    ll right=INT_MIN;
    for(ll i=m+1;i<=r;i++){
        sum=sum+arr[i];
        if(right<sum){
            right = sum;
        }
    }
    return left+right;
}

ll maxsum(ll arr[],ll l,ll r){
    if(l==r){
        return 0;
    }

    ll m=(l+r)/2;

    return max(max(maxsum(arr,l,m),maxsum(arr,m+1,r)),maxcrossing(arr,l,m,r));
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
        ll a[n];
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        ans=maxsum(a,0,n-1);
    
        cout<<ans<<endl;
    }
}

