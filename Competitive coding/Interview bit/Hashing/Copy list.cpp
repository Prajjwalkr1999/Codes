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
        
        RandomListNode *head=A;
        unordered_map<RandomListNode*,RandomListNode*> mp;
        RandomListNode* copy;
        while(head!=NULL){
            RandomListNode* temp=new RandomListNode(head->label);
            mp[head]=temp;
            head=head->next;
        }
        head=A;
        while(head!=NULL){
            copy=mp[head];
            if(head->next!=NULL){
                copy->next=mp[head->next];
            }
            if(head->random!=NULL){
                copy->random=mp[head->random];
            }
            head=head->next;
        }
        return copy;
    }
    return 0;
}

