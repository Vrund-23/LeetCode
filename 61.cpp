 ListNode* rotateRight(ListNode* head, int k) {
        if(!head ||!head->next || k==0) return head;
        ListNode* tail = head;
        int len=1;
        while(tail->next){
            tail=tail->next;
            len++;
        }
        k=k%len;
        if(k==0) return head;
        tail->next=head;
        ListNode* temp = head;
        for(int i=0;i<len-k-1;i++){
            temp=temp->next;
        }
        ListNode* newHead = temp->next;
        temp->next=nullptr;
        return newHead;   
    }