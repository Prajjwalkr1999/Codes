//Did it myself
//Better solution available without extra node gfg-2nd one
//https://www.geeksforgeeks.org/merge-two-sorted-linked-lists/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {

     if(!A)
        return B;
    if(!B)
        return A;
        
   ListNode* a=A;
    ListNode* b=B;
    ListNode* res=new ListNode(0);
    ListNode* head=res;
    while(a&&b){
        if(a->val<=b->val){
            res->next=a;
            a=a->next;
        }else{
            res->next=b;
            b=b->next;
        }
        res=res->next;
    }

    while(a){
        res->next=a;
        a=a->next;
        res=res->next;
    }
    while(b){
        res->next=b;
        b=b->next;
        res=res->next;
    }
    return head->next;
}
