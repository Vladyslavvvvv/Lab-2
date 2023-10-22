#include <iostream>
#include "Catalog.h"

using namespace std;

int main() {
    Catalog catalog;

    while (true) {
        cout << "1. Add file" << endl;
        cout << "2. Delete the file" << endl;
        cout << "3. Display a list of files" << endl;
        cout << "4. Exit" << endl << endl;
        cout << "Choose an action: ";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1: {
            File file;
            cout << "\nEnter a file name: ";
            cin >> file.name;
            cout << "Enter the file size (KB): ";
            cin >> file.size;
            cout << "Enter the file attribute: ";
            cin >> file.attribute;
            cout << "Enter date and time of creation (year month day hour minute second): ";
            cin >> file.creationTime.year >> file.creationTime.month >> file.creationTime.day
                >> file.creationTime.hour >> file.creationTime.minute >> file.creationTime.second;
            catalog.addFile(file);
            cout << "\nThe file has been added to the directory." << endl << endl;
            break;
        }
        case 2: {
            string fileName;
            cout << "\nEnter the name of the file to delete: ";
            cin >> fileName;
            catalog.removeFile(fileName);
            cout << "\nThe file has been removed from the directory." << endl << endl;
            break;
        }
        case 3:
            catalog.listFiles();
            break;
        case 4:
            return 0;
        default:
            cout << "Wrong choice. Try again." << endl;
        }
    }

    return 0;
}