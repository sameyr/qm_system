#include <windows.h>
#include <iostream>

using namespace std;

int main(){

HANDLE hfile;
hfile = CreateFileA("D:\\personal_file\\learning_stuff\\qm_system\\Windows System Programming\\testFile.txt",
            GENERIC_READ|GENERIC_WRITE,
            FILE_SHARE_READ,
            NULL,
            CREATE_NEW,
            FILE_ATTRIBUTE_NORMAL,
            NULL
            );

if (hfile == INVALID_HANDLE_VALUE){
    cout << "Error No: " << GetLastError() << endl;
} 
else{
    cout << "File Created Sucessfully." <<endl;
}


system("PAUSE");

return 0;
}