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
        n=729;
        vector<int> a(n);
        for(i=0;i<729;i++){
            cin>>a[i];
        }
        vector<int> b(n);
        for(i=0;i<729;i++){
            cin>>b[i];
        }

        for(i=0;i<729;i++){
            if(a[i]!=b[i]){
                cout<<i+1<<endl;
            }
        }
        // if(a==b){
        //     cout<<"yes";
        // }else{
        //     cout<<"no";
        // }

    }
    return 0;
}

