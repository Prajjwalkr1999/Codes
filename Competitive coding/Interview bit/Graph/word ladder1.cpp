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
        queue<string> q;
        q.push(st);
        set<string> s;
        for(int i=0;i<dic.size();i++){
            s.insert(dic[i]);
        }
        int level=0;
        while(!q.empty()){
            level+=1;
            int len=q.size();

            for(int i=0;i<len;i++){
                string word=q.front();
                q.pop();

                for(int j=0;j<word.size();j++){
                    char temp=word[j];
                    for(char c='a';c<='z';c++){
                        word[j]=c;
                        if(word==target){
                            return level+1;
                        }
                        if(s.find(word)==s.end()){
                            continue;
                        }
                        s.erase(word);
                        q.push(word);
                    }
                    word[j]=temp;
                }
            }
        }


    }
    return 0;
}

