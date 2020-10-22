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
    
    // ll t;cin>>t;while(t--)
    {
        ll n,need;
        cin >> n>>need;
        ll a[n];
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll x=(1<<n)-1;
        ll j,sum=0,y,flag=1;
        for(ll i=1;i<=x;i++){
            j=i;
            sum=0;
            y=0;
            while(j>0){
                if(j&1){
                    sum+=a[y];
                }
                y++;
                j=j>>1;
            }
            if(sum==need){
                cout<<"Yes"<<endl;
                flag--;
                break;
            }
        }
        if(flag){
            cout<<"No"<<endl;
        }

    }
}

