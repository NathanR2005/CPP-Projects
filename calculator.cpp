#include <iostream>
#include <cmath>

double num1;
double num2;
double sum;

double getNums();

void answer(double sum);

int main() {

    char op;
    std::string resume = "yes";

    //Calculator Loop
    while(resume == "yes" || resume == "Yes") {
        
        //Text UI
        std::cout << "\n*****Calculator*****\n";

        //Operator & Number Input
        std::cout << "Hello! Please enter the mathematical you would like to use: ";
        std::cin >> op;

        switch(op) {
            case '+':
                getNums();
                sum = num1 + num2;
                answer(sum);
            break;

            case '-':
                getNums();
                sum = num1 - num2;
                answer(sum);
            break;

            case '*':
                getNums();
                sum = num1 * num2;
                answer(sum);
            break;

            case '/':
                getNums();
                sum = num1 / num2;
                answer(sum);
            break;

            case '%':
                getNums();
                sum = int(num1) % int(num2);
                answer(sum);
            break;

            case 's':
                std::cout << "Please enter a number: ";
                std::cin >> num1;
                sum = sqrt(num1);
                answer(sum);
            break;

            case '^':
                getNums();
                sum = pow(num1,num2);
                answer(sum);
            break;

        }

        std::cout << "\n\nWould you like to calculate something else?\nEnter yes or no: ";
        std::cin >> resume;

    }

    //Loop Breaker
    if (resume == "no" || resume == "No") {

        std::cout << "\n*****Goodbye!*****";

    }

    return 0;
}

void answer(double sum) {

    //Displaying the results

    std::cout << "Result: " << sum << ".\n";

}

double getNums() {

    std::cout << "Please enter your first number: ";
    std::cin >> num1;
    std::cout << "Please enter your second number: ";
    std::cin >> num2;

    return num1,num2;
}
