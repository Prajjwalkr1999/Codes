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
        vector<vector<int>> a(n,vector<int> (n,0));
        int cnt=1,ptr=-n;
        if(n%2){
            ptr=1;
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    cout<<ptr<<" ";
                    ptr++;
                }
                cout<<"\n";
            }
        }else{
            for(i=0;i<n;i++){
                ptr=(ptr)+n;
                for(j=0;j<n;j++){
                    if(cnt%2){
                        ptr++;
                        cout<<ptr<<" ";
                    }else{
                        // if(!j)
                        cout<<ptr<<" ";
                        ptr--;
                    }
                }
                cout<<"\n";
                cnt++;   
            }
        }
    }
    return 0;
}

