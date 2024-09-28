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

/*CreateFileA() function creates new file, it takes 5 parameters
1 -> path of the location where new file is needed
2-> Desired Access like generic_read, generic_write
3-> Share Mode 
4-> Security attribute
5-> Creation Disposition (command to either create new file or open existing or truncating)
6-> File attribute (either file is encrypted or normal)
7-> A valid handle to a template file with the GENERIC_READ access right, can be NULL
*/

if (hfile == INVALID_HANDLE_VALUE){
    cout << "Error No: " << GetLastError() << endl;
} 
else{
    cout << "File Created Sucessfully." <<endl;
}


system("PAUSE");

return 0;
}