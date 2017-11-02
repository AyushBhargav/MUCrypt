#include <filereader.h>
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

FileReader::FileReader(string file)
{
    this->file = file;
}

string FileReader::read(int start, int length) {
    ifstream i_file;
    i_file.open(file, ios::in);

    if(!i_file.is_open())
        return "File couldn't be opened";

    i_file.seekg(start, ios::beg);

    char* content = new char[length + 1];
    int index = 0;
    for(int i = 0; i < length; i++) {
        content[index++] = (char)i_file.get();
    }
    content[index] = '\0';
    string str(content);
    delete content;
    return str;
}

string FileReader::readAll(){
    std::ifstream t(file);
    std::stringstream buffer;
    buffer << t.rdbuf();
    return buffer.str();
}

