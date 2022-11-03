#include<iostream>
using namespace std;

int main()
{

    int B[4] ={4,5,6,7};

    cout << B << endl;

    int N;
    cout << "give the length of your array: ";
    cin >> N;

    int * C = new int[N];

    cout << C << endl;


    delete [] C;



  return 0;
}
