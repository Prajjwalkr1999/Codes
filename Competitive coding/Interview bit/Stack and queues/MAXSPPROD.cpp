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
        // int n=a.size();
        vector<int> l(n,0);
        vector<int> r(n,0);
        stack<int> left;
        left.push(0);
        stack<int> right;
        right.push(n-1);
        for(int i=1;i<n;i++){
            while(!left.empty()&&a[i]>a[left.top()]){
                left.pop();
            }
            if(!left.empty()){
                l[i]=left.top();
            }else{
                l[i]=0;
            }
            left.push(i);
        }
        for(int i=n-2;i>=0;i--){
            while(!right.empty()&&a[i]>a[right.top()]){
                right.pop();
            }
            if(!right.empty()){
                r[i]=right.top();
            }else{
                r[i]=0;
            }
            right.push(i);
        }

        long long int ans=-1;
        for(int i=0;i<n;i++){
            ans=max(ans,(r[i]*1LL*l[i]));
        }
        if(ans!=-1){
            return ans;
        }else{
            return 0;
        }
        // cout<<ans<<endl;
    }
    return 0;
}

