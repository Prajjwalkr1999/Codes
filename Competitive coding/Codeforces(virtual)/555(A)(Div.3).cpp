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
    
    // ll t;cin>>t;while(t--)1098

    {
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        set<ll> st;
        st.insert(n);

        while(n!=0){
            n++;
            if(n%10==0){
                while(n%10==0){
                    n/=10;
                }
            }
            if(st.find(n)==st.end()){
                st.insert(n);
            }else{
                break;
            }
        }
        cout<<st.size()<<"\n";


    }
}

