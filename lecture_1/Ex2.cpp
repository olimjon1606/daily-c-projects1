#include <iostream>
#include <cmath>
using namespace std;
void get(int *arr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "#" << i + 1 << ". ";
        cin >> arr[i];
    }
}
void print(int *arr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "#" << i + 1 << ". " << arr[i] << endl;
    }
}
double avg(int *arr, int n)
{
    double sum = 0.00, avg = 0.00;
    for (int i = 0; i < n; ++i)
    {
        sum += arr[i];
    }
    avg = sum / n;
    return avg;
}
int min(int *a, int c)
{
    int min = a[0];
    for (int i = 1; i < c; ++i)
    {
        if (a[i] < min)
            min == a[i];
    }
    return min;
}
int max(int *m, int j)
{
    int maX = m[0];
    for (int i = 1; i < j; ++i)
    {
        if (maX < m[i]  )
            maX == m[i];
    }
    return maX;
}
void reverse_print(int *arr, int n)
{
    int j = 1;
    for (int i = (n - 1); i >= 0; --i)
    {
        cout << "#" << j << ". " << arr[i] << endl;
        ++j;
    }
}
int main()
{
    int n;
    cout << "Please enter array size: ";
    cin >> n;
    if (n < 1)
    {
        cout << "Sorry you entered wrong value!";
        return 0;
    }
    else
    {
        int *a = new int[n];
        get(a, n);
        print(a, n);
        cout << "The average value of the array is " << avg(a, n) << endl;
        cout << "The Minimum value of the array is " << min(a, n) << endl;
        cout << "The Maximum value of the array is " << max(a, n) << endl;
        reverse_print(a, n);
    }
    return 0;
}