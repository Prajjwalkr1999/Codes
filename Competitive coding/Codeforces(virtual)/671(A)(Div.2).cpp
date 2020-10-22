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
        string a;
        cin>>a;
        int cnto=0,cnte=0;
        for(int i=0;i<n;i++){
            int rem=a[i]-'0';
            if((i+1)%2&&rem%2){
                cnto++;
            }else if((i+1)%2==0&&rem%2==0){
                cnte++;
            }
        }
        if(n%2){
            if(cnto>0){
                cout<<1<<"\n";
            }else{
                cout<<2<<"\n";
            }
        }else if(n%2==0){
            if(cnte>0){
                cout<<2<<"\n";
            }else{
                cout<<1<<"\n";
            }
        }

    }
    return 0;
}

