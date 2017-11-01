#include <iostream>
#include <filewriter.h>
using namespace std;

int main()
{
    FileWriter fr("text.txt");
    fr.write(8,"arg");
    return 0;
}
