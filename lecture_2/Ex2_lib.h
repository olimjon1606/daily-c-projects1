#ifndef FRECT_LIB_KNOWN
#define FRECT_LIB_KNOWN
// #include <iostream>
// #include <string>

struct Emp
{
private:
    std::string name;
    std::string surname;
    double sl;

public:
    void setData(std::string N, std::string S, double salary=10.00);
    void getData();
    void print();
    void incSl(double inc);
};
#endif