#include <iostream>
#include <vector>

using namespace std;

bool bitonic(vector<int> &seq , int size){

    bool rising = false;
    int i = 0;

    while (i < size-1 && seq[i] == seq[i+1]){
        i++;        
        if (i == size-1){
            return true; // Constant Sequence -- All values are same
        }
    }

    //first slope
    if (seq[i] < seq[i+1]){
        while((i < size -1) && (seq[i] >= seq[i+1]) ){
            i++;
        }
    }
    else{
        while((i < size -1) && (seq[i] <= seq[i+1]) ){
            i++;
        }
    }
    if (i == size-1){
        return true; // monotonous sequence
    }


    //second slope
    if (seq[i] < seq[i+1]){
        while((i < size -1) && (seq[i] >= seq[i+1]) ){
            i++;
        }
    }
    else{
        while((i < size -1) && (seq[i] <= seq[i+1]) ){
            i++;
        }
    }
    if (i == size-1){
        return true; // monotonous sequence
    }


    //third slope
    if (seq[i] < seq[i+1]){
        rising = true;
        while((i < size -1) && (seq[i] >= seq[i+1]) ){
            i++;
        }
    }
    else{
        rising = false;
        while((i < size -1) && (seq[i] <= seq[i+1]) ){
            i++;
        }
    }
    if (i < size-1){
        return false; // not a bitonic sequence
    }

    //checking the first and last element if they are of the same slope
    if(rising && seq[size-1] <= seq [0]){
        return true;
    } 
    else if(!rising && seq[size-1] >= seq [0]){
        return true;
    } 
    else {
        return false;
    }

}


int main (){

vector<int> rndSeq = {5,4,6,2,6};
int size = rndSeq.size();

bool ans = bitonic(rndSeq,size);

if (ans == true){
    cout  << "Yes it is bitonic" ;
}
else{
    cout <<"No it is not bitonic";
}

}