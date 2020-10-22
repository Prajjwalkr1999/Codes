//Did it by myself
//Reach the mid point and reverse the second half of the list
//and merge it with the first half.

//**********************************************************
// Question :=
// ---------
// Given a singly linked list

//     L: L0 → L1 → … → Ln-1 → Ln,
// reorder it to:

//     L0 → Ln → L1 → Ln-1 → L2 → Ln-2 → …
//**********************************************************

ListNode* reorder(ListNode* A){
    ListNode* slow=A;
    ListNode* fast=A;
    //Reaching the middle point
    while(fast->next!=NULL&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->enxt->next;
    }
    ListNode* prev=NULL;
    // Reversing from middle's next onwards :=
    // Let size be 5 -> mid will be 3 so reverse should start
    // from 4 till 5.
    // Let size be 4 -> mid will be 2 so reverse should start
    // from 3 till 4.
    ListNode* cur=slow->next;
    ListNode* nxt;
    while(cur!=NULL){
        nxt=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nxt;
    }
    slow->next=NULL;
    slow=A;
    // Merging :=
    while(slow!NULL&&prev!=NULL){
       curr= slow->next;
       nxt=prev->next;
       slow->next=prev;
       prev->next=curr;
       prev=nxt;
       slow=curr;
    }
    return A;

}