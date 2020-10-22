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
        int i,j,n,x;
        cin >> n>>x;
        vector<int> a(n);
        int flag=0,flag2=0;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]!=x){
                flag++;
            }
            if(a[i]==x){
                flag2++;
            }
        }
        if(flag==0){
            cout<<0<<"\n";
            continue;
        }
        int diff=0;
        for(int i=0;i<n;i++){
             diff+=(x-a[i]);
        }
        if(diff==0||flag2>0){
            cout<<1<<"\n";
        }else{
            cout<<2<<"\n";
        }
    }
    return 0;
}

