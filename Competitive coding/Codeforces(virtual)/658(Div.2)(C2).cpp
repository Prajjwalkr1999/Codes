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
    
    int t;cin>>t;while(t--)
    {
        int i,j,n;
        cin >> n;
        vector<int> ans;
        string a,b;
        cin>>a>>b;
        j=0,i=0;
        vector<int> idx;
        while(i<n){
            if(i%2==0){
                idx.pb(j);
                j++;
                i++;
            }else{
                idx.pb(n-j);
                i++;
            }
        }
        i=0;
        int cnt=0,k=1;
        j=n-1;
        while(i<idx.size()){
            int c1=a[idx[i]]-'0';
            if(cnt%2){
                if(c1==1){
                    c1=0;
                }else{
                    c1=1;
                }
            }
            int c2=b[j]-'0';
            if(c1==c2){
                ans.pb(1);
            }
            ans.pb(j+1);
            i++;
            j--;
            cnt++;
        }
        cout<<ans.size()<<" ";
                for(auto x:ans){
                    cout<<x<<" ";
                }
                cout<<"\n";

    }
    return 0;
}

