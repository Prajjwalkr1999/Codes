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
        ll z,x,y,l,r, ans = 0, cnt = 0, sum = 0;
        cin>>x>>y>>l>>r;

        if(x==0||y==0){
            z=0;
            cout<<0<<"\n";
        }else{
            z=x|y;
            cout<<z<<"\n";
        }
        

    }
}

