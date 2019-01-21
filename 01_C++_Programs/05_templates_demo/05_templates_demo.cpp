/* 
 * Write a program to demonstrate Templates in C++.
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
    cout<<"Sum of 2 strings are\t";
    cout<<sum<string>("Hey ", "Abzs")<<endl;
    return 0;
}
