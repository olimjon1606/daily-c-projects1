#include<iostream>
#include "students.h"
using namespace std;

Student::Student(string N, string S)
{
    name = N;
    surename = S;
    number_of_grades=0;
    grades = nullptr; //no grades yet
}



void Student::print()
{
    cout << name << " " << surename << endl;
    if (number_of_grades>0)
    {
        cout << "Grades: " ;
        for (int i=0; i<number_of_grades; i++)
            cout << grades[i] << " ";
        cout << endl;
    }
    else
        cout << "No grades yet " << endl;

}


void Student::addGrade(float g)
{
    if (g!=2.0 && g!=3.0 && g!=3.5 && g!=4.0 && g!=4.5 && g!=5.0)
        throw runtime_error("incorrect grade");

  float * temp;
  temp = new float[number_of_grades+1];  ///create an array which is 1 element longer
  for(int i=0; i<number_of_grades; i++)  ///copy values
        temp[i] = grades[i];

   temp[number_of_grades] = g;  ///put g on the last position

   ///replace the old by the new one
   delete [] grades;   ///delete the old one
   grades = temp;       /// connect the new one

   number_of_grades++;

}


  void Student::changeName(string N, string S)
  {
    name=N; surename = S;
  }




  Student::Student(Student &s)
  {

    name = s.name;
    surename = s.surename;
    number_of_grades = s.number_of_grades;
    grades = new float[s.number_of_grades];
    for(int i=0; i<number_of_grades; i++)
        grades[i] = s.grades[i];


    cout << "OUR copy constructor called\n";
  }


  Student::~Student()
  {
    if (number_of_grades>0)
        delete [] grades;
    cout << "student " << name << " " << surename << " destroyed " << endl;
  }

