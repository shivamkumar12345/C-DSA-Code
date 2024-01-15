#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data =val;
        next= NULL;
    }

};
void printLL(Node* head){
    if(head==NULL)return;
    cout<<head->data<<" ";
    printLL(head->next);
}
void insertAtFront(Node* &head, int val){
    Node* newNode = new Node(val);
    if(head ==NULL){
        head= newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
    return;
}
void insertAtMid(Node* &head, int pos, int val){
    Node* newNode = new Node(val);
    if(head ==NULL || pos==0){
       insertAtFront(head,val);
       return;
    }
    Node* runningPtr = head;
    while(runningPtr->next !=NULL && --pos){
        runningPtr = runningPtr->next;
    } 
    newNode->next = runningPtr->next;
    runningPtr->next = newNode;
    return;
}
bool isCycle(Node* &head){
    Node *slow = head, *fast = head;
    while(fast !=NULL && fast->next !=NULL){
        fast= fast->next->next;
        slow= slow->next;
        if(fast == slow){
            return true;
        }
    }
    return false;
}
void createCycle(Node* &head){
    Node *temp = head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = head->next->next;
}
void insersection(Node* head){
    Node* slow=head,*fast = head;
    while(fast!=NULL && fast->next !=NULL){
        slow= slow->next;
        fast = fast->next->next;
        if(slow ==fast)break;
    }
    Node * temp = head, *prev=NULL;
    while(slow != temp){
        prev= slow;
        slow= slow->next;
        temp = temp->next;
    }
    prev->next = NULL;// to break the cycle
    cout<<temp->data<<" ";

}
int main(){
    Node * head = NULL;
    insertAtFront(head, 1);
    insertAtFront(head, 2);
    insertAtFront(head, 3);
    insertAtFront(head, 4);
    insertAtFront(head, 5);
    insertAtFront(head, 6);
    insertAtFront(head, 7);
    createCycle(head);
    // printLL(head);
    if(isCycle(head)){
        cout<<"Cycle present\n";
    }else{
        cout<<"Not Present\n";
    }
    insersection(head);
    printLL(head);
}