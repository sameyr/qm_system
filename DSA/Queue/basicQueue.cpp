#include <iostream>
#include <queue>  //library to be included to use queue 

using namespace std;


void extract(queue<int> intQueue){
    int i =0;
    while(!intQueue.empty()){
        cout << "Elements in queue at position " << i <<" is " << intQueue.front() << endl; // to print the firts element of the queue
        i++;
        intQueue.pop();     //remoce the first element in the queue 
    }

}

int main(){
    queue<int> intQueue; // definning queue

    intQueue.push(1);   //adds new element to the back of the  queue
    intQueue.push(22);
    intQueue.push(333);
    intQueue.push(4444);

    extract(intQueue);
}