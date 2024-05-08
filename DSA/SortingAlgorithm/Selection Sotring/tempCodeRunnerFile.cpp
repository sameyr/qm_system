#include <iostream>

using namespace std;

int main(){
    int array[] ={8,84,32,56,7,21,900};
    int low=0;
    int size = sizeof(array)/sizeof(array[0]);
    
    //prints unsorted array
    cout << "Unsorted Array: ";
    for(int i =0 ; i < size ; i++){
        cout << array[i] << " ";
    } 
    cout <<endl;

    //two for loop to initiate selection sorting 
    for(int i =0 ; i < size - 1 ; i++){
         for(int j =i ; j < size  ; j++){
            if (array[j] < array[low]){
                low = j;
            }
        }
        swap(array[i],array[low]);
    }

    //prints sorted array
    cout << "Sorted Array: ";
    for(int i =0 ; i < size ; i++){
        cout << array[i] << " ";
    } 
    cout <<endl;

}