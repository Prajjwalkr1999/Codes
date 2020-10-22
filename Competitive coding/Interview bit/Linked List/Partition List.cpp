ListNode* part(ListNode* A,int x){
    if(!A||!(A->next)){
    return A;
    }
    ListNode* first=new ListNode(0);
    ListNode* second=new ListNode(0);
    ListNode* equal=new ListNode(0);
    ListNode* firstptr=first;
    ListNode* secondptr=second;
    ListNode* equalptr=equal;
    ListNode* head=A;
    while(head){
        if(head->val==x){
            equal->next=head;
        }else if(head->val<x){
            first->next=head;
        }else if(head->val>x){
            second->next=head;
        }
        head=head->next;
    }
    if(!second->next){
        second->next=NULL;
    }
    if(!(firstptr->next)){
        if(!(equalptr->next)){
            return secondptr->next;
        }
        equal->next=secondptr->next;
        return equalptr->next;
    }
    if(!equalptr->next){
        first->next=secondptr->next;
        return firstptr->next;
    }
    first->next=equalptr->next;
    equal->next=secondptr->next;
    return firstptr->next;

}