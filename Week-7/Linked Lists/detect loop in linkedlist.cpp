// class Solution
// {
//     public:
//     //Function to check if the linked list has a loop.
//     bool detectLoop(Node* head)
//     {
//         // your code here
//         if(head==NULL||head->next==NULL){
//             return false;
//         }
//         Node *slow = head;
//         Node *fast = head;
//         while(fast->next&&fast->next->next){
//             slow = slow->next;
//             fast - fast->next->next;
//             if(slow == fast){
//                 return 1;
//             }
//         }
//         return 0;
//     }
// };