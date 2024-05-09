#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> leftArray, vector<int> rightArray, vector<int>& array){

    int leftSize = leftArray.size();
    int rightSize = rightArray.size();
    int i=0,j=0,k=0;

    while (j < leftSize && k < rightSize){
        if(leftArray[j] < rightArray[k]){
            array[i] = leftArray[j];
            i++;
            j++;
        }
        else{
            array[i] = rightArray[k];
            i++;
            k++;
        }
    }

    while(j<leftSize){
        array[i] = leftArray[j];
        i++;
        j++;
    }
    while(k<rightSize){
        array[i] = rightArray[k];
        i++;
        k++;
    }

}

void divide(vector<int>& array){
    int length = array.size();

    if (length <= 1) {
        return; // Base case: array is already sorted
    }


    int mid = length / 2;
    int i =0 ;

    vector<int> leftArray;
    vector<int> rightArray;

    while (i < mid){
        leftArray.push_back(array[i]);
        i++;
    }
    while (i < length){
        rightArray.push_back(array[i]);
        i++;
    }

    divide(leftArray);  // Recursively divide the left subarray
    divide(rightArray); // Recursively divide the right subarray

    merge(leftArray, rightArray, array); // Merge the sorted subarrays
   
}

int main(){
    vector<int> array = {8,5,4,3,7,1};
    divide(array);
    cout << "Sorted Array: ";
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;
  
    return 0;

}