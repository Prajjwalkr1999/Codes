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
        int i,j,n;
        cin >> n;
        int x=3,y=0;
        int cnt=0,cnt2=0;
        // vector<vector<int>> a();
        for(i=0;i<n*2+3;i++){
            for(j=y;j<n*2+3&&j<x;j++){
                if(i==j&&i%2){
                    continue;
                }
                cout<<i<<" "<<j<<'\n';
                cnt2++;
                if(cnt==2&&cnt2==3){
                    cout<<i<<" "<<j+1<<"\n";
                    cout<<i<<" "<<j+2<<"\n";
                    cnt2=0;
                    y+=2;
                }

            }

            cnt++;
            if(cnt==3){
                cnt=0;
            }
        }

    }
    return 0;
}

