/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    
    struct ListNode* curr=head;
    struct ListNode* temp=head;
        int length=1,i=1;
        while(curr!=NULL)
        {
            curr=curr->next;
            length++;
        }
    
        if(length%2!=0)
            length=length+1;
        
        for(;i<length/2;i++)
        {
            temp=temp->next;
        }
    return temp;
}
