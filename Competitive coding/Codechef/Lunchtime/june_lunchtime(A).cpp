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
        int i,j,n,s;
        cin >>s>> n;
        int ans=0;
        if(s%2){
            ans++;
            s--;
        }
        if(s>n){
            int cnt=s/n;
            int rem=s%n;
            ans+=cnt;
            if(rem){
                ans++;
                cout<<ans<<"\n";
            }else{
                cout<<ans<<'\n';
            }
        }else{
            if(s){
                cout<<ans+1<<"\n";
            }else{
                cout<<ans<<"\n";
            }
        }

    }
    return 0;
}

