class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    ListNode* prevptr = NULL;
    ListNode* curptr= head;
    ListNode* nextptr;

    while(curptr!=NULL){
        nextptr = curptr->next;
        curptr->next = prevptr;

        prevptr = curptr;
        curptr = nextptr;


    }

    return prevptr;
    }
};
