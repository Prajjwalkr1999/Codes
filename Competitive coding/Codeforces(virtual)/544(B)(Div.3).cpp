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
    
    // ll t;cin>>t;while(t--)
    {
        ll ans,h1,m1,h2,m2;
        string h,m;
        cin>>h>>m;
        // cout<<h<<m;
        h1=(h[0]-'0')*10+(h[1]-'0');
        m1=(h[3]-'0')*10+(h[4]-'0');
        h2=(m[0]-'0')*10+(m[1]-'0');
        m2=(m[3]-'0')*10+(m[4]-'0');
        
        ll x=h1*60+m1;
        ll y=h2*60+m2;
        ans=(x+y)/2;
        if(ans/60<=9&&ans%60<=9){
          cout<<"0"<<(ans/60)<<":0"<<ans%60<<"\n";
        }else if(ans/60<=9){
          cout<<"0"<<(ans/60)<<":"<<ans%60<<"\n";
        }else if(ans%60<=9){
          cout<<(ans/60)<<":0"<<ans%60<<"\n";
        }else{
        cout<<(ans/60)<<":"<<ans%60<<"\n";}

    }
}

