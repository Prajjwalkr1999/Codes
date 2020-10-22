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
        ll a,b,c,d, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> a>>b>>c>>d;

        if(b>=a){
            cout<<b<<"\n";
            continue;
        }
        sum=c-d;
        if(sum<=0){
            cout<<-1<<"\n";
            continue;
        }
        cnt=abs(a-b);
        if(cnt%sum==0){
            j=cnt/sum;
        }else{
            j=(cnt/sum) +1;
        }

        ans=b+(j*c);

        cout<<ans<<"\n";

    }
}

