// Node *removeDuplicates(Node *root)
// {
//  // your code goes here
//  Node* head = root;
//  if(!head) return NULL;
//  while(head->next!=NULL){
//      if(head->data == head->next->data){
//          head->next = head->next->next;
//      }
//      return root;
//  }
// }