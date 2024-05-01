#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool check(string input) {
    string randomWords[] = {"run", "con", "mon", "sun", "tue", "wed", "thu", "fri", "sat", "sun"};

    for(int i = 0; i < sizeof(randomWords)/sizeof(randomWords[0]); i++) {
        if (input == randomWords[i]) {
            return true;
        }
    }
    cout << "Sorry, the string is not correct." << endl;
    return false;
}

int main() {
    bool result = false;

    while (!result) {
        string userInput;
        string lowerCaseInput = "";

        cout << "Enter three word character: " << endl;
        cin >> userInput;

        for (char c : userInput) {
            lowerCaseInput += tolower(c);
        }

        if (userInput.length() == 3) {
            result = check(lowerCaseInput);
        } else {
            cout << "Sorry, string entered is not valid" << endl;
        }
    }

    cout << "Success" << endl;
    return 0;
}
