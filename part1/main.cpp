#include <iostream>

using namespace std;

int main()
{
    int f = 9.5;
    float *i = (float *)&f;
    cout << "i:" << *i;
    return 0;
}
