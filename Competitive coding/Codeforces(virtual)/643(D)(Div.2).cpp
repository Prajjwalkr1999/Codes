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
        ll i, j, k, n, s, ans = 0, cnt = 0, sum = 0;
        cin >> n>>s;

        std::vector<ll> v(n);
        // if(n==s){
        //     cout<<"NO\n";
        // }
        if(s>=(2*n)){
            cout<<"YES\n";
            for(i=0;i<n-1;i++){
                cout<<2<<" ";
            }
            cout<<(s-(2*(n-1)))<<"\n";
            cout<<1<<"\n";
        }else{
            cout<<"NO\n";
        }
        

    }
}

