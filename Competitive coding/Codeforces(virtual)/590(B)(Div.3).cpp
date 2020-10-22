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
    
    // ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0,capacity;
        cin >> n;
        cin>>capacity;
        // cout<<capacity;
        vector<ll> page(n);
        for ( i = 0; i < n; i++) {
            cin >> page[i];
        }
        set<ll> s;
        deque<ll> q;
        // ll fault=0;

        for(ll i=0;i<n;i++){
            if(s.size()<capacity && (s.find(page[i])==s.end())){
                s.insert(page[i]);
                q.push_front(page[i]);
            }else{
                if(s.find(page[i])==s.end()){
                    ll old=q.back();
                    q.pop_back();
                    q.push_front(page[i]);
                    s.erase(old);
                    s.insert(page[i]);
                }
            }
        }
        cout<<q.size()<<"\n";
        for(auto it=q.begin();it!=q.end();it++){
            cout<<*it<<" ";
        }
        cout<<"\n";
    }
}

