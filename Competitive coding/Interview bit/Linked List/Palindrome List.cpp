//Did it myself
//Reverse the second half and check
ListNode* reorder(ListNode* A){
    ListNode* slow=A;
    ListNode* fast=A;
    //Reaching the middle point
    while(fast->next!=NULL&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
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
    while(slow!=NULL&&prev!=NULL){
        if(slow->data!=prev->data){
            return 0;
        }
        slow=slow->next;
        prev=prev->next;
    }
    return 1;
}