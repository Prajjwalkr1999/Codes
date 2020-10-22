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
        vector<vector<int>> a(n,vector<int> (n,0));
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i==j&&k>0){
                    a[i][j]=1;
                    k--;
                }else{
                    continue;
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i==n-j-1&&k>0){
                    a[i][j]=1;
                    k--;
                }else{
                    continue;
                }
            }
        }
        while(k>0){
            
        }

        int rowmx=0,rowmn=0;
        int colmx=0,rowmn=0;
        for(i=0;i<n;i++){
            int x=0;
            for(j=0;j<n;j++){
                x+=a[i][j];
            }
            rowmx=max(row,x);
            rowmn=min(row,x);
            // col+=a[i][0];
        }
        for(i=0;i<n;i++){
            int x=0;
            for(j=0;j<n;j++){
                x+=a[j][i];
            }
            colmx=max(colmx,x);
            colmn=min(colmn,x);
            // col+=a[i][0];
        }

        int ans=(rowmx*rowmx)-(rowmn*rowmn);
        ans+=(colmx*colmx)-(colmn*colmn);
        cout<<ans<<"\n";
             for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<a[i][j];
            }
            cout<<"\n";
        }
    }
    return 0;
}

