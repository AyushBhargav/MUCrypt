#include <iostream>
#include <filewriter.h>
using namespace std;

int main()
{
    FileWriter fw("text.txt");
    fw.write(0,5,"b");
    return 0;
}
