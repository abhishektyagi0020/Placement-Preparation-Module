//problem 1 Reverse linked lsit .cpp ------Leetcode Problem solutions-------------------

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       // Recursive approach
        if(!head || !(head->next))  return head;
    auto res = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return res;
     
    }
};


// Second approach for itrative
  /* ListNode *prev = NULL, *cur=head, *tmp;
        while(cur){
            tmp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = tmp;
        }
        return prev;*/
        
        // prob 2 // Remove Duplicates from Sorted List.cpp   #leetcode
        
        
        
