#include <string>

using namespace std;

class File {
public:
    string name;
    string attribute;
    double size;

    struct DateTime {
        int year;
        int month;
        int day;
        int hour;
        int minute;
        int second;
    };

    DateTime creationTime;

    File();
    ~File();

    void set(const string& newName, const string& newAttribute, double newSize, const DateTime& newCreationTime);
    void get(string& newName, string& newAttribute, double& newSize, DateTime& newCreationTime) const;
    void show() const;
};