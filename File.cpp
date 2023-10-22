#include <iostream>
#include "File.h"

File::File() {}
File::~File() {}

void File::set(const string& newName, const string& newAttribute, double newSize, const DateTime& newCreationTime) {
    name = newName;
    attribute = newAttribute;
    size = newSize;
    creationTime = newCreationTime;
}

void File::get(string& newName, string& newAttribute, double& newSize, DateTime& newCreationTime) const {
    newName = name;
    newAttribute = attribute;
    newSize = size;
    newCreationTime = creationTime;
}

void File::show() const {
    cout << "Name: " << name << endl;
    cout << "Size: " << size << " KB" << endl;
    cout << "Attribute: " << attribute << endl;
    cout << "Creation date and time: " << creationTime.year << "-"
        << creationTime.month << "-" << creationTime.day << " "
        << creationTime.hour << ":" << creationTime.minute << ":"
        << creationTime.second << endl << endl;
}