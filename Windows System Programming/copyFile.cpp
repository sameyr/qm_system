#include <windows.h>
#include <iostream>

using namespace std;

int main(){

BOOL bFile;

bFile = CopyFileA(
        "D:\\personal_file\\learning_stuff\\qm_system\\Windows System Programming\\OldFile.txt",
        "D:\\personal_file\\learning_stuff\\qm_system\\Windows System Programming\\NewFile.txt",
        NULL
);   // copyFileA finction copies an existing file to a new file

if (bFile == false){
        cout << "Copy Failed & error no is : " << GetLastError() <<endl; 
    }
    else{
        cout << "Copied Sucessfully." << endl;
    }

system("PAUSE");
return 0;

}