#include <iostream>
using std::string;

class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    void introduceYourself()
    {
        std::cout << "My name is " << Name << std::endl;
        std::cout << "My Company is " << Company << std::endl;
        std::cout << "My Age is " << Age << std::endl;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1 = Employee("Olimjon", "HI-Tech", 20);
    employee1.introduceYourself();

    Employee employee3 = Employee("Jimmy", "MR.Beast", 22);
    employee3.introduceYourself();
    
    Employee employee2 = Employee("Tommy", "Google", 25);
    employee2.introduceYourself();
}