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
        int i,j,a,b;
        cin >>a>>b;
        if(b<9){
            cout<<0<<"\n";
            continue;
        }
        int x=b+1,cnt=0;
        // while(x<b){
        //     x=x*10+9;
        //     if(x<b)
        //     cnt++;
        // }
        while(x!=0){
            cnt++;
            x/=10;
        }
        cnt--;
        int ans=0;

        ans=a*cnt;

        cout<<ans<<"\n";
        

    }
    return 0;
}

