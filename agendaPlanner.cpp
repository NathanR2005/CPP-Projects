#include <iostream>
#include <algorithm>
#include <vector>

void addTasks();

void removeTasks();

void displayTasks();

void totalTasks();

void erase(std::vector<std::string>& weekTasks, int num);

/* Here are our dynamic arrays that will be storing tasks
for their specific days */

int mondayTaskCollection = 1;
std::vector<std::string> mondayTasks;

int tuesdayTaskCollection = 1;
std::vector<std::string> tuesdayTasks;

int wednesdayTaskCollection = 1;
std::vector<std::string> wednesdayTasks;

int thursdayTaskCollection = 1;
std::vector<std::string> thursdayTasks;

int fridayTaskCollection = 1;
std::vector<std::string> fridayTasks;

int saturdayTaskCollection = 1;
std::vector<std::string> saturdayTasks;

int sundayTaskCollection = 1;
std::vector<std::string> sundayTasks;

int main() {

    int choice = 0;

    do{

        std::cout << "\n******************************\n";
        std::cout << "Welcome to the Agenda Planner";
        std::cout << "\n******************************\n";
        std::cout << "Here are your options\n";
        std::cout << "********************\n";
        std::cout << "1. Add a task\n";
        std::cout << "2. Remove a task\n";
        std::cout << "3. Display tasks\n";
        std::cout << "4. Check number of tasks\n";
        std::cout << "5. Exit Program\n";
        std::cout << "********************\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        //resets any error flags
        std::cin.clear();
        //clears the input buffer
        fflush(stdin);

        switch(choice){

            case 1:
                addTasks();
            break;

            case 2:
                removeTasks();
            break;

            case 3:
                displayTasks();
            break;

            case 4:
                totalTasks();
            break;

            case 5:
                std::cout << "\nHave a great day, come back soon!\n";
            break;

            default:
                std::cout << "Invalid Choice!\n";

        }

    }while(choice != 5);

    return 0;
}

void addTasks(){

    /* making a loop to ask the user if they
    would like to add another task at the end
    of the function */

    std::string resume = "Yes";
    std::string day;
    std::string task;
    int size;

    while(resume == "Yes"){

        std::cout << "\nFor what day would you like to add a task to? ";
        std::cin >> day;

        if(day == "Monday"){
            for(int i = 0; i < mondayTaskCollection; i++){
                std::cout << "Enter a task for Monday: ";
                std::cin.ignore();
                std::getline(std::cin, task);
                mondayTasks.push_back(task);
            }
        } else if(day == "Tuesday"){
            for(int i = 0; i < tuesdayTaskCollection; i++){
                std::cout << "Enter a task for Tuesday: ";
                std::cin.ignore();
                std::getline(std::cin, task);
                tuesdayTasks.push_back(task);
            }
        } else if(day == "Wednesday"){
            for(int i = 0; i < wednesdayTaskCollection; i++){
                std::cout << "Enter a task for Wednesday: ";
                std::cin.ignore();
                std::getline(std::cin, task);
                wednesdayTasks.push_back(task);
            }
        } else if(day == "Thursday"){
            for(int i = 0; i < thursdayTaskCollection; i++){
                std::cout << "Enter a task for Thursday: ";
                std::cin.ignore();
                std::getline(std::cin, task);
                thursdayTasks.push_back(task);
            }
        } else if(day == "Friday"){
            for(int i = 0; i < fridayTaskCollection; i++){
                std::cout << "Enter a task for Friday: ";
                std::cin.ignore();
                std::getline(std::cin, task);
                fridayTasks.push_back(task);
            }
        } else if(day == "Saturday"){
            for(int i = 0; i < saturdayTaskCollection; i++){
                std::cout << "Enter a task for Saturday: ";
                std::cin.ignore();
                std::getline(std::cin, task);
                saturdayTasks.push_back(task);
            }
        } else if(day == "Sunday"){
            for(int i = 0; i < sundayTaskCollection; i++){
                std::cout << "Enter a task for Sunday: ";
                std::cin.ignore();
                std::getline(std::cin, task);
                sundayTasks.push_back(task);
            }
        } else {
            std::cout << "Invalid Input!\n";
        }

        std::cout << "\nWould you like to add another task? ";
        std::cin >> resume;

    }

}

