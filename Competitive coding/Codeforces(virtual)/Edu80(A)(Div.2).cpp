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
        int i,j,n,d,flag=0;
        cin >> n>>d;
        // vector<int> a(n);
        // for ( i = 0; i < n; i++) {
        //     cin >> a[i];
        // }
        if(d<=n){
            cout<<"YES\n";
            continue;
        }
        int buffer=10;
        int limit=(int)(sqrt(d-1))-1;
        limit+=buffer;
        for(i=0;i<=limit;i++){
            if(i+((d+i)/(i+1))<=n){
                flag=1;
                break;
            }
        }

        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }
    return 0;
}

