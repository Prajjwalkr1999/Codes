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
        cin >> n;
        while(n%3==0){
            n=(2*(n/3));
            cnt++;
        }
        while(n%5==0){
            n=(4*(n/5));
            cnt++;
        }
        while(n%2==0){
            n/=2;
            cnt++;
        }
        if(n!=1){
            cout<<"-1\n";
        }else{
            cout<<cnt<<"\n";
        }

    }
}

