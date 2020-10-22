#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;

bool isValid(int x,int y,int z,int m,int n){
    return (x>=0&&x<m&&y>=0&&y<n&&z>=0&&z<n);
}
int mem[100][100][100];
int calc(int **arr,int x,int y,int z,int m,int n){
    if(!isValid(x,y,z,m,n)) return INT_MIN;

    if(x==m-1&&y==0&&z==n-1){
        return (y==z)?arr[x][y]:arr[x][y]+arr[x][z];
    }
    if(x==m-1){
        return INT_MIN;
    }

    if(mem[x][y][z]!=-1) return mem[x][y][z];

    int ans=INT_MIN;

    int temp= (y==z)?arr[x][y]:arr[x][y]+arr[x][z];

    ans=max(ans,temp+calc(arr,x+1,y,z-1,m,n));
    ans=max(ans,temp+calc(arr,x+1,y,z+1,m,n));
    ans=max(ans,temp+calc(arr,x+1,y,z,m,n));
    ans=max(ans,temp+calc(arr,x+1,y-1,z,m,n));
    ans=max(ans,temp+calc(arr,x+1,y-1,z-1,m,n));
    ans=max(ans,temp+calc(arr,x+1,y-1,z+1,m,n));
    ans=max(ans,temp+calc(arr,x+1,y+1,z,m,n));
    ans=max(ans,temp+calc(arr,x+1,y+1,z-1,m,n));
    ans=max(ans,temp+calc(arr,x+1,y+1,z+1,m,n));

    return (mem[x][y][z]=ans);
}
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
        int i,j,n,m;
        // cin >> n;
        n=4;
        m=5;
        // int **arr;
        int **arr=(int **)malloc(m*sizeof(int *));
        for(i=0;i<m;i++){
            arr[i]=(int *)malloc(n*sizeof(int));
        }
        for(int i=0;i<5;i++){
            for(int j=0;j<4;j++){
                cin>>arr[i][j];
            }
        }
        memset(mem,-1,sizeof(mem));
        cout<<calc(arr,0,0,n-1,m,n);

    }
    return 0;
}

