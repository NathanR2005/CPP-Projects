#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double widthdraw(double balance);

int main() {

    double balance = 1000;
    int choice = 0;

    do {
        std::cout << "\n********************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "********************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Widthdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        //resets any error flags
        std::cin.clear();
        //clears the input buffer
        fflush(stdin);

        switch(choice) {

            case 1: 
                showBalance(balance);
            break;

            case 2:
                balance += deposit();
                showBalance(balance);
            break;

            case 3:
                balance -= widthdraw(balance);
                showBalance(balance);
            break;

            case 4:
                std::cout << "Thank you for visiting!\n";
            break;

            default:
                std::cout << "Invalid choice\n";

        }
    
    } while(choice != 4);

    return 0;
}

void showBalance(double balance) {

    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';

}

double deposit() {

    double amount = 0;

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if(amount > 0) {
        return amount;
    } else {
        std::cout << "That's not a valid amount: \n";
        return 0;
    }
}

double widthdraw(double balance) {

    double amount = 0;
    
    std::cout << "Enter amount to be widthdrawn: ";
    std::cin >> amount;

    if(amount > balance) {
        std::cout << "Insufficient funds: \n";
        return 0;
    } else if(amount < 0) {
        std::cout << "Not a valid amount: \n";
        return 0;
    } else {
        return amount;
    }

}