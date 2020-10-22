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
    
    // ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, cnt = 0, sum = 0;
        string s;
        cin>>s;
        string ans;
        bool val=true;
        while(val){
            ans=s;
            val=next_permutation(s.begin(),s.end());
            if(ans[0]<=s[0]){
                cout<<s<<endl;
            }
        }


    }
}

