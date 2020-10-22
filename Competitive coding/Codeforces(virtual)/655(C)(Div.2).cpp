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
        int i,j,n;
        cin >> n;
        vector<int> a(n);
        int cnt=0,cnt2=0;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
           
        }
        // vector<int> temp;
        // temp=a;
        // sort(temp.begin(), temp.end());
        // for(i=0;i<n;i++){
        //     if()
        // }
        vector<int> gg(n,0);
        int flag=0,ans=0,flag2=0,x=0;
        for(i=0;i<n;i++){
            if(a[i]==i+1){
                gg[i]=1;
                cnt++;
            }else{
                gg[i]=0;
                x++;
            }    
        }
        int cnt1=0;
        i=0;
        if(x==0){
            cout<<0<<"\n";
            continue;
        }
        while(gg[i]==1){
            i++;
            cnt1++;
        }
        i=n-1;
        while(gg[i]==1){
            i--;
            cnt2++;
        }
        if(cnt1+cnt2==cnt){
            ans=1;
            cout<<1<<"\n";
            continue;
        }
        cout<<2<<"\n";

       
    }
    return 0;
}

