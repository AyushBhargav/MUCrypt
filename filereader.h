#ifndef FILEREADER_H
#define FILEREADER_H

#include <string.h>

class FileReader
{
private:
    string file;
public:
    FileReader(string salt);
    string read(int start, int length);
};

#endif // FILEREADER_H
