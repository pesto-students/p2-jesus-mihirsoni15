// // { Driver Code Starts
// // driver

// #include <bits/stdc++.h>
// using namespace std;

// /* Linked list Node */
// struct Node {
//     int data;
//     struct Node* next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// struct Node* buildList(int size)
// {
//     int val;
//     cin>> val;
    
//     Node* head = new Node(val);
//     Node* tail = head;
    
//     for(int i=0; i<size-1; i++)
//     {
//         cin>> val;
//         tail->next = new Node(val);
//         tail = tail->next;
//     }
    
//     return head;
// }

// void printList(Node* n)
// {
//     while(n)
//     {
//         cout<< n->data << " ";
//         n = n->next;
//     }
//     cout<< endl;
// }


//  // } Driver Code Ends
// /* node for linked list:

// struct Node {
//     int data;
//     struct Node* next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// */

// class Solution
// {
//     public:
//     //Function to add two numbers represented by linked list.
//     Node* reverse1(Node* head) {
//         Node* next = NULL;
//         Node* prev = NULL;
//         Node* cur = head;
//         while(cur!=NULL){
//             next = cur->next;
//             cur->next = prev;
//             prev = cur;
//             cur = next;
//         }
//         return prev;
//     }
//     struct Node* addTwoLists(struct Node* first, struct Node* second)
//     {
//         // code here
//         first = reverse1(first);
//         second = reverse1(second);
//         int c=0;
//         int s=0;
//         Node* temp;
//         Node* res=NULL;
//         Node* cur=NULL;
//         while(first!=NULL || second!=NULL){
//             s = c + (first?first->data:0) + (second?second->data:0);
//             c = (s >= 10) ? 1:0;
//             s = s % 10;
//             temp = new Node(s);
//             if(res = NULL) res = temp;
//             else cur -> next = temp;
//             cur = temp;
//             if (first) first = first->next;
//             if (second) second = second->next;
//         }
//         if (c > 0){
//             temp = new Node(c);
//             cur->next = temp;
//             cur = temp;
//         }
//         res = reverse1(res);
//         return res;
//     }
// };


// // { Driver Code Starts.

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n, m;
        
//         cin>>n;
//         Node* first = buildList(n);
        
//         cin>>m;
//         Node* second = buildList(m);
//         Solution ob;
//         Node* res = ob.addTwoLists(first,second);
//         printList(res);
//     }
//     return 0;
// }
//   // } Driver Code Ends