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

void RecSearchLL(Node* head, int target){
    if(head==NULL){
        cout<<"NotFound\n";
        return;
    }
    if(head->data ==  target ){
        cout<<"Found\n";
        return;
    }
    RecSearchLL(head->next,target);
}
void searchLL(Node* head, int target){
    while(head !=NULL){
        if(head->data == target){
            cout<<"Found\n";
            return;
        }
        head = head->next;
    }
    cout<<"NotFound\n";
    return;
}

void reverseLL(Node* &head){
    Node* prev=NULL, *curr=head, *next;
    while(curr !=NULL){
        next = curr->next;
        curr->next = prev;
        prev= curr;
        curr= next;
    }
    head= prev;
}
Node *kReverse(Node * head,int k){
    if(head == NULL || head->next ==NULL)return head;

    int count = 0;
    Node* prev=NULL, *curr=head, *next = NULL;
    while(curr!=NULL && count <k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
   head->next =  kReverse(curr,k);
   return prev;
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
    insertAtFront(head, 8);
    insertAtFront(head, 9);
    printLL(head);
    cout<<endl;
     head = kReverse(head,3);
    printLL(head);
}