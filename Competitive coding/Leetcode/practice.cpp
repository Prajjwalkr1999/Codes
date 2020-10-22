#include<bits/stdc++.h>
#include <boost/algorithm/string.hpp>
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
        int i,j,n;
        string input("geeks\tfor\tgeeks"); 
        vector<string> result; 
        boost::split(result, input, boost::is_any_of("\t")); 
        for ( i = 0; i < result.size(); i++) {
            cout<< result[i];
        }

    }
    return 0;
}

