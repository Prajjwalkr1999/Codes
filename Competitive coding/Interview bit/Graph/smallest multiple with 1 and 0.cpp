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
    
    // int t;cin>>t;while(t--)
    {
        string s="1";
        queue<string> q;
        q.push(s);
        set<int> s;
        while(!q.empty()){
            string x=q.front();
            q.pop();
            int mul=stoi(x);
            if(mul%n==0){
                return x;
            }
            if(s.find(mul%n)==s.end()){
                s.insert(mul%n);
                q.push(x+"0");
                q.push(x+"1");
            }

        }

    }
    return 0;
}

