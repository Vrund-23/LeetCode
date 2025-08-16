  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c=0,sum;
        ListNode* dummy=new ListNode(-1);
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* curr=dummy;
        while(t1!=nullptr || t2!=nullptr){
            sum=c;
            if(t1!=nullptr) sum=sum+t1->val;
            if(t2!=nullptr) sum=sum+t2->val;
            
            curr->next=new ListNode(sum%10);
            c=sum/10;
            curr=curr->next;
            if(t1!=nullptr )t1=t1->next;
            if(t2!=nullptr) t2=t2->next;
        }
        if(c){
            curr->next=new ListNode(c);
        }
        return dummy->next;
    }