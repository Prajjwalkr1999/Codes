#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
ll cnt[N];
ll sum[N];
void find(ll a[],ll n){
    for(ll i=0;i<n;i++){
        cnt[a[i]]++;
    }
    for(ll i=2;i<N;i++){
        for(ll j=i;j<N;j+=i){
            sum[i]+=cnt[j];
        }
    }
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n,a[n];
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    find(a,n);

    ll t;cin>>t;while(t--)
    {
       int k;
        cin >> k;
        if(k==1){
            cout<<n<<endl;
        }else{
        cout<<sum[k];}
    }
}

