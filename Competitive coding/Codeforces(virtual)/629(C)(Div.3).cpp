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
        string x;
        ll i, j, k, n, ans = 0, cnt = 0, flag = 0;
        cin >> n >> x;
        string a,b;
        for(i=0;i<n;i++){
            if(x[i]=='2'&&flag==0){
                a.pb('1');
                b.pb('1');
                continue;
            }
            if(x[i]=='1'&&flag==0){
                a.pb('1');
                b.pb('0');
                flag=1;
                continue;
            }
            if(x[i]=='2'&&flag==1){
                a.pb('0');
                b.pb('2');
                continue;
            }
            if(x[i]=='1'&&flag==1){
                a.pb('0');
                b.pb('1');
                continue;
            }
            if(x[i]=='0'){
                a.pb('0');
                b.pb('0');
                continue;
            }
        }

        cout<<a<<"\n";
        cout<<b<<"\n";

    }
}

