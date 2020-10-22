#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;

// int solve(int a,int b,string c){
//     if(c=="/"){
//         return b/a;
//     }else if(c=="*"){
//         return a*b;
//     }else if(c=="+"){
//         return a+b;
//     }else if(c=="-"){
//         return b-a;
//     }
// }

int isex(string c){
        if(c=="/"){
            return 4;
        }else if(c=="*"){
            return 3;
        }else if(c=="+"){
            return 1;
        }else if(c=="-"){
            return 2;
        }else{
            return 5;
        }
    }
int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    // int t;cin>>t;while(t--)
    {
        int i,j,n;
        cin >> n;
        vector<string> tokens(n);
        for ( i = 0; i < n; i++) {
            cin >> tokens[i];
        }
        // for(auto x:a){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        // stack<int> st;
        // for(int i=0;i<n;i++){
        //     if(isex(a[i])){
        //         if(st.size()>=2){
        //             int first=st.top();
        //             st.pop();
        //             int second=st.top();
        //             st.pop();
        //             int ans=solve(first,second,a[i]);
        //             st.push(ans);
        //         }
        //     }else{
        //         int temp=stoi(a[i]);
        //         st.push(temp);
        //     }
        // }
        // cout<<st.top();
        vector<int> pre(tokens.size()/2+1);
        int index=0;
        for(string x:tokens){
            int val=isex(x);
            switch(val){
                case 1: 
                    pre[index-2]=pre[index-2]+pre[index-1];
                    index--;
                    break;
                case 2:
                    pre[index-2]=pre[index-2]-pre[index-1];
                    index--;
                    break;
                case 3:
                    pre[index-2]=pre[index-2]*pre[index-1];
                    index--;
                    break;
                case 4:
                    pre[index-2]=pre[index-2]/pre[index-1];
                    index--;
                    break;
                default:
                    pre[index++]=stoi(x);
                    break;
            }
        }
        return pre[0];
    }
    return 0;
}

