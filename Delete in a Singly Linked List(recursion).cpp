/*
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* curr, int x) {
        // code here
        if(x==1)
        {
            Node *temp=curr->next;
            delete curr;
            return temp;
        }
        curr->next = deleteNode(curr->next, x-1);
        return curr;
    }
};