#include<iostream>
#include "students.h"
using namespace std;

int main()

{

    Student sb("John", "Taylor");

    sb.print();

    float gr;

    while(true)
    {
        cout << "give a grade, 0 ends";
        cin >> gr;
        if (gr==0) break;
        sb.addGrade(gr);
        cout << "your student now: " << endl;
        sb.print();

    }

cout << "=====================================\n";
    Student myfriend(sb);
    myfriend.changeName("Mark", "Brown");

    myfriend.print();

    cout << "=====================================\n";


   myfriend.addGrade(5);
    myfriend.addGrade(5);
     myfriend.addGrade(5);
   myfriend.print();


    cout << "=====================================\n";
sb.print();


    cout << "=====================================\n";

Student Myclass[10];



return 0;
}
