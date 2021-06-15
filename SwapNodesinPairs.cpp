ListNode* swapPairs(ListNode* head) {
/*
recursive solution
    if (!head || !head->next)
        return head;
    
    ListNode* post = swapPairs(head->next->next);
    ListNode* res = head->next;
    res->next = head;
    head->next = post;
    
    return res;
    }
*/

//////////////////////////////
        
  ListNode* temp = head; 
  while (temp != NULL && temp->next != NULL) { 
      swap(temp->val, 
           temp->next->val); 

      /* Move temp by 2 for the next pair */
      temp = temp->next->next; 
  }
  return head;
}
