#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
bool choose(ll a[],ll n){
    sort(a,a+n);
    for(ll i=0;i<n;i++){
        ll j=i+1,k=i;
        while(j<n&&k<n){
            if(a[i]+a[j]==a[k]){
                return true;
            }else if(a[i]+a[j]<a[k]){
                j++;
            }else{
                k++;
            }
        }
    }
    return false;
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
        ll i, j, k, n, m,  cnt = 0, sum = 0;
        cin >> n;
        ll a[n];
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool ans=choose(a,n);
        if(ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}

