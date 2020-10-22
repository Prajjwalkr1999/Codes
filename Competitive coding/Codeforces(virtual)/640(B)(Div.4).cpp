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
    
    ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n>>k;
        if(n<k){
            cout<<"NO\n";
            continue;
        }
        if(k%2==0&&n%2==1){
            cout<<"NO\n";
            continue;
        }
        if(n%k==0){
            cout<<"YES\n";
            // cout<<n/k<<"\n";
            for(i=0;i<k;i++){
                cout<<n/k<<" ";
            }
            cout<<"\n";
            continue;
        }
        if(n%2==1){
            if((n-k-1)>0){
                cout<<"YES\n";
                for(i=0;i<k-1;i++){
                    cout<<1<<" ";
                    // cout<<2;
                }
                cout<<n-(k-1)<<"\n";
            }else{
                cout<<"NO\n";
            }
            continue;
        }
       if(k%2==1){
        sum=0;
            if(n>(k*2)){
                cout<<"YES\n";
                for(i=0;i<k-1;i++){
                    cout<<2<<" ";
                    sum+=2;
                }
                cout<<n-sum<<"\n";
            }else{
                cout<<"NO\n";
            }
            continue;
        }
        if(n>k){
            cout<<"YES\n";
            for(i=0;i<k-1;i++){
                cout<<1<<" ";      
            }
              cout<<n-(k-1)<<"\n";

        }else{
            cout<<"NO\n";
        }
       

    }
}

