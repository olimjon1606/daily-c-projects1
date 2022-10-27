#include <iostream>
using namespace std;

struct Fract
{
private:
    int num;
    int den;

public:
    void print()
    {
        cout << num << "/" << den << endl;
    }
    void set(int T, int D)
    {
        num = T;
        den = D;
        // cout << s.num << "/" << s.den << endl;
    }
};

int main()
{
    Fract x;
    // x.num = 1, x.den = 2;
    x.set(1, 2);
    x.print();
    return 0;
}