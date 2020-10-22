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
        ll k, n, m;
        cin >>n>>k;
        ll a=0,b=0,lmt=0,chk=0,ans=0;
        if(n%k==0){
            cout<<n<<"\n";
        }else{
            a=n/k;
            b=n/k+1;
            chk=a+1;
            lmt=n-k*a;;
            if(lmt>=(k/2)){
                ans=n-(lmt-k/2);
            }else{
                ans=n;
            }
            cout<<ans<<"\n";
        }

    }
}

