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

Node* MidOfLL(Node* &head){
    if(head ==NULL)return NULL;
    Node* s= head, *f= head;
    while(f->next!=NULL && f->next->next !=NULL){
        f= f->next->next;
        s= s->next;
    }
    return s;
}
Node* merge(Node* h1, Node* h2){
    if(h1==NULL)return h2;
    else if(h2 ==NULL)return h1;
    
    if(h1->data < h2->data){
      h1->next = merge(h1->next,h2);
      return h1;
    }else{
        h2->next = merge(h1,h2->next);
        return h2;
    }

}
void mergeSort(Node* &head){
    if(head ==NULL || head->next == NULL)return;
    Node* mid = MidOfLL(head);
    Node* List2 = mid->next;
    mid->next = NULL;
    mergeSort(head);
    mergeSort(List2);

    head =merge(head, List2);
}
int main(){
    Node * head = NULL;
    Node* h1=NULL;
    Node* h2=NULL;
    Node* h=new Node(0);
    insertAtFront(h1, 1);
    insertAtFront(h1, 3);
    insertAtFront(h1, 5);
    insertAtFront(h2, 6);
    insertAtFront(h2, 2);
    insertAtFront(h2, 4);
    insertAtFront(h2, 7);
    // printLL(head);
    // Node * m =  MidOfLL(head);
    // cout<<"mid Node "<< m->data<<" ";
    // Node * temp=merge(h1,h2);
    // printLL(temp);
    mergeSort(h2);
    printLL(h2);
}