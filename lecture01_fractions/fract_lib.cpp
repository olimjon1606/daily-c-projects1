#include<iostream>
#include"fract_lib.h"
using namespace std;


/*
Fract::Fract()
{
    num=0;
    den=1;
}
*/

Fract::Fract(int N, int D)
{
    if (D!=0)
    {
        num = N;
        den = D;
    }
    else
    {
        throw runtime_error("incorrect data!!!");
    }


}


Fract::Fract (Fract &s)
{
    cout << "copy constructor called" << endl;

    num = s.num;
    den= s.den;
}



void Fract::print()
{
    cout << num << "/" << den << endl;
}



void Fract::set(int N, int D)
{
    if (D!=0)
    {
        num = N;
        den = D;
    }
    else
    {
        throw runtime_error("incorrect data!!!");
    }
}

