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
        int a, b, c, d; cin >> a >> b >> c >> d;
         
            int ans = 0;
            vector<int> pre(1500008,0);
            for(int i=a;i<=b;i++){
                pre[i+b]++;
                pre[i+c+1]--;
            }

            for(int i=1;i<=1500006;i++){
                pre[i]+=pre[i-1];
            }

            for(int i=1500006;i>=1;i--){
                pre[i-1]+=pre[i];
            }

            // int ans=0;
            for(int i=c;i<=d;i++){
                ans+=pre[i+1];
            }

         
            cout << ans << '\n';
    }
    return 0;
}

