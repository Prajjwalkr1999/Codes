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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int k;
        cin>>k;
        int i=0,j=1;
        while(i<a.size()&&j<a.size()){
            if(i!=j&&a[j]==a[i]+k){
                return 1;
            }else if(a[i]>a[j]-k){
                j++;
            }else{
                i++;
            }
        }
        return 0;
    }
    return 0;
}

