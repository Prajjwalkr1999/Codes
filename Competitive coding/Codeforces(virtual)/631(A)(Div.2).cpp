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
        ll n,x;
        cin >> n>>x;
        vector<ll> a(n);
        vector<ll> check(101);
        check[0]=1;
        ll v=0,x1;
        x1=x;
         for ( int i = 1; i <= 100; i++) {
                    check[i]=0;
                }
         for ( int i = 0; i < n; i++) {
                  cin>>a[i];  
                  check[a[i]]++;
                }
                 // for ( int i = 0; i <=100; i++) {
                 //            cout<<check[i]<<" ";
                 //        }
                 //        cout<<endl;
        for(ll i=1;i<=100;i++){
            
            if(x1==0&&check[i]==0){
                v=i-1;
                break;
            }
            if(check[i]==0&&x1>0){
                x1--;
                check[i]++;
                // cout<<i<<" x1 : "<<x1<<endl;
            }
            if(x1==x){
                v=i;
            }
        }
        // cout<<"X! : "<<x1<<" "<<v<<endl;
        if(v==0){
            v=100+x1;
        }else{
        v=v+x1;}
        cout<<v<<"\n";


    }
}

