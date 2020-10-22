#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
// ll c[N];
ll merge(ll a[],ll s,ll m,ll e){
    ll n1=m-s+1;
    ll n2=e-m;
    ll j=0,i=0,k=s,count=0;
    ll L[n1],R[n2];
      for (i = 0; i < n1; i++) 
        L[i] = a[s + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = a[m + 1+ j];
    while(i<n1&&j<n2){
         if(L[i]<R[j]){
            a[k++]=L[i++];
         }else{
            a[k++]=R[j++];
            count+=m-i+1;
         }
    }

    while(i<n1){
        a[k++]=L[i++];
    }

    while(j<n2){
        a[k++]=R[j++];
    }

    return count;

}
ll ans=0;
ll count(ll a[],ll s,ll e){
    if(s>=e){
        return 0;
    }
    ll m=(s+(e-1))/2;
    ll ans1=0,ans2=0,ans3=0;
    ans1=count(a,s,m);
    cout<<"ANS1 = "<<ans1<<endl;
    ans2=count(a,m+1,e);
    cout<<"ANS2 = "<<ans2<<endl;
    ans3=merge(a,s,m,e);
    cout<<"ANS3 = "<<ans3<<endl;
    ans+=ans1+ans2+ans3;
    cout<<ans<<endl;
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
        ll a[n];
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }


        ans=count(a,0,n);

        cout<<ans<<endl;
    }
}

