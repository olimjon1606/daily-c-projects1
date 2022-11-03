#include"fract_lib.h"

int main()
{

    Fract x(3,4);


    Fract arr[3];


    x.print();


    Fract y=x;
    y.print();

    Fract z(x);
    z.print();


   // x.num=2;
  //  x.den=0;
  //  x.print();

    x.set(2,300);
    x.print();


    Fract v(3.0);
    v.print();




    return 0;
}

