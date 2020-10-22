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
        if(n>=k*k){
        if(n%2==0&&k%2==0){
            cout<<"YES\n";
        }else if(k%2!=0&&n%2!=0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }else{
        cout<<"NO\n";
    }

    }
}

