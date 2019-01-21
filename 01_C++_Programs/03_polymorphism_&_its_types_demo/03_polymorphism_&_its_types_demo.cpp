/*
 * Write a program to demonstrate polymorphism & all its type.
 **/

#include <iostream>
using namespace std;

class Employee
{
  protected:
    string name="";
    int id=NULL;

  public:
    Employee(string);
    Employee(string, int);      //overloading & compile time binding
    virtual void designation();     //overriding & runtime binding
};

Employee::Employee(string name)
{
    this->name = name;
}

Employee::Employee(string name, int id)
{
    this->name = name;
    this->id=id;
}

void Employee::designation()
{
    cout << name << " is a professional working at CIS, and my ID is\t"<<this->id<<endl;
}

class Trainee : public Employee
{
  private:
  public:
    Trainee(string);
    Trainee(string, int);
    void designation();
};

Trainee::Trainee(string name) : Employee(name)
{
    this->name=name;
}

Trainee::Trainee(string name, int id) : Employee(name, id)
{
    this->name=name;
    this->id=id;
}

void Trainee::designation()
{
    cout << name << " is a trainee working at CIS, & my ID is\t"<<this->id<<endl;
}

main(int argc, char const *argv[])
{
    Employee abzs= Employee("Abzs");
    abzs.designation();
    Trainee abhijeet = Trainee("Abhijeet", 15);
    abhijeet.designation();
    return 0;
}
