#include <windows.h>
#include <iostream>

using namespace std;


int main(){

    BOOL bFile;
    bFile = MoveFileA(
        "D:\\personal_file\\learning_stuff\\qm_system\\Windows System Programming\\OldFile.txt",
        "D:\\personal_file\\learning_stuff\\qm_system\\Windows System Programming\\Newfile.txt"
    );

    /*MoveFile() function moves a file or a directory including it's children to a new location.
    takes two parameter, first -> the path of the file/directory to be moved 
    second -> path of the location where you wanna move the file*/

    if (bFile == false){
        cout << "File couldn't be moved. Error Np. is: " << GetLastError()  << endl;

        //GetLastError() function extracts the error number of the most recent error 
    }
    else{
        cout << "File Moved." << endl;
    }

    system("PAUSE");

    return 0;
}