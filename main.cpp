#include <iostream>
#include <timesaltgeneration.h>
using namespace std;

int main()
{
    Salt* salt = new TimeSaltGeneration(512);
    cout << salt->saltedValue("Hello") << endl;
    return 0;
}
