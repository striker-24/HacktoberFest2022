class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr)
            return head;
        ListNode *ptr=head;
        long long int count=1L;
        while(ptr->next!=NULL){
            ptr=ptr->next;
            count++;
        }
        ptr->next=head;
        if(count<=k){
            k=k%count;
        }
        if(k==0){
            ptr->next=NULL;
            return head;
        }
        count=count-k-1;
        ptr=head;
        while(count--){
            ptr=ptr->next;
        }
        head=ptr->next;
        ptr->next=NULL;
        return head;
    }
};
