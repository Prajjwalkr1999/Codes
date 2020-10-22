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
        ll i, j, k, n, m, ans = 0, cnt = 0,count = 0;
        cin >> n;
        string s;
        cin>>s;
        for(i=0;i<n;i+=2){
            if(s[i]=='a'){
                if(s[i+1]=='b'){
                    continue;
                }else{
                    s[i+1]='b';
                    cnt++;
                }
            }
            if(s[i]=='b'){
                if(s[i+1]=='a'){
                    continue;
                }else{
                    s[i+1]='a';
                    cnt++;
                }
            }
        }
        cout<<cnt<<"\n";
        cout<<s<<"\n";

        // cout<<count<<endl;
        // cout<<cnt<<endl;

    }
}

