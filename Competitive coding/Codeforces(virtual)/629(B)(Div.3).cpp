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
        ll k, n;
        cin >> n >>k;
        string ans;
        ll x=1;
        ll k1=1;
        ll jump=0;
        while(k1<k){
            jump++;
            x=x+1;
            k1=k1+x;
            // cout<<k1<<endl;
        }
        // cout<<jump<<endl;
        for(ll i=0;i<n-2-jump;i++){
            ans.pb('a');
        }
        ans.pb('b');
        ans.pb('b');
        for(int i=0;i<jump;i++){
            ans.pb('a');
        }
        ll y=jump;
        while(k1!=k){
            swap(ans[n-y-1],ans[n-y]);
            y--;
            k1--;
        }
        cout<<ans<<"\n";
    }
}

