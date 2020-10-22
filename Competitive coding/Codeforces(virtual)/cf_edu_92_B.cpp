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
        int i,j,n,k,z;
        cin>>n>>k>>z;
        vector<int> a(n);
        vector<int> pre(n+1);
        pre[0]=0;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            pre[i+1]=pre[i]+a[i];
        }
        j=k+1;
        int max=pre[j];
        // k--;
        // int y=0;
        int mul=1;
        for(int i=2;i<n&&z>0&&k>0;i++){
            int val=pre[i]-pre[i-2];
            mul=1;
            k--;
            if(z>((k)/2)){
                mul=(k)/2;
                k-=mul*2;
                z-=mul;
            }else{
                mul=z;
                z-=mul;
                k-=mul*2;
            }
            int y=pre[i]+(val*(mul));
            int l=i;
            if(k>0&&z==1){
                if(i<n&&a[i-2]>a[i+1]){
                    y=y+a[i-2];
                    z=0;
                    k-=1;
                    l--;
                }
            }
            if(k>0){
                y+=pre[l+k]-pre[l];
            }
            cout<<i<<" Y : "<<y<<endl;
            if(max<y){
                max=y;
            }
            z+=mul;
            k+=mul*2;
        }

        cout<<max<<"\n";

    }
    return 0;
}

