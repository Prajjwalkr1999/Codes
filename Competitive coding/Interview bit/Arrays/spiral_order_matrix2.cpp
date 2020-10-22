#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    // ll t;cin>>t;while(t--)
    {
        ll n;
        cin >> n;
        ll a[n][n];
        int counter=n*n;
        int x=1;
        int maxrow=n-1,maxcol=n-1,minrow=0,mincol=0;
        while(x<=counter){
            for(int i=mincol;i<=maxcol&&x<=counter;i++){
                a[minrow][i]=x;
                
                x++;
            }
            minrow++;
            for(int i=minrow;i<=maxrow&&x<=counter;i++){
                a[i][maxcol]=x;
                x++;
             
            }
            maxcol--;
            for(int i=maxcol;i>=mincol&&x<=counter;i--){
                a[maxrow][i]=x;
                x++;
                
            }
            maxrow--;
            for(int i=maxrow;i>=minrow&&x<=counter;i--){
                a[i][mincol]=x;
                x++; 
            }
            mincol++;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<"   ";
            }
            cout<<"\n";
        }

    }
}

