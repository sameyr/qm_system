#include <iostream>
#include <bitset>
using namespace std;

void checksum(){
    bitset<16> value;
    bitset<8> result;
    string input;
    
    cout << "Enter the 16-bit data to be sent (in binary): ";
    cin >> input;

    value = bitset<16> (input); 

    bitset<8> rightEight = (value >> 8).to_ulong();
    bitset<8> leftEight = (value & bitset<16>(0x0FF)).to_ulong();

    result =rightEight & leftEight;

    cout << leftEight <<endl;
    cout << rightEight <<endl;

    cout << "Checksum is: " << result << endl;
    
}

void correct(){
    bitset<24> value;
    bitset<8> result;
    string input;

    cout << "Enter the 24-bit data to be checked (in binary): ";
    cin >> input; 

    value = bitset<24> (input); 

    // Split 24-bit value into three 8-bit values
    bitset<8> leftEight = (value >> 0).to_ulong();
    bitset<8> middleEight = (value >> 8).to_ulong();
    bitset<8> rightEight = (value >> 16).to_ulong();

    cout << rightEight<<endl;
    cout << middleEight<<endl;

    result = rightEight & middleEight ;
    cout << result <<endl;

    if (result == leftEight) {
        cout << "The data received is correct." << endl;
    } else {
        cout << "The data received is incorrect." << endl;
    }
}

int main(){
    char input;
    cout << "Do you want create a data to be encrypted 'Press S' or check if received value is corrupted 'Press C'?" << endl;
    cin >> input;

    if (input == 'C'){
        correct();
    }
    else if(input == 'S'){
        checksum();
    }

    return 0;
}