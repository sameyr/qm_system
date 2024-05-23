#include <iostream>
#include <string>
#include <vector>

using namespace std;

int toNum(char c){
    return (c -'0'); 
}

int maxValue(string number){
    vector<int> AllNumbers;
    for(int j =0 ; j < number.size(); j++){
        for(int k =1 ; k < number.size(); k++){
            string singleNum = number.substr(j,k);
            int singleNumb= stoi(singleNum);
            AllNumbers.push_back(singleNumb);
        }
    }  

    int answer =  AllNumbers[0];

    for(int i = 1 ; i< AllNumbers.size();i++){
        if (answer < AllNumbers[i]){
            answer = AllNumbers[i];
        };
    }
    return answer;   
}

int main(){
    string yourName = "My name is : Samir Shrestha.";
    int count;

    // Copy two characters of s1 (starting
    // from position 3)
    string r = yourName.substr(3, 2);

    // prints the result
    cout << "String is: " << r << endl;

    //getting a substring after a character
    string name = ":";
    int pos = yourName.find(name);
    cout << "String after ':' is : " << yourName.substr(pos + 1) << endl;


    //getting a substring before a character
     cout << "String before ':' is : " << yourName.substr(0,pos - 1);


    // printing all the possible substring from a string
    string newString="Samir";
    for(int j =0 ; j < newString.size(); j++){
        for(int k =j ; k < newString.size(); k++){
            cout << "substring: " << newString.substr(j,k) << endl;
        }
    }

    //Print Sum of all Substrings of a String Representing a Number
    string numbers= "1234";
    int singleNum = 0;
    for(int m =0 ; m < numbers.size(); m++){
        char c = numbers[m];
        singleNum += toNum(c);
    }
    cout << singleNum << endl; 

    //Print the Maximum Value of all Substrings of a String Representing a Number
    string numbs = "589";
    int max = maxValue(numbs);
    cout << max << endl;

}