#include <iostream>

using namespace std;

int main(){
    int array1[] = {100,8,3,2,1,4};
    int temp=0;
    int size = sizeof(array1)/sizeof(array1[0]);
    bool swapped; 

    //prints unsorted array
    cout << "Unsorted Array: ";
    for(int i =0 ; i < size ; i++){
        cout << array1[i] << " ";
    } 
    cout <<endl;

    //loop to initiate bubble sorting
    for(int i =0 ; i < (size - 1) ; i++){
        swapped = false;
        
        for(int j =0 ; j < (size-i-1) ; j++){
            
            if (array1[j] > array1[j+1]){
                temp = array1[j+1];
                array1[j+1] = array1[j];
                array1[j] = temp;
                swapped = true;
            }
            
        }

        if(swapped==false){
                break;
        }
    }

    //prints sorted array
    cout << "Sorted Array: ";
    for(int i =0 ; i < size ; i++){
        cout << array1[i] << " ";
    } 
    cout <<endl;

}