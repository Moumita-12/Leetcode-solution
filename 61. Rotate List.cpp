class Solution {
public:
int getlength(ListNode* head1)
    {

        int count=1;
        while(head1->next!=NULL)
        {
            count++;
            head1=head1->next;
        }
        return count;
    }

ListNode* rotateRight(ListNode* head, int k) {
    if(head==NULL || k==0)  return head;

        int l= getlength (head);
        k=k%l;


for(int i=0;i<k;i++)
    {
        ListNode  * tail = head;
    
        ListNode  * pretail = NULL;    

     while(tail->next!=NULL){

            pretail = tail;
            tail = tail->next;

        }

       pretail->next = NULL;
        tail->next = head;
        head = tail;

    }


      return head;


}

};
