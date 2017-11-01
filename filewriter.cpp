#include <filewriter.h>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

FileWriter::FileWriter(string file) {
    this->file = file;
}

void FileWriter::write(int start, int end, string str) {
    string tempFile("temp_sam_bhargav.txt");
    ofstream o_file;
    o_file.open(tempFile, ios::out);

    ifstream i_file;
    i_file.open(this->file, ios::in);

    i_file.seekg(0, ios::end);
    int file_size = i_file.tellg();
    i_file.seekg(0, ios::beg);

    for(int i = 0; i < start; i++) {
        o_file.put(i_file.get());
    }

    for(int i = 0; i < str.length(); i++) {
        o_file.put(str.at(i));
    }

    i_file.seekg(end, ios::beg);
    for(int i = end; i < file_size; i++)
        o_file.put(i_file.get());

    remove(this->file.c_str());
    rename(tempFile.c_str(), this->file.c_str());
    o_file.close();
}
