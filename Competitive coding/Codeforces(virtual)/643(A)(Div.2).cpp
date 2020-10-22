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
        ll i, j, k, n, m,a, ans = 0, cnt = 0, sum = 0;
        cin >> a>>k;
        ll min=INT_MAX,max=INT_MIN;
        ll a1=a;
        k--;
        while(min!=0&&k>0){
            ll num=a1;
            min=INT_MAX;max=INT_MIN;
            while(num>0){
                ll x=num%10;
                num/=10;
                if(x<min){
                    min=x;
                }
                if(x>max){
                    max=x;
                }
            }
            k--;
            // cout<<min<<" : "<<max<<"\n";
            a1=a1+min*max;
        }
        cout<<a1<<"\n";
    }
}

