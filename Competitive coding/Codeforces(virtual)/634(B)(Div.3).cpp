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
    
    ll t;cin>>t;while(t--)
    {
        ll n,a,b;
        cin >> n>>a>>b;
        string ans;
        ll tempb,tempd,temp;
        temp=a-b;
        char ch='a';
        char ch1='a';
        for(ll i=0;i<n;){
            tempb=b;
            tempd=temp;
            ch='a';
            while(tempb!=0&&i<n){
                ans.pb(ch);
                ch=char(ch +1);
                tempb--;
                i++;
            }
            while(tempd!=0&&i<n){
                ans.pb(ch1);
                tempd--;
                i++;
            }
        }
        cout<<ans<<"\n";

    }
    return 0;
}

