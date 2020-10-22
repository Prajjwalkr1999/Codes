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
        string s;
        cin>>s;
        vector<int> zero;
        vector<int> one;
        for(i=0;i<n;i++){
            char x=s[i];
            if(x=='0'){
                zero.pb(i);
            }else{
                one.pb(i);
            }
        }
        int zmx=*max_element(zero.begin(),zero.end());
        int zmn=*min_element(zero.begin(),zero.end());
        int omx=*max_element(one.begin(),one.end());
        int omn=*min_element(one.begin(),one.end());
        if(omn<zmn){
            string ans;
            for(i=zmn;i<n;i++){
                cout<<s[i];
            }
            cout<<"\n";
        }else{
            if(zmx<omn){
                cout<<s<<"\n";
                continue;
            }
            for(i=0;i<n;i++){
                if(s[i]=='1'){
                    break;
                }
            }
            for(j=0;j<i;j++){
                cout<<s[i];
            }
            for(j=zmx;j<n;j++){
                cout<<s[i];
            }
            cout<<"\n";
        }
    }
    return 0;
}

