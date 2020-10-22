#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
ll knap(ll s,ll bag[],ll val[],n){
    if(n==0){
        return 0;
    }

    if(bag[n-1]>s){
        return knap(s,bag,val,n-1);
    }else{
        return max((val[n-1]+knap(s-bag[n-1],bag,val,n-1)),knap(s,bag,val,n-1));
    }
}
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
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n>>sum;
        ll bag[n],val[n];
        for ( i = 0; i < n; i++) {
            cin >> bag[i];
        }
         for (  i = 0; i < n; i++) {
               cin>>val[i];     
                }

    }
}

