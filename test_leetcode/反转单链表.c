/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* cur=head;
        ListNode* tmp=NULL;
        ListNode* ptr=NULL;
        while(cur!=NULL){
            tmp=ptr;
            ptr=cur;
            cur=cur->next;
            ptr->next=tmp;
        }
        return ptr;
    }
};

/*
利用三个指针遍历的方式将整个单链表进行反转
*/