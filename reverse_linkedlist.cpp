#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

void insert(Node*& head, int value){
    Node* newNode =  new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        return;
    }
 
    Node* temp =  head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = newNode;
}
Node* reverseList(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    while(curr != NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

void printList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int n,x;
    cin>>n;
    Node* head = NULL;

    for(int i=0;i<n;i++){
        cin>>x;
        insert(head,x);
    }
    head = reverseList(head);
    printList(head);
    return 0;
} 