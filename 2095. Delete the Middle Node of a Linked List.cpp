class Solution {
public:

    ListNode* deleteMiddle(ListNode* head) {

    if(head==NULL || head->next==NULL)  return NULL;

        ListNode* temp = head;
    ListNode *prev=head, *forward=head;

    while(forward!= NULL && forward->next!= NULL){
            prev = temp;
            temp = temp->next;
            forward = forward->next->next;
         
    }
     
    prev->next=temp->next;
    delete temp;

    return head;

   
    }
};
