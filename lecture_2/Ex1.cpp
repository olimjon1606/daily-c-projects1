#include <iostream>
#include "Ex1_lib.h"
#include "Ex1_lib2.h"
using namespace std;

int main()
{
    Fract x;
    x.read();
    x.print();
    x.isGreater(2, 3);
    x.sum(3, 5);
    x.product(6, 5);
    return 0;
}