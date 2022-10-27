#include <iostream>
#include <cmath>
using namespace std;
bool isTriangle(double a, double b, double c)
{
    if (a + b > c && a + c > b && b + c > a)
        return true;
    else
        return false;
}

double perimeter(double a, double b, double c)
{
    double P = a + b + c;
    return P;
}

double area(double P, double a, double b, double c)
{
    double s = P / 2;
    double A = sqrt(s * (s - a) * (s - c) * (s - b));
    return A;
}

int main()
{
    char ch = 'Y';
    while (ch != 'n' || ch != 'N')
    {
        double a, b, c;
        cout << "Please enter the side of the Triangle: \n a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << "c = ";
        cin >> c;
        if (isTriangle(a, b, c) == false)
            cout << "Sorry this is not a Triangle!!";
        else
        {
            cout << "The Perimeter is " << perimeter(a, b, c) << endl;
            cout << "The Area is " << area(perimeter(a, b, c), a, b, c) << endl;
        }
        cout << "If you wanna stop the process please press (N/n) or any key to continue!\n";
        cin >> ch;
    }
    return 0;
}