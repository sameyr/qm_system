#include <iostream>

using namespace std;

class Node{
public:
    int value;
    Node* Next;

};

void printList(Node* head){
    /*while printing all the values in the list we can just pass 
    the head node as the head node will be pointing to the next node and next node will point to next node and so on*/
    while(head->value != 0){
        cout << head->value << endl;
        head = head->Next;
    }
}

void insertNewNodeAtFront(Node** head, int val){
    //firstly create a memeory address for Node where we can add the new value
    Node* newNode = new Node();
    newNode->value = val;

    /* now we will add the address of pervious head node to the present head node's
        next value*/
    newNode->Next = *head;

    //now we will change the previous head node's next value
    *head = newNode;

}

void insertNewNodeAtEnd(Node** head, int val){
    //firstly creating a newNode
    Node* newNode =new Node();
    newNode->value = val;   
    newNode->Next = NULL ; // as it is going to be the last node, the next node pointer will be null

    // check if current head is Null, if yes it is empty linked list and the newNode will be the head node
    if(head == NULL){
        *head = newNode;
        return;
    }

    //find the last node in the linked list
    Node* nextNode = *head;
    while(nextNode->Next !=NULL){
        nextNode = nextNode->Next;
    }

    //change the next pointer of previous last node to current last node
    nextNode->Next = newNode;
}

void insertNewNodeAtx(Node* previous, int val){
    
    if(previous == NULL){
        cout << "Sorry previous cannot be null."<<endl;
        return;
    }

    //create a newNode
    Node* newNode = new Node();
    newNode->value = val;
    //assigning the next value 
    newNode->Next = previous->Next;

    previous->Next = newNode;
}

int main(){
    Node* head = new Node();  //using pointer to create a new usertype Node 
    Node* second = new Node();
    Node* third = new Node();

    head->value = 1;    // we use '->' this symbol instead of '.' to assign value to class parameter when usig the pointer
    head->Next = second;  // assigning the value of Next which basically links the head element to the second element 

    second->value = 2;
    second->Next = third;

    third->value = 3;
    third->Next = NULL;

    insertNewNodeAtEnd(&head,90);
    cout <<"laudu"<<endl;
    insertNewNodeAtx(second,5);
    
    printList(head);    //Invoking the print function

}