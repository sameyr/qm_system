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

    insertNewNodeAtFront(&head,80);
    insertNewNodeAtFront(&head,90);
     printList(head);    //Invoking the print function

}