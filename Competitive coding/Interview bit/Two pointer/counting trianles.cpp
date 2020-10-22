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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.rbegin(), arr.rend());
        // int n=arr.size();
        int i=0,a=0,b=0,c=0,val=0;
        while(i<n){
            c=arr[i];
            int left=i+1,right=n-1;
            while(left<right){
                a=arr[left];
                b=arr[right];
                if(a+b>c&&b+c>a&&c+a>b){
                    val++;
                }
                if(a+b>c){
                    right--;
                }else{
                    left++;
                }
            }
            i++;
        }
        return val;


    }
    return 0;
}

