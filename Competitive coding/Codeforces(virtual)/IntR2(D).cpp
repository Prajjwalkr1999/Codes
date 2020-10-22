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
    
    // int t;cin>>t;while(t--)
    {
        int i,j,a,d;
        cin >> a>>d;
        int cnt=d/a;
        int rem=d%a;
        if(rem==0){
            cout<<a<<"\n";
            return 0;
        }
        if(rem<=cnt){
            cout<<a+1<<"\n";
            return 0;
        }
        if(rem%cnt==0){
            cout<<a+(rem/cnt)<<"\n";
            return 0;
        }
        int sum=rem%cnt;
        int x=rem/cnt;
        if(sum==0)
            cout<<a+x<<"\n";
        else
            cout<<a+x+1<<"\n";
    }       
    return 0;
}

