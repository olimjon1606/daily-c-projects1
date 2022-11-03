#ifndef FRACT_LIB_KNOWN
#define FRACT_LIB_KNOWN


struct Fract  ///vulgar fraction
{

  private:

    int num;
    int den;


 public:

    //Fract();
    Fract(int N=0, int D=1);  ///constructor
    Fract (Fract &s);   ///copy constructor


    void print();
    void set(int N, int D);

};

#endif // FRACT_LIB_KNOWN

