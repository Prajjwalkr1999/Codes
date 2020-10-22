#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;


int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    // int t;cin>>t;while(t--)
    {
        int i,j,n;
        cin >> n;
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }

        int l=0,r=n-1;
        int maxleft=0,maxright=0,res=0;
        while(l<=r){
            if(a[l]<=a[r]){
                if(a[l]>maxleft) maxleft=a[l];
                else res+=maxleft-a[l];
                l++;
            }else{
                if(a[r]>maxright) maxright=a[r];
                else res+=maxright-a[r];
                r--;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}

