/*
 * Write a program to create 2 threads where in 1 thread add 2 numbers and in second thread multiply that number with 10.
 * */

#include <iostream>
#include <thread>
using namespace std;

void add(float);
void mul(float);

float result;
main(int argc, char const *argv[])
{
    float num1, num2;
    cout << "Enter 2 numbers to add it.\n";
    cin >> num1;
    thread t1(add, num1);
    t1.join();
    thread t2(mul, result);
    t2.join();
    return 0;
}

void add(float num1)
{
    result = num1 + 50;
}

void mul(float val)
{
    cout << "The product of both number sum with 10 = " << val * 10;
}