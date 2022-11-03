#ifndef FRACT_LIB_KNOWN
#define FRACT_LIB_KNOWN


struct Fract  ///vulgar fraction
{

  private:

    int num;
    int den;


 public:

    Fract();
    Fract(int N, int D);  ///constructor
    Fract (Fract &s);   ///copy constructor
    Fract(float x);


    void print();
    void set(int N, int D);

};

#endif // FRACT_LIB_KNOWN

