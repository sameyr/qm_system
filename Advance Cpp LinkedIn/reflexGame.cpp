#include <iostream>
#include <cctype>
#include <string>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;


bool check(string word, string input) {
   return word == input;
}

int main() {
    bool result = false;
    string randomWords[] = {"run", "con", "mon", "sun", "tue", "wed", "thu", "fri", "sat", "sun"};
    
    while (!result) {
        int rndNum = (rand() % 10);
        string word= randomWords[rndNum];
        string userInput;
        string lowerCaseInput = "";

        cout << "Enter ' " << word << " ' : " << endl;

        auto start = steady_clock::now();

            cin >> userInput;

        auto end = steady_clock::now();

        auto elapsed = duration_cast<seconds>(end - start).count();

        // Check if time limit exceeded
        if (elapsed > 2) {
            cout << "Time limit exceeded. Please try again." << endl;
            continue;
        }

        for (char c : userInput) {
            lowerCaseInput += tolower(c);
        }

        if (userInput.length() == 3) {
            result = check(word , lowerCaseInput);
            if(result == true){
                break;
            }
        } else {
            cout << "Sorry, string entered is not valid" << endl;
        }
    }

    cout << "Success" << endl;
    return 0;
}
