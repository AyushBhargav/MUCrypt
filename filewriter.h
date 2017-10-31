#ifndef FILEWRITER_H
#define FILEWRITER_H

#include <string>

using namespace std;

class FileWriter
{
private:
    string file;
public:
    FileWriter(string file);
    void write(int start, string str);
};

#endif // FILEWRITER_H
