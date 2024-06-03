bool isPalindrome(ListNode* head) {

    ListNode* slow=head;
    ListNode* fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }

    ListNode* curr=slow->next;
    ListNode* prev=slow;
    slow->next=NULL;

    while(curr){
        ListNode* nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }

    ListNode* head1=head;
    ListNode* head2=prev;

    while(head2){
        if(head1->val!=head2->val){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }

    return true;
        
}
// T.C.= O(n)
// S.C.= O(1)
