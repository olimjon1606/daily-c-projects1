#include <iostream>
#include "frac_lib.h"
using namespace std;

Fract::Fract()
{
    num = 0;
    den = 1;
}

Fract::Fract(int N, int D)
{
    if (D != 0)
    {
        num = N;
        den = D;
    }
    else
        throw runtime_error("incorrect data!!!");
}

Fract::Fract(Fract &s)
{
    cout << "Copy constructor called" << endl;

    num = s.num;
    den = s.den;
}

void Fract::print()
{
    cout << num << "/" << den << endl;
}
void Fract::set(int N, int D)
{
    if (D != 0)
    {
        num = N;
        den = D;
    }
    else
        throw runtime_error("Denominator cannot be 0\n");
}

Fract::Fract(float x)
{
    den = 10;
    num = int(x) * 10;
}

// This is the begginning of the main part

int main()
{

    Fract x(12, 2312);
    x.print();

    Fract z(x);
    z.print();

    x.set(1223, 12311);
    x.print();

    Fract v(233, 31);
    v.print();
    return 0;
}
