// Nastya just made a huge mistake and dropped a whole package of rice on the floor. Mom will come soon. If she sees this, then Nastya will be punished.

// In total, Nastya dropped n grains. Nastya read that each grain weighs some integer number of grams from a−b to a+b, inclusive (numbers a and b are known), and the whole package of n grains weighs from c−d to c+d grams, inclusive (numbers c and d are known). The weight of the package is the sum of the weights of all n grains in it.
// Help Nastya understand if this information can be correct. In other words, check whether each grain can have such a mass that the i-th grain weighs some integer number xi (a−b≤xi≤a+b), and in total they weigh from c−d to c+d, inclusive (c−d≤∑i=1nxi≤c+d).
//INPUT: 
// 5
// 7 20 3 101 18
// 11 11 10 234 2
// 8 9 7 250 122
// 19 41 21 321 10
// 3 10 8 6 1

//OUTPUT:
// Yes
// No
// Yes
// No
// Yes

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
    
    ll t;cin>>t;while(t--)
    {
        ll n,a,b,c,d,mini,maxi;
        cin>>n>>a>>b>>c>>d;
        mini=(a-b)*n;
        maxi=(a+b)*n;
        if((mini>=(c-d)&&mini<=(c+d))||(maxi>=(c-d)&&maxi<=(c+d)) || (mini<(c-d)&&maxi>(c+d))){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }

    }
}

