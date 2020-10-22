// Did it myself
// Lost point bcz i didn't consider the case that B could 
// larger than size of list
// where B is no. of rotation

//Example : 1->2->3->4->5
// B=2 
// Output: 4->5->1->2->3
  
int findLen(ListNode *temp){
     int l=0;
     while(temp!=NULL){
         l++;
         temp=temp->next;
     }
     return l;
}
ListNode* rotate(ListNode* A,int B){
    ListNode* slow=A;
    ListNode* fast=A;
    int l=findLen(A);
    int k=B%l;
    if(k==0){
        return A;
    }
    while(k--){
        fast=fast->next;
    }
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    ListNode* new_start=slow->next;
    ListNode* cur_start=A;
    slow->next=NULL;
    fast->next=cur_start;
    A=new_start;
    return A;

}