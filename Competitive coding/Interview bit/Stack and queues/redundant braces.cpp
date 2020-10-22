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
        string a;
        cin>>a;
        // cout<<a;
        int n=a.size();
        int open=0,exp=0;
        stack<char> st;
        for(int i=0;i<n;i++){
            if(a[i]=='('||a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'){
                st.push(a[i]);
             }else if(a[i]==')'){
                if(st.top()=='('){
                    return 1;
                    // cout<<1<<endl;
                }else{
                    while(!st.empty()&&st.top()!='('){
                        st.pop();
                    }
                    st.pop();
                }
             }
        }
        // cout<<0;
        return 0;
        
    }
    return 0;
}

