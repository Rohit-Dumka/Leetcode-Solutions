/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *dummy=NULL, *curr = NULL;
    dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    curr = dummy;
    int carry = 0;
    int sum = 0;
    while(l1 && l2){
        sum = l1->val + l2->val + carry;
        curr->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        curr = curr->next;
        curr->val = sum%10;
        carry = sum/10;
        curr->next = NULL;
        l1 = l1->next;
        l2 = l2->next;
    }
    while(l1){
        sum = l1->val + carry;
        curr->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        curr = curr->next;
        curr->val = sum%10;
        carry = sum/10;
        curr->next = NULL;
        l1 = l1->next;
    }
    while(l2){
        sum = l2->val + carry;
        curr->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        curr = curr->next;
        curr->val = sum%10;
        carry = sum/10;
        curr->next = NULL;
        l2 = l2->next;
    }
    if(carry){
        sum = carry;
        curr->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        curr = curr->next;
        curr->val = sum%10;
        carry = sum/10;
        curr->next = NULL;
    }
    return dummy->next;
}