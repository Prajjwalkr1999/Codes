#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;


int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int t;cin>>t;while(t--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2){
            cout<<abs(y2-y1)<<"\n";
            continue;
        }
        if(y1==y2){
            cout<<abs(x2-x1)<<"\n";
            continue;
        }
        int ans=abs(x2-x1)+abs(y2-y1)+2;
        cout<<ans<<"\n";

    }
    return 0;
}

