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
    
    set<ll> st;
    st.insert(1);
    for(auto x:st){
        if(st.size()==10005){
            break;
        }

        st.insert(x*2);
        st.insert(x*3);
        st.insert(x*5);
    }
    ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        set<int>::iterator it1;
        for (it1 = st.begin(),i=0; it1!=st.end();  ++it1,i++) 
       { 
        if(i==n){
           cout << *it1 <<endl;}  
        }
       }
    }
}

