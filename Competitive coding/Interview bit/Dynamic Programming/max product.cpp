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
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        int first=0,last=0,flag=0;
        vector<int> pre(n);
        for(int i=1;i<n;i++){
            if(a[i]<0){
                last=i;
                flag++;
            }
            if(flag==1&&a[i]<0){
                first=i;
            }
            if(i==0){
                pre[i]=a[i];
                continue;
            }
            if(pre[i-1]!=0)
                pre[i]=pre[i-1]*a[i];
            else
                pre[i]=a[i];
        }
        int ans=0;
        // if(pre[n-1]>0){
        //     // return pre[n-1];
        //     cout<<pre[n-1]<<endl;
        // }else{
        //     if(first!=last){
        //         int ans1=pre[last-1];
        //         int ans2=pre[n-1]/pre[first];
        //         ans=max(ans1,ans2);
        //         cout<<ans<<endl;
        //     }else{
        //         ans=pre[n-1]/pre[first];
        //         cout<<pre[first];
        //     }
        // }
        for(i=0;i<n;i++){
            // ans=max(ans,pre[i]);
            cout<<pre[i]<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}

