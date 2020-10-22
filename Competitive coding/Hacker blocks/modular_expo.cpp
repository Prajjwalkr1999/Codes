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
        int i, j, k, a, b,c, ans = 1, cnt = 0, sum = 0;
        cin >> a>>b>>c;
        while(b){
            if(b&1){
            ans=ans*a;
            ans=ans%c;
        }

        a=a*a;
        a=a%c;
        b=b/2;
        }
        cout<<ans;
    }
}