void removeTasks(){

    std::string resume = "Yes";
    std::string day;
    int num;
    
    while(resume == "Yes"){

        std::cout << "\nFor what day would you like to remove a task? ";
        std::cin >> day;
    
        if(day == "Monday"){
            std::cout << "\nEnter the number associated with the task you'd like to remove: ";
            std::cin >> num;
            num -= 1;
            std::cout << "\nYour task \"" << mondayTasks[num] << "\" has been removed!\n";
            erase(mondayTasks, num);
        } else if(day == "Tuesday"){
            std::cout << "\nEnter the number associated with the task you'd like to remove: ";
            std::cin >> num;
            num -= 1;
            std::cout << "\nYour task \"" << tuesdayTasks[num] << "\" has been removed!\n";
            erase(tuesdayTasks, num);
        } else if(day == "Wednesday"){
            std::cout << "\nEnter the number associated with the task you'd like to remove: ";
            std::cin >> num;
            num -= 1;
            std::cout << "\nYour task \"" << wednesdayTasks[num] << "\" has been removed!\n";
            erase(wednesdayTasks, num);
        } else if(day == "Thursday"){
            std::cout << "\nEnter the number associated with the task you'd like to remove: ";
            std::cin >> num;
            num -= 1;
            std::cout << "\nYour task \"" << thursdayTasks[num] << "\" has been removed!\n";
            erase(thursdayTasks, num);
        } else if(day == "Friday"){
            std::cout << "\nEnter the number associated with the task you'd like to remove: ";
            std::cin >> num;
            num -= 1;
            std::cout << "\nYour task \"" << fridayTasks[num] << "\" has been removed!\n";
            erase(fridayTasks, num);
        } else if(day == "Saturday"){
            std::cout << "\nEnter the number associated with the task you'd like to remove: ";
            std::cin >> num;
            num -= 1;
            std::cout << "\nYour task \"" << saturdayTasks[num] << "\" has been removed!\n";
            erase(saturdayTasks, num);
        } else if(day == "Sunday"){
            std::cout << "\nEnter the number associated with the task you'd like to remove: ";
            std::cin >> num;
            num -= 1;
            std::cout << "\nYour task \"" << sundayTasks[num] << "\" has been removed!\n";
            erase(sundayTasks, num);
        } else {
            std::cout << "Invalid Input!\n";
        }

        std::cout << "\nWould you like to remove a task for another day? ";
        std::cin >> resume;
        
    }

}

void displayTasks(){

    std::string resume = "Yes";
    std::string day;
    int num = 0;

    /* making a loop to ask the user if they
    would like to display tasks of another day 
    at the end of the function */

    while(resume == "Yes"){

        std::cout << "\nFor what day would you like to view tasks? ";
        std::cin >> day;

        if(day == "Monday"){
            std::cout << "\nHere are your tasks for " << day << ":\n";
            for(const auto& monTasks : mondayTasks){
                num+=1;
                std::cout << num << ": " << monTasks << '\n';
            }
        } else if(day == "Tuesday"){
            std::cout << "\nHere are your tasks for " << day << ":\n";
            for(const auto& tuesTasks : tuesdayTasks){
                num+=1;
                std::cout << num << ": " << tuesTasks << '\n';
            }
        } else if(day == "Wednesday"){
            std::cout << "\nHere are your tasks for " << day << ":\n";
            for(const auto& wedTasks : wednesdayTasks){
                num+=1;
                std::cout << num << ": " << wedTasks << '\n';
            }
        } else if(day == "Thursday"){
            std::cout << "\nHere are your tasks for " << day << ":\n";
            for(const auto& thursTasks : thursdayTasks){
                num+=1;
                std::cout << num << ": " << thursTasks << '\n';
            }
        } else if(day == "Friday"){
            std::cout << "\nHere are your tasks for " << day << ":\n";
            for(const auto& friTasks : fridayTasks){
                num+=1;
                std::cout << num << ": " << friTasks << '\n';
            }
        } else if(day == "Saturday"){
            std::cout << "\nHere are your tasks for " << day << ":\n";
            for(const auto& satTasks : saturdayTasks){
                num+=1;
                std::cout << num << ": " << satTasks << '\n';
            }
        } else if(day == "Sunday"){
            std::cout << "\nHere are your tasks for " << day << ":\n";
            for(const auto& sunTasks : sundayTasks){
                num+=1;
                std::cout << num << ": " << sunTasks << '\n';
            } 
        } else {
            std::cout << "Invalid Input!\n";
        }

        std::cout << "\nWould you like to view tasks for another day? ";
        std::cin >> resume;

    }

}

void totalTasks(){

    std::string resume = "Yes";
    std::string day;
    int num = 0;

    while(resume == "Yes"){

        std::cout << "\nFor what day would you like to view the total number of tasks? ";
        std::cin >> day;

        if(day == "Monday"){
            for(const auto& monTasks : mondayTasks){
                num+=1;
            }
            std::cout << "\nYou have a total of " << num << " tasks for " << day << ".\n";
        } else if(day == "Tuesday"){
            for(const auto& tuesTasks : tuesdayTasks){
                num+=1;
            }
            std::cout << "\nYou have a total of " << num << " tasks for " << day << ".\n";
        } else if(day == "Wednesday"){
            for(const auto& wedTasks : wednesdayTasks){
                num+=1;
            }
            std::cout << "\nYou have a total of " << num << " tasks for " << day << ".\n";
        } else if(day == "Thursday"){
            for(const auto& thursTasks : thursdayTasks){
                num+=1;
            }
            std::cout << "\nYou have a total of " << num << " tasks for " << day << ".\n";
        } else if(day == "Friday"){
            for(const auto& friTasks : fridayTasks){
                num+=1;
            }
            std::cout << "\nYou have a total of " << num << " tasks for " << day << ".\n";
        } else if(day == "Saturday"){
            for(const auto& satTasks : saturdayTasks){
                num+=1;
            } 
            std::cout << "\nYou have a total of " << num << " tasks for " << day << ".\n";
        } else if(day == "Sunday"){
            for(const auto& sunTasks : sundayTasks){
                num+=1;
            }
            std::cout << "\nYou have a total of " << num << " tasks for " << day << ".\n";
        } else {
            std::cout << "Invalid Input!\n";
        }

        std::cout << "\nWould you like to view the total number of tasks for another day? ";
        std::cin >> resume;

    }

}

void erase(std::vector<std::string>& weekTasks, int num){

    auto itr = std::find(weekTasks.begin(), weekTasks.end(), weekTasks[num]);
    if (itr != weekTasks.end()) {
        weekTasks.erase(itr);
    }
    
}