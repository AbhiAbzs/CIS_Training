/* 
 * Write a program to print fibonacci & factorial of a number using recursion.
 **/

#include <iostream>
#include <conio.h>
using namespace std;

void fibInput();
void factInput();

main(int argc, char const *argv[])
{
    int opt;
    do
    {
        cout << "\nSelect an option\n";
        cout << "1. For printing a fibonacci series upto given value.\n";
        cout << "2. For finding factorial of a number.\n";
        cout << "3. To quit.\n";
        cin >> opt;
        if (opt == 1)
        {
            fibInput();
        }
        else if (opt == 2)
        {
            factInput();
        }
        else if (opt == 3)
            break;
        else
            cout << "Select a valid option.\n";

    } while (opt != 3);

    return 0;
}

//Declaring fib func & taking input for calling fibonacci function & printing series.
int fib(int);
void fibInput()
{
    int no = 0;
    cout << "Enter number of term you would like to print of fibonacci series.\n";
    cin >> no;
    for (int i = 0; i < no; i++)
        cout << fib(i) << "\t";
    cout << endl;
    getch();
}

//Logic for finding fibonacci value for any given position or term.
int fib(int no)
{
    if ((no == 1) || (no == 0))
    {
        return (no);
    }
    else
    {
        return (fib(no - 1) + fib(no - 2));
    }
}

//Taking input for calling factorial function.
void factInput()
{
    int no;
    long int fact(int);
    cout << "\nEnter the value to find the factorial\n";
    cin >> no;
    cout << "The factorial of the value " << no << " =\t";
    cout << fact(no) << endl;
    getch();
}

//Logic for finding factorial.
long int fact(int n)
{
    long int f = 1;
    if (n < 0)
    {
        cout << "\aYou entered a negative number.\nFactorial of negative number is not possible.\n";
    }
    else if (n == 0 || n == 1)
        return 1;
    else
    {
        f = n * fact(n - 1);
        return f;
    }
    return 0;
}