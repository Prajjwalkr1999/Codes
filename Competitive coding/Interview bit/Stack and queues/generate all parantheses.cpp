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
        cin>>n;
        string s;
        cin>>s;
        map<char,char> mp;
        mp['(']=')';
        mp['{']='}';
        mp['[']=']';
        stack<char> st;
        for(int i=0;i<n;i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }else if(st.empty()||mp[st.top()]!=s[i]){
                return false;
            }else{
                st.pop();
            }
        }
        if(st.empty()){
            return true;
        }else{
            return false;
        }

    }
    return 0;
}

