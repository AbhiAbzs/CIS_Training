/* 
 * Write a program to demonstrate friend and virtual function.
 **/

#include <iostream>
#include <string>
using namespace std;

//Animal class
class Animal
{
  protected:
    int no_of_legs=0;

  public:
    Animal();
    Animal(int);
    virtual string make_noise();
    friend int show_no_of_legs(Animal);
};

Animal::Animal(int legs)
{
    this->no_of_legs = legs;
}

string Animal::make_noise()
{
    cout << "Grrrrrrr\n";
}
int show_no_of_legs(Animal var)
{
    return var.no_of_legs;
}

//Dog class inherited Animal class
class Dog : public Animal
{
  private:
    string name="";

  public:
    Dog(string, int);
    string make_noise();
};

Dog::Dog(string name, int legs):Animal(legs)
{
    this->no_of_legs=legs;
    this->name = name;
}

string Dog::make_noise()
{
    return "woof woof\n";
}

main(int argc, char const *argv[])
{
    Animal lion = Animal(4);
    Dog tuffy = Dog("Tuffy", 4);
    cout << "Lion has " << show_no_of_legs(lion) << " legs.\n";
    cout << "Lion says " << lion.make_noise()<<endl;
    cout << "Tuffy has " << show_no_of_legs(tuffy) << " legs.\n";
    cout << "Tuffy says " << tuffy.make_noise()<<endl;
    return 0;
}