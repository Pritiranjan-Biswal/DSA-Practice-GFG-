/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void deleteNode(Node* curr) {
        // code here
        Node *temp=curr->next;
        curr->data= temp->data;
        curr->next= temp->next;
        
        delete temp;
    }
};