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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for ( ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());

        ll count=0,sum=0,x;
        for(ll i=0;i<n;i++){
            x=a[i]-count;
            if(x<0){
                x=0;
            }
            sum+=x;
            count++;
        }

        cout<<sum<<endl;

    }
}

