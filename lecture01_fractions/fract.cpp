#include<iostream>
using namespace std;


struct Fract  ///vulgar fraction
{

  private:

    int num;
    int den;


 public:

    void print()
    {
        cout << num << "/" << den << endl;
    }


    void set(int N, int D)
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



};




int main()
{

    Fract x;
   // x.num=2;
  //  x.den=0;
  //  x.print();

    x.set(2,0);
    x.print();




    return 0;
}
