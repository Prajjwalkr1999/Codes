#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t; cin>>t; while(t--)
    {
        string s;
        cin>>s;
        int n;
        cin>>n;
        int a[n];
        map<int,int> m;
        // int tag=0;
        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];

            // m[a[i]]=i;
        }
        vector<int> zeros;
        vector<int> z2;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
                zeros.pb(i);
        }
        int tag[n];
        memset(tag,-1,sizeof(tag));
        int count=0;

        int temp=n;
        // cout<<zeros[0];
while(temp)
 {       for(int i=0;i<n;i++)
         {
             if(a[i]==0)
             {
                 tag[i]=count;
                 a[i]=-2;
                 temp--;
             }
 
 
 
         }
        count++;

         for(int i=0;i<n;i++)
         {
             for(auto x:zeros)
             {
                 a[i]-=abs(i-x);
 
             }
         }
         zeros.clear();
 
         for(int i=0;i<n;i++)
         {
             if(a[i]==0)
             {
                 zeros.pb(i);
             }
         }
    }
    // while(temp)
    // {    
    //     for(int i=0;i<n;i++)
    //         {
    //             if(a[i]==0)
    //             {
    //                 tag[i]=count;
    //                 temp--;
    //             }
    //             for(auto x:zeros)
    //             {
    
    //                 a[i]-=abs(i-x);
    //             }
    //             zeros.clear();
    //             for(int j=0;j<n;j++)
    //             {
    //                 if(a[j]==0)
    //                     zeros.pb(j);
    //             }
    //             count++;
    //         }
    // }

    for(int i=0;i<n;i++)
    {
        cout<<tag[i]<<" ";
    }
    cout<<endl;
      


            
    }
    return 0;
}