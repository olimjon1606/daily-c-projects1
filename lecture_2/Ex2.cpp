#include <iostream>
#include <string>
#include "Ex2_lib.h"
#include "Ex2_f.h"
using namespace std;

int main()
{
    Emp x;
    x.setData("Olimjon", "Orifjonov", 120.50);
    x.print();

    x.incSl(241.99);
    x.print();

    x.incSl(231.23);
    x.print();

    x.getData();
    x.print();
    x.incSl(500.99);
    x.print();

    return 0;
}