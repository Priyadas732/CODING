/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if(head==NULL) return NULL;
        
        //1) Insert the new nodes between the original linkedlist
        Node* curr = head;
        
        while(curr){
            Node* currNext = curr->next;
            curr->next = new Node(curr->val); // A->B

            curr->next->next = currNext;      // A->X->B

            curr = currNext;
        }

        //2) Deep copy of random poniters
        curr = head;
        while(curr && curr->next){
            if(curr->random==NULL){
                curr->next->random = NULL;
            }else{
                curr->next->random = curr->random->next;
            }

            curr = curr->next->next;
        }

        //3) Separate the linked lists
        Node* newHead = head->next;
        Node* newCurr = newHead;
        curr = head;

        while(curr && newCurr){
            curr->next = curr->next == NULL? NULL: curr->next->next;

            newCurr->next = newCurr->next == NULL? NULL: newCurr->next->next;

            curr = curr->next;
            newCurr = newCurr->next;
        }
        return newHead;
    }
};