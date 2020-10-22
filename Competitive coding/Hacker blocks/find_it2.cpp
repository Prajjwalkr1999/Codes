#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const ll N = 100005;

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
    
    memset(cnt,0,N);
memset(sum,0,N);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    find(a,n);

    ll t;
    cin>>t;
    while(t--)
    {
       int k;
        cin >> k;
        if(k==1){
            cout<<n<<endl;
        }else{
        cout<<sum[k]<<endl;}
    }
}

