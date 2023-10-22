#include "File.h"

using namespace std;

const int MAX_FILES = 100;

class Catalog {
public:
    Catalog();
    ~Catalog();

    void addFile(const File& file);
    void removeFile(const string& fileName);
    void listFiles() const;

private:
    File files[MAX_FILES];
    int size;
};