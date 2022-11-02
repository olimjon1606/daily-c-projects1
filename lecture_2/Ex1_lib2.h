#include <iostream>
#include "Ex1_lib.h"
using namespace std;

void Fract::print()
{
    cout << num << "/" << den << endl;
}
void Fract::read()
{
    cout << "Please enter num = ";
    cin >> num;
    cout << "Please enter denum = ";
    cin >> den;
    if (den == 0)
        throw runtime_error("Wrong value Sorry!!");
    // cout << s.num << "/" << s.den << endl;
}

void Fract::isGreater(int N, int D)
{
    if (D != 0)
    {
        if (N * den < D * num)
            cout << "isGreater\n";
        else
            cout << "Not greater\n";
    }
    else
        throw runtime_error("Wrong den value");
}

void Fract::sum(int N, int D)
{
    if (D != 0)
        cout << "Sum of the two fructions is " << N * den + num * D << "/" << D * den << endl;
    else
        throw runtime_error("Wrong den value!!");
}

void Fract::product(int N, int D)
{
    if (D != 0)
        cout << "The product of two fructions is " << N * num << "/" << D * den << endl;
    else
        throw runtime_error("wrong den value");
}
