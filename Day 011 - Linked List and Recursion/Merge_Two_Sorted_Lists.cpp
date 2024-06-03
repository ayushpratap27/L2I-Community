ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp = new ListNode();
        ListNode* current = temp;

        while(list1!=nullptr && list2!=nullptr){
            if(list1->val < list2->val){
                current->next=list1;
                list1=list1->next;
            }else{
                current->next=list2;
                list2=list2->next;
            }
            current=current->next;
        }

        if (list1!=nullptr){
            current->next=list1;
        }else{
            current->next=list2;
        }

        ListNode* mergedList=temp->next;
        delete temp;

        return mergedList;
}
// T.C.= O(n + m), where n and m are the lengths of the two input lists
// S.C.= O(1)
