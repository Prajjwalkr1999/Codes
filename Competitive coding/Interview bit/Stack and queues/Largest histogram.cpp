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
        
        int ans=0;
        stack<int> st;
        st.push(0);
        for(int i=1;i<n;i++){
            if(st.empty()||a[i]>a[st.top()]){
                st.push(i);
            }else{
                while(!st.empty()&&(a[i]<a[st.top()])){
                    int idx=st.top();
                    st.pop();
                    int l=-1;
                    if(!st.empty()){
                        l=st.top();
                    }
                    int val=a[idx]*(i-l-1);
                    ans=max(ans,val);
                }
            
                st.push(i);
            }
            
        }
        while(!st.empty()){
            int idx=st.top();
            st.pop();
            int l=-1;
            if(!st.empty()){
                l=st.top();
            }
            int val=a[idx]*(n-l-1);
            ans=max(ans,val);
        }
        cout<<ans<<endl;
    }
    return 0;
}

