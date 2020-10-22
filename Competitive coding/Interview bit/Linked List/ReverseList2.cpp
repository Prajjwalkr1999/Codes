#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
struct ListNode{
    int val;
    struct ListNode *next;
    ListNode(int data){
        this->val=data;
        this->next=NULL;
    }
};
ListNode *head=NULL;
void push(int data){
    ListNode *temp=new ListNode(data);
    if(head==NULL){
        head=temp;
        return;
    }
    temp->next=head;
    head=temp;
}
void reverse(int m,int n){
    int pnt=m-n;
    ListNode *temp;
    temp=head;
    while(pnt!=0&&temp!=NULL){
        temp=temp->next;
        pnt--;
    }
    m=m-2;
    ListNode *st;
    st=head;
    while(m!=0&&st!=NULL&&temp!=NULL){
        st=st->next;
        temp=temp->next;
        m--;
    }
    pnt=m-n+1;
    ListNode *stp=st->next;
    // ListNode *endp=temp;
    // ListNode *endn=temp->next;

    ListNode *prev=temp->next;
    ListNode *cur=st->next;
    ListNode *nxt;
    while(pnt--){
        nxt=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nxt;
    }
    st->next=temp;

}
void print(){
    ListNode *temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" -> ";
        temp=temp->next;
    }
}
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
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        push(1);
        push(2);
        push(3);
        push(4);
        push(5);
        push(6);
        push(7);
        push(8);
        push(9);
        print();
        reverse(3,8);
        print();
        

    }
}

