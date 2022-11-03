#ifndef STUDENTS_HNOWN
#define STUDENTS_HNOWN

#include<string>
using namespace std;



struct Student{

private:
    string name;
    string surename;
    int number_of_grades;
    float* grades;   ///array storing grades

public:
    Student(string N="No", string S="Name");

    ~Student(); ///destructor

    Student(Student &s);



    void print();
    void addGrade(float g);
    void changeName(string N, string S);




};





#endif // STUDENTS_HNOWN
