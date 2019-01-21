/*
 * Write a program to demonstrate constructor & destructor along with overiding concepts.
 **/

#include <iostream>
// #include <string>
using namespace std;

enum type
{
    integer,
    real,
    str
};

class Add
{
  private:
    int numi1, numi2, sumi = 0;
    float numf1, numf2, sumf = 0.0f;
    //string vars1, vars2, concats=NULL;

  public:
    Add(int, int);
    Add(float, float);
    //Add(string, string);
    // Add(Add&);
    ~Add();
    void sum(enum type);
};

//definition of the constructor for initializing integer variables.
Add::Add(int var1, int var2)
{
    numi1 = var1;
    numi2 = var2;
}

//definition of the constructor for initializing decimal variables.
Add::Add(float var1, float var2)
{
    numf1 = var1;
    numf2 = var2;
}

//definition of the constructor for initializing string variables.
/* Add::Add(string var1, string var2)
{
    vars1=var1;
    vars2=var2;
} */

//definition of the copy constructor for initializing
/* Add::Add(Add& obj)
{
    this->numf2=obj.numf2;
    this->numf1=obj.numf1;
    this->numi1=obj.numi1;
    this->numi2=obj.numi2;
    this->vars1=obj.vars1;
    this->vars2=obj.vars2;
} */

//Definition of the destructor
Add::~Add()
{
    cout << "The object has been destroyed.\n";
}

//Definition of sum method.
void Add::sum(enum type value)
{
    if (value == integer)
    {
        sumi = numi1 + numi2;
        cout<<sumi;
    }
    else if (value == real)
    {
        sumf = numf1 + numf2;
        cout<<sumf;
    }
    else
        cout<<"";
}

void mainLogic();
main(int argc, char const *argv[])
{
    int x;
    // interactiveLogic();
    // cout<<"Hey its debugging, give an input.\n";
    // cin>>x;
    // cout<<x<<endl;
    mainLogic();
    return 0;
}

/* void interactiveLogic()
{
    cout<<"Select an option\n";
    do{
        cout<<"1. for"
    }
    while();
} */

void mainLogic()
{
    Add intVar = Add(14, 16);
    cout << "The sum of 2 integer numbers are\t";
    intVar.sum(integer);
    cout<<endl;

    Add floatVar = Add(12.6f, 19.34f);
    cout<<"The sum of 2 real numbers are\t";
    floatVar.sum(real);
    cout<<endl;
}
