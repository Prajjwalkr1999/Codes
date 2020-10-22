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
        ll i, j, k=0, n, m, ans = 0, cnt = 0, sum = 0,flag=0;
        cin >> n;
        i=n;
        ans=n;
        while(1){
        i=ans;
        sum=0;
        while(i>0){
            sum+=(i%10);
            i/=10;
            j++;
        }
        if(sum%4==0){
            break;
        }
        ans++;
        }
        cout<<ans<<"\n";    

    }
}

