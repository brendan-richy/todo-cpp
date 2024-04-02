#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int choice;
    string todo_item;
    string todo_desc;
    string due_date;

    do {
        cout << "\nTodo List Menu:\n"
             << "0. Quit Program\n"
             << "1. Create New List\n"
             << "2. Open List from test file\n"
             << "Your choice: ";
        cin >> choice;
        cin.ignore(); // Ignore the newline character after reading the choice

        switch (choice) {
            case 0:
                // Exit Program
                cout << "Exiting program..." << endl;
                break;

            case 1: {
                // Create a New List
                ofstream outFile("todo_list.txt", ios::app); // Open file in append mode
                if (outFile.is_open()) {
                    do {
                        cout << "\nLet's Create a todo item\n"
                             << "Name: ";
                        getline(cin, todo_item);

                        cout << "\nQuick Description\n"
                             << "Description: ";
                        getline(cin, todo_desc);

                        cout << "\nDue Date (mm/dd/yyyy)\n"
                             << "Due: ";
                        getline(cin, due_date);

                        // Write todo item, description, and due date to file
                        outFile << todo_item << " - " << todo_desc << " - " << due_date << endl;

                        cout << "\nDo you want to add another todo item? (1/0): ";
                        cin >> choice;
                        cin.ignore(); // Ignore the newline character after reading the choice
                    } while (choice != 0);

                    outFile.close();
                    cout << "Todo list saved to todo_list.txt" << endl;
                } else {
                    cerr << "Unable to open file for writing." << endl;
                }
                break;
            }

            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 0);

    return 0;
}