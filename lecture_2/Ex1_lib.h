#ifndef FRECT_LIB_KNOWN
#define FRECT_LIB_KNOWN

struct Fract
{
private:
    int num;
    int den;

public:
    void read();
    void print();
    void isGreater(int N, int D);
    void sum(int N, int D);
    void product(int N, int D);
};
#endif