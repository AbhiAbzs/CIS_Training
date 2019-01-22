/* 
 * Create a template to add, multiply all combination of datatypes like int to int, int to float, etc.
 **/

#include<iostream>
#include<string>
using namespace std;

//using template for addition of 2 values of various types.
template <typename var>
var sum(var val1, var val2)
{
    return val1+val2;
}

main(int argc, char const *argv[])
{
    cout<<"Sum of 2 integer numbers are\t";
    cout<<sum<int>(12,145)<<endl;
    cout<<"Sum of 2 real numbers are\t";
    cout<<sum<float>(123.6f, 176.32f)<<endl;
    cout<<"Sum of a integer and a real numbers is\t";
    cout<<sum<float>(123, 176.32f)<<endl;
    return 0;
}
