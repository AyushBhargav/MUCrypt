#ifndef FILEREADER_H
#define FILEREADER_H

#include <string>
using namespace std;

class FileReader
{
private:
    string file;
public:
    FileReader(string file);
    string read(int start, int length);
    string readAll();
};

#endif // FILEREADER_H
