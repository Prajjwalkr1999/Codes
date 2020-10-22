    ListNode* head=A;
    int n=0;
    while(head!=NULL){
        n++;
        head=head->next;
    }
    head=A;
    ListNode* slow=A;
    ListNode* fast=A;
    while(fast->next&&fast->next->next){
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
    // slow->next=NULL;
    // slow=A;
    fast=prev;
    cur=A;
    while(cur!=NULL&&prev!=NULL){
        int data=cur->val-slow->val;
        cur->val=data;
        cur=cur->next;
        prev=prev->next;
    }

    cur=prev;
    prev=NULL;
    while(cur!=NULL){
        nxt=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nxt;
    }

    return head;