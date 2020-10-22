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
        set<int> s;
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
        }
        auto itr=s.begin();
        if(s.size()==1&&*itr==1){
            if(n%2){
                cout<<"First\n";
            }else{
                cout<<"Second\n";
            }
            continue;
        }
        int ans=1,cnt=0,flag=1;
        for(i=0;i<n-1;i++){
            // if(a[i+1]==1){
                if(a[i]==1){
                    // ans++;
                    if(ans==1){
                        ans=2;
                    }else{
                        ans=1;
                    }
                }
                if(a[i+1]==1){
                    if(a[i]!=1){
                        if(ans==1){
                            ans=2;
                        }else{
                            ans=1;
                        }
                    }
                }
            // }
        }
        if(n>2&&a[n-2]!=1&&a[n-1]==1){
            // ans++;
            if(ans==1){
                ans=2;
            }else{
                ans=1;
            }
        }
        if(ans==0){
            cout<<"First\n";
            continue;
        }
        if(ans==1){
            cout<<"First\n";
        }else{
            cout<<"Second\n";
        }

    }
    return 0;
}

