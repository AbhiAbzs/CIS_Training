/*
 * Write a program to demonstrate complete string handling functions.
 * */

#include<iostream>
#include<string>
using namespace std;

main(int argc, char const *argv[])
{
    string input1, input2;
    cout<<"Enter 1st String.\t";
    getline(cin, input1);
    cout<<"Enter 2nd String.\t";
    getline(cin, input2);
    cout<<"The length of 1st string =\t"<<input1.length()<<endl;
    cout<<"The length of 2nd string =\t"<<input2.length()<<endl;
    cout<<"The concatination of both the string with space inbetween =\t"<<input1+" "+input2<<endl;
    cout<<"After copying 2nd variable into 1st variable\t"<<input1.assign(input2)<<endl;
    cout<<"Comparing String1 with String2\t"<<input1.compare(input2)<<endl;
    return 0;
}
