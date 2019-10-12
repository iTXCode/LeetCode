- ## 题目描述

  输入一个链表，输出该链表中倒数第k个结点。



思路：双指针遍历

先让其中一个指针往后挪动K个结点，然后再让两个指针共同往后移动

直到先移动的结点遇到空为止

````c++
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
    ListNode* front=pListHead;
       ListNode* back=pListHead;
        for(int i=0;i<k;i++){
            if(front==NULL){
            return NULL;
        }
             front=front->next;
        }  
        while(front!=NULL){
            front=front->next;
            back=back->next;
      }
       return back;
}
};
````

