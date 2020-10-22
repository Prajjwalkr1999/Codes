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
        // cin >> n;
        string a;
        cin>>a;
        n=a.size();
        int x;
        cin>>x;
        string w;
        for(int i=0;i<n;i++){
            w+='1';
        }
        // cout<<w<<endl;
        for(int i=0;i<a.size();i++){
            if(a[i]=='0'){
                if(i+x<n){
                    w[i+x]='0';
                }
                if(i-x>=0){
                    w[i-x]='0';
                }
            }
        }
        // cout<<w<<endl;
        bool check=true;
        int flag1=0,flag2=0;
        for(int i=0;i<n;i++){
            flag1=0;flag2=0;
            if(a[i]=='1'){
                if(i+x<n){
                    if(w[i+x]=='1'){
                        flag1=1;
                    }
                }
                if(i-x>=0){
                    if(w[i-x]=='1'){
                        flag2=1;
                    }
                }   
                if(flag1==1||flag2==1){
                    check=true;
                }else{
                    check=false;
                    break;
                }
            }
        }
        if(check){
            cout<<w<<"\n";
        }else{
            cout<<-1<<"\n";
        }



    }
    return 0;
}

