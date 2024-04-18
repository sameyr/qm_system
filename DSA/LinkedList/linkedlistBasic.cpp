#include <iostream>
#include <list> //library needed for doubly linked list

using namespace std;

void print(list<int> printList){

    for( auto it = printList.begin(); it != printList.end(); it++){
        cout << *it <<" " << endl;
    }

}

int main(){
    list<int> intList = {1,2,3,4,5}; // definning linked list to store integer

    intList.push_back(6); //adding integer at the end of the list
    intList.push_front(0); // adding integer at the beginning of the list 

    auto it = intList.begin(); //starting an iterator that will iterate to the position where user want to add the number
    advance(it,2); //advancing the iterator to the specefic position
    intList.insert(it,-2); // adding the interger to that specefic position

    print(intList);

    return 0;
}