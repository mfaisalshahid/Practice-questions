ListNode* removeNthFromEnd(ListNode* head, int n)
{ 
    int key = n;
    // First pointer will point to 
    // the head of the linked list 
    ListNode *first = head; 

    // Second pointer will point to the 
    // Nth node from the beginning 
    ListNode *second = head; 
    for (int i = 0; i < key; i++) 
    { 

        // If count of nodes in the given 
        // linked list is <= N 
        if (second->next == NULL)  
        { 

            // If count = N i.e. 
            // delete the head node 
            if (i == key - 1) 
                head = head->next; 
            return head; 
        } 
        second = second->next; 
    } 

    // Increment both the pointers by one until 
    // second pointer reaches the end 
    while (second->next != NULL) 
    { 
        first = first->next; 
        second = second->next; 
    } 

    // First must be pointing to the 
    // Nth node from the end by now 
    // So, delete the node first is pointing to 
    first->next = first->next->next; 
    return head; 
} 
