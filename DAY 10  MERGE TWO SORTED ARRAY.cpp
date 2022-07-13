// MERGE TWO SORTED ARRAY.CPP LEETCODE PROBLEM
class Solution {
public:
   ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {// l1 list l1 and l2 list l2
       if(l1==NULL)
       {    return l2;
       }if(l2==NULL)
       {   return l1;
       }
       if(l1-> val <= l2->val )
       {
            l1->next=mergeTwoLists(l1->next,l2);
           return l1;
       }
       
       else
       {
        l2->next=mergeTwoLists(l2->next,l1);
       return l2;
       }
    }
};


// REVERSE LINKED LIST.cpp LEETCODE SOLUTION C++ , CPP    PROBLEM2

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
