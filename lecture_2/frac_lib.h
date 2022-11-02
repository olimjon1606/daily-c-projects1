#ifndef FRECT_LIB_KNOWN
#define FRECT_LIB_KNOWN

struct Fract
{
private:
    int num;
    int den;

public:
    Fract();
    Fract(int N =12, int D = 213);
    Fract(Fract &s);
    Fract(float x);

    void print();
    void set(int N, int D);
};
#endif