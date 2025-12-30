#include <iostream>
#include <string>
#include <cctype>
#include<cstring>

using namespace std;

bool checkpassword(string pass) {
    if (pass.size()<6) {
        return false;
    }
    bool digit=false;
    bool special=false;
    bool uppercase=false;
    for (int i=0;i<pass.size();i++) {
        if (!isalnum(pass[i])){
            special= true;
        }if (isdigit(pass[i])) {
            digit= true;
        }if (isupper(pass[i])) {
            uppercase=true;
        }
    }
    if (special && digit&&uppercase) {
        return true;
    }else {
        return false;
    }
}
int main() {

    string pass;
    while (true) {
        cout<<"Please Enter Your Password: ";
        getline(cin,pass);
        bool istrue=false;

        if (checkpassword(pass)) {
cout<<"You succesfully created your password"<<endl;
            break;
        }    else {
            cout<<"try again"<<endl;
        }
    }
        return 0;
    }