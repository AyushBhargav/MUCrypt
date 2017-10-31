#include <iostream>
#include <shadriver.h>
using namespace std;

int main()
{
    SHADriver shaDriver;
    cout << shaDriver.sha256("Ayush Bhargav") << endl;
    cout << shaDriver.sha256("Ayush Bhargav") << endl;
    return 0;
}
