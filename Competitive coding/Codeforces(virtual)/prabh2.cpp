#include<bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t; cin>>t; while(t--)
    {
        int l,r,m;
        cin>>l>>r>>m;

        int a=l;
        int rem,b,c;
        int x=l;
        int ans=INT_MAX,val=0;
        while(x<=r){
            // ans=min(m%x,ans);
            if(ans>(m%x)){
                ans=m%x;
                val=x;
            }
            x++;
        }
        a=val;
        if(m>a){
            rem=m%a;
            b=l+rem;
            c=l;
        }else{
            rem=a-m;
            b=l;
            c=l+rem;
        }
        cout<<a<<" "<<b<<" "<<c<<"\n";
            
    }
    return 0;
}