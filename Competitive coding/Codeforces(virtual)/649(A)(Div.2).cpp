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
        int i,j,n,x,sum=0,sum2=0;
        cin >> n>>x;
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            sum+=a[i];
            sum2+=a[i];
        }
        int ans=n;
        for(int i=0;i<n;i++){
            if(sum%x==0){
                sum-=a[i];
                ans--;
            }else{
                break;
            }

        }
        int ans2=n;

        for(int i=n-1;i>=0;i--){
            if(sum2%x==0){
                sum2-=a[i];
                ans2--;
            }else{
                break;
            }
        }
        ans=max(ans,ans2);
        if(ans!=0)
            cout<<ans<<"\n";
        else
            cout<<-1<<"\n";
    }
    return 0;
}

