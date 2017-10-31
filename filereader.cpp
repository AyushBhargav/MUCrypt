#include <filereader.h>
#include <fstream>
#include <string>

using namespace std;

FileReader::FileReader(string file)
{
    this->file = file;
}

string FileReader::read(int start, int length) {
    ifstream i_file;
    i_file.open(file, ios::in);

    i_file.seekg(start, ios::beg);

    char* content = new char[length + 1];

    i_file.read(content, length);
    cout<<content;

    string str(content);
    return str;
}
