#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
void printLL(Node* head){
    // if(head == NULL)return;
    // cout<<head->data<<" ";
    // printLL(head->next);
    while(head !=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
void insertAtFront(Node* &head, int val){
    Node* newNode = new Node(val);
    if(head ==NULL){
        head =newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void insertAtMid(Node* &head, int pos, int val){
    Node* newNode = new Node(val);
    if(pos==0 || head==NULL){
        //at front
        insertAtFront(head,val);
        return;
    }
    Node* runningNode = head;
    while(runningNode->next !=NULL && --pos){
        runningNode = runningNode->next;
    }
    if(runningNode->next !=NULL){
        //at mid
        Node* temp = runningNode->next;
        runningNode->next = newNode;
        newNode->next =temp;
    }else{
        //to insertAt Last
        runningNode->next = newNode;
    }

}
int LengthOfLL(Node* head){
    int size=0;
    while(head !=NULL){
        size++;
        head= head->next;
    }
    return size;
}
void DeleteNodeAtMid(Node* &head, int pos){
    if(head == NULL){
        return;
    }
    if(pos ==0){
        head= head->next;
        return;
    }
    Node* runningNode = head;
    while(runningNode->next !=NULL && --pos){
        runningNode = runningNode->next;
    }
    if(runningNode->next !=NULL){
        runningNode->next = runningNode->next->next;
        return;
    }


}
int main(){
    // Node* a = new Node(1);
    // Node* b = new Node(2);
    // Node* c = new Node(3);
    // Node* d = new Node(4);
    // a->next = b;
    // b->next = c;
    // c->next =d;
    // printLL(a);  
    Node * head =NULL;
    insertAtFront(head,1);
    insertAtFront(head,2);
    insertAtFront(head,3);
    insertAtFront(head,4);
    insertAtMid(head, 8,5);
    printLL(head);
    cout<<"length "<<LengthOfLL(head)<<endl;
    DeleteNodeAtMid(head,0);
     printLL(head);
    cout<<"length "<<LengthOfLL(head)<<endl;
}