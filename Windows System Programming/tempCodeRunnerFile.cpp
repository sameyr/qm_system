#include <windows.h>
#include <iostream>
using namespace std;


int main(){
    // _In_ -> Input Parameter   _In_opt_ -> Optional Input Parameter
    // LPCSTR Long Pointer Constant to String
    
    BOOL bDir; 
    bDir = CreateDirectoryA( 
                "D:\\personal_file\\learning_stuff\\qm_system\\Windows System Programming\\Dir1",
                NULL);
                /* CreateDirectory creates a new directory in the path mentioned, It takes two parameter, first one is the path 
                and second is security attribute which can be NULL, meaning it will get the default security descriptor.*/ 


    if (bDir == false){
        cout << "CreateDirectory Failed & error no is : " << GetLastError() <<endl; 
    }
    else{
        cout << "Directory Created Sucessfully." << endl;
    }

    getchar(); // getChar() function takes character from the user

    bDir = RemoveDirectoryA("D:\\personal_file\\learning_stuff\\qm_system\\Windows System Programming\\Dir1");
    // RemovveDirectoryA takes only one parameter which is the path and deletes the folder which is mentioned in the path

    if (bDir == false){
        cout << "RemoveDirectory Failed & error no is : " << GetLastError() <<endl; 
    }
    else{
        cout << "Directory Deleted Sucessfully." << endl;
    }

    system("PAUSE"); // This function will hold the screen

    return 0;
}
