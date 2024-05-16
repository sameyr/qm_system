#include <iostream>
#include <bitset>   //library to add bitset

using namespace std;


int main(){
    bitset<16> numbers; //declaring uninitialised bitset object
    numbers = 32000; // initialising value for the bitset numbers


    // Initializing from a binary string
    bitset<8> bset1(string("10101010"));
    cout << "Bitset1 from string: " << bset1 << endl;

    // Convert to unsigned long
    unsigned long ulong_val = bset1.to_ulong();
    cout << "Bitset1 Unsigned long : " << ulong_val << endl;

    // Initializing from an integer
    bitset<8> bset2(170); // 170 in decimal is 10101010 in binary
    cout << "Bitset2 from integer: " << bset2 << endl;
  
    // Convert to unsigned long long
    unsigned long long ullong_val = bset2.to_ullong();
    cout << "Bitset2 Unsigned long long: " << ullong_val << endl;

    bitset<8> num = (numbers>>8).to_ulong(); // extracting the first 8 bit from bitset number which is 16 bit long
    bitset<8> num2(11110001);   // initialising another 8-bit bitset value
    bitset<8> ans = num ^ num2 ; //perfoeming XOR operation and stroing it in "ans"
    cout << "first number: " << num << endl << "Second number: " << num2 << endl << "Answer: " << ans;

}