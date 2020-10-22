//Did it myself
//Took time to implement.
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    if(!A||!(A->next)){
        return A;
    }
   ListNode* head=A->next;
    ListNode* nxt;
    ListNode* cur=head;
    ListNode* prev=A;
    ListNode* cnct=new ListNode(10);
    while(cur->next!=NULL){
        // if(cut)
        nxt=cur->next;
        cur->next=prev;
        prev->next=nxt;
        cnct->next=cur;
        cnct=prev;
        if(nxt->next==NULL){
            // cout<<1;
           return head;
        }
        cur=nxt->next;
        prev=nxt;
        
    }
    cnct->next=cur;
    cur->next=prev;
    prev->next=NULL;
    return head;
}
