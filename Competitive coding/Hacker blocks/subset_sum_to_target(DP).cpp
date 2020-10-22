#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 20005;

// bool subset[N][N];
bool subsetsum(ll arr[],ll n,ll sum){
    
    if(sum==0){
        return true;
    }
    if(n==0&&sum!=0){
        return false;
    }
    // if(subset[sum][n]||!subset[sum][n]){
    //     return subset[sum][n];
    // }

    if(arr[n-1]>sum){
        return subsetsum(arr,n-1,sum);
    }

    return(subsetsum(arr,n-1,sum)||subsetsum(arr,n-1,sum-arr[n-1]));

    // return subset[sum][n];
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
        ll i, j, k, n, m, cnt = 0, sum = 0;
        cin >> n>>sum;
        ll a[n];
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool ans=subsetsum(a,n,sum);
        if(ans){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }
}

