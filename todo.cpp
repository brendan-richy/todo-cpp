#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;








int main() {
    int choice;

    do {
        std::cout << "\nTodo List Menu:\n"
            << "0. Quit Program\n"
            << "1. Create New List\n"
            << "2. Open List from test file\n"
            << "Your choice: ";
        std::cin >> choice;

    switch (choice) {
        case 0:
        // Exit Program
            std::cout << "Exiting program..." << std::endl;
            break;
        
        case 1:
        // Create a New List
            std::cout << "Lets Create a todo list" << std::endl;
            



            break;


        default:
            std::cout << "Invalid choice. Try again." << std::endl;
        }
    } while (choice != 0);
}