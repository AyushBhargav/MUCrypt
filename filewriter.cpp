#include <filewriter.h>
#include <fstream>

FileWriter::FileWriter(string file) {
    this->file = this;
}

void FileWriter::write(int start, string str) {
    ofstream o_file;
    o_file.open(this->file, ios::out);

    o_file.seekp(start, ios::beg);
    o_file << str;

    o_file.close();
}
