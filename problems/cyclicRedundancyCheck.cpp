#include <iostream>

using namespace std;

bool CRC(int data, int divisor){
     // Shift the data by 8 bits to the left to make space for the CRC remainder
    data <<= 8;

    // Perform CRC division
    for (int i = 0; i < 8; ++i) {
        // Check if the most significant bit of the data is 1
        if ((data >> 15) & 1) {
            // If MSB is 1, perform XOR operation with the divisor
            data ^= divisor;
        }
        // Shift the data by 1 bit to the left
        data <<= 1;
    }

    // Check if the remainder after division is zero
    if (data == 0) {
        // If remainder is zero, data is correct
        return true;
    } else {
        // If remainder is non-zero, data has error
        return false;
    }
}

int main(){
    int data;
    int polynomial;
    bool result;
    cout << "Enter data you wanna check for the error:" << endl;
    cin >> data;

    cout << "Enter your 8 bit divisior:" << endl;
    cin >> polynomial;

    CRC(data, polynomial);

    if (result){
        cout << "The data received is correct"<<endl;
    }
    else{
        cout << "The data received is incorrect" << endl;
    }

}