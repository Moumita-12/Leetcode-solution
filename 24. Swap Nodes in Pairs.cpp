class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

    if(head==NULL)  return NULL;

    ListNode* prevptr = NULL;
    ListNode* curptr= head;
    ListNode* nextptr;

    int count = 0;
    while(curptr!=NULL && count<2 ){
        nextptr = curptr->next;
        curptr->next = prevptr;

        prevptr = curptr;
        curptr = nextptr;

        count++;

    }

    if(nextptr!=NULL)   head->next = swapPairs(nextptr);

    return prevptr;
        
    }
};
