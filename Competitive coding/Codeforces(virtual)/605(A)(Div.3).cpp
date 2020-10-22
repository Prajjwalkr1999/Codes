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
        ll a,b,c,i,j,cnt,ans=0;
        std::vector<ll> v(3);
        for(i=0;i<3;i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        if(v[0]==v[1]&&v[1]==v[2]){
            cout<<0<<"\n";
            continue;
        }
        if(v[0]==v[1]){
            v[0]++;
            v[1]++;
            if(v[2]>v[1])
            v[2]--;
            ans=abs(v[1]-v[0])+abs(v[2]-v[1])+abs(v[2]-v[0]);
            cout<<ans<<"\n";
            continue;
        }
        if(v[1]==v[2]){
            v[1]--;
            v[2]--;
            if(v[0]<v[1])
            v[0]++;
            ans=abs(v[1]-v[0])+abs(v[2]-v[1])+abs(v[2]-v[0]);
            cout<<(ans)<<"\n";
            continue;
        }
        v[0]++;
        v[2]--;
        ans=abs(v[1]-v[0])+abs(v[2]-v[1])+abs(v[2]-v[0]);
        cout<<(ans)<<"\n";
            continue;

    }
}

