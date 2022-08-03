// class Solution
// {
//     public:
//     //Function to remove duplicates from unsorted linked list.
//     Node * removeDuplicates( Node *head) 
//     {
//      // your code goes here
//      map<int, int> m;
//      Node* cur = head;
//      m[cur->data] = 1;
//      Node* prev = cur;
//      cur = cur->next;
//      while(cur!=NULL){
//          if(m[cur->data]){
//              prev->next = cur->next;
//              free(cur);
//          }
//          else{
//              m[cur->data] = 1;
//              prev = cur;
//          }
//          cur = prev->next;
//      }
//      return head;
//     }
// };