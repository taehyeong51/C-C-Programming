#include <iostream>
#include <cstring>
using namespace std;


int main(){
    char password[11];
    cout << "Password :" << endl;
    while(true){
        cout << "password>>";
        cin >> password;
        if(strcmp(password,"C++")==0){
            cout << "quit" << endl;
            break;
        }
        else
            cout << "wrong password" << endl;
    }
    }
