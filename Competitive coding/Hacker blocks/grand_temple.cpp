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
    ll x,y;
    ll t;cin>>t;
    ll a[t],b[t];
    for(ll i=0;i<t;i++)
    {
        cin >> x>>y;
        a[i]=x;
        b[i]=y;
    }
    sort(a,a+t);
    sort(b,b+t);
    ll sum=0,max=0;
    ll xco[t]={0},yco[t]={0};
    for(ll i=0;i<t-1;i++){
        sum=abs(a[i+1]-a[i]);
        xco[i]=sum;
    }
       ll sum1=0;
       for(ll i=0;i<t-1;i++){
        sum1=abs(b[i+1]-b[i]);
        yco[i]=sum1;
    }
    ll maxx=0,maxy=0,indexx,indexy;

    for(ll i=0;i<t;i++){
        if(maxx<xco[i]){
            maxx=xco[i];
            indexx=i;
        }
        // cout<<i<<"="<<xco[i]<<endl;
    }
       for(ll i=0;i<t;i++){
        if(maxy<yco[i]){
            maxy=yco[i];
            indexy=i;
        }
        // cout<<i<<"="<<yco[i]<<endl;
    }
ll ans;
ans=(maxx-1)*(maxy-1);
    // ll ansx=0,ansy=0;
    // ansx=(maxx-1)*(yco[indexx]-1);
    // ansy=(maxy-1)*(xco[indexy]-1);
    // ll ans;
    // if(ansx>ansy){
    //     ans=ansx;
    // }else{
    //     ans=ansy;
    // }
    cout<<ans<<endl;

}

