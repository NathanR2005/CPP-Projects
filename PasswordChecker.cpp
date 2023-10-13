#include <iostream>

int main(){

    std::string password;
    bool hasUpper = false;
    bool hasNumber = false;
    bool hasSpace = false;

    std::cout << "***********************************************\n";
    std::cout << "Hello, welcome to the password checker program!\n";
    std::cout << "***********************************************\n";

    do{
        std::cout << "Your password must be at least 8 characters long, contain at least one uppercase letter, and at least one number. (must not include spaces!)\n";
        std::cout << "Please enter your password: ";
        getline(std::cin,password);

        if(password.length() < 8){
            std::cout << "Your password is too short.\nTry Again!.\n";
        } else {
            for(int i = 0; i < password.length(); i++){
                if(isupper(password[i])){
                    hasUpper = true;
                }
                if(isdigit(password[i])){
                    hasNumber = true;
                }
                if(isspace(password[i])){
                    hasSpace = true;
                }
            }
            if(hasUpper && hasNumber && !hasSpace){
                std::cout << "Your password is valid.\n";
            } else if(!hasNumber && !hasUpper){
                std::cout << "Your password does not contain an uppercase letter or a number.\nTry Again!\n";
            } else if(!hasUpper) {
                std::cout << "Your password does not contain an uppercase letter.\nTry Again!\n";
            } else if(!hasNumber) {
                std::cout << "Your password does not contain a number.\nTry Again!\n";
            } else if(hasSpace){
                std::cout << "Your password contains a space.\nTry Again!\n";
            }
        }
    } while(!hasUpper || !hasNumber || hasSpace);

    return 0;
}