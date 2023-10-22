#include "Catalog.h"
#include <iostream>

using namespace std;

Catalog::Catalog() {}
Catalog::~Catalog() {}

void Catalog::addFile(const File& file) {
    if (size < MAX_FILES) {
        files[size] = file;
        size++;
    }
    else {
        cout << "The catalog is complete. Unable to add more files." << endl;
    }
}

void Catalog::removeFile(const string& fileName) {
    for (int i = 0; i < size; i++) {
        if (files[i].name == fileName) {
            for (int j = i; j < size - 1; j++) {
                files[j] = files[j + 1];
            }
            size--;
            cout << "The file has been removed from the directory." << endl;
            return;
        }
    }
    cout << "File not found in directory." << endl;
}

void Catalog::listFiles() const {
    cout << "\nList of files in the directory:" << endl << endl;
    for (int i = 0; i < size; i++) {
        const File& file = files[i];
        file.show();
    }
}