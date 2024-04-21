#include <iostream>
#include <string>
#include <stack>

using namespace std;


bool isPalindrome(string userString){

    stack<string> reverseStringStack;
    string reverseString;
    string word = "";

    // for loop to push each word into a stack
    for(int i = 0 ; i <= userString.length(); i++){
        
        if(userString[i] == ' ' || i == userString.length()){
            reverseStringStack.push(word);
            word = "";
        }
        else{
            word = word + userString[i];
        }
        
    }

    //while loop access the stack element and make a string in reverse order
    while(!reverseStringStack.empty()){
        reverseString = reverseString + reverseStringStack.top();
        reverseStringStack.pop();
        if (!reverseStringStack.empty()){
            reverseString = reverseString + " ";
        }        
    }

    //if statement to check if the reverse string is equal to user string
    if (reverseString == userString){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string userString;
    bool result;

    cout << "Enter a sentence: ";
    getline(cin, userString); 
    cout << endl;

    
    result= isPalindrome(userString);


    if (result == true){
        cout << "YOur string is palindrome." << endl;
    }
    else {
        cout << "Your String is not palindrome" << endl;
    }

}