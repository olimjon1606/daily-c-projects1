#include <iostream>
#include "Ex2_lib.h"
using std::string;
using namespace std;

void Emp::setData(std::string N, std::string S, double salary)
{
    name = N;
    surname = S;
    sl = salary;
}

void Emp::getData()
{
    cout << "Please enter ur name: ";
    cin >> name;
    cout << "Please enter ur surname: ";
    cin >> surname;
    cout << "Please enter ur salary: ";
    cin >> sl;
}

void Emp::print()
{
    cout << "Your name is " << name << endl;
    cout << "Your surname is " << surname << endl;
    cout << "Your salary is " << sl << endl;
}

void Emp::incSl(double inc)
{
    // name = N;
    // surname = S;
    sl = sl + inc;
}