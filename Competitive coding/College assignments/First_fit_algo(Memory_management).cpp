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
    
    
        ll n, m;
        // n is no. of block that can be alloted
        cin >> n;
        ll bk[n];
        for (ll i = 0; i < n; i++) {
            cin >> bk[i];
        }
        // m is no. of processes which require memory
        cin>> m;
        ll pr[m];
         for ( ll i = 0; i < m; i++) {
                  cin>>pr[i];  
                }
        ll ad[m];
         for ( ll i = 0; i < m; i++) {
                   ad[i]=-1; 
                }

        for(ll i=0;i<m;i++){
            for(ll j=0;j<n;j++){
                if(bk[j]>=pr[i]){
                    ad[i]=j;
                    bk[j]-=pr[i];
                    break;
                }
            }
        }
        for ( ll i = 0; i < m; i++) {
             if(ad[i]!=-1){
               cout<<"Process : "<<i+1<<" | Allocated Block Number : "<<ad[i]+1<<"\n";
             }
         }


    
}

