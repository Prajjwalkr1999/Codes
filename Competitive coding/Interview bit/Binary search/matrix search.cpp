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
        vector<vector<int>> a(n,vector<int>(n,0));
        for ( i = 0; i < n; i++) {
            for(j = 0; j < n ; j++){
                cin >> a[i][j];
            }
        }
        int r=0,c=a[0].size();
        for(int i=0;i<n;i++){
            if(x>=a[i][0]&&x<=a[i][c-1]){
                r=i;
                break;
            }
        }
        int low=0,high=c-1;

        while(low<high){
            int mid=low+(high-low)/2;
            if(a[r][mid]==x){
                return 1;
            }else if(x>a[r][mid]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return 0;

    }
    return 0;
}

