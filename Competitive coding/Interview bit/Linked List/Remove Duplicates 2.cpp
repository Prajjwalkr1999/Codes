//Did it myself
//Took time to implement
//O(n) : Time
//O(1) : space
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
     if(!A||!(A->next)){
        return A;
    }
   
    ListNode* cur=A;
    ListNode* prev=NULL;
    ListNode* head=A;
    while(cur->next!=NULL){
        if(cur->val==cur->next->val){
            while(cur->next!=NULL){
                if(cur->val!=cur->next->val){
                    cur=cur->next;
                    break;
                }
                cur=cur->next;
            }
            if(cur==NULL||cur->next==NULL){
                
                if(prev){
                 prev->next=NULL;
                 return head;
                }else
                    return prev;
            }
            continue;
        }
        if(!prev){
            prev=cur;
            head=prev;
            cur=cur->next;
            continue;
        }
        prev->next=cur;
        prev=cur;
        cur=cur->next;
    }
    
    if(prev)
        return head;
    else
        return prev;
}
