/* 
 * Write a program to convert decimal to binary, octal, hexadecimal & vice versa.
 **/

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

//For decimal to any.
void deci2any();
string deci2bin(int);
string deci2oct(int);
string deci2hex(int);

//For binary to any.
void bin2any();

//For octal to any.
void oct2any();

//For hexadecimal to any.
void hex2any();

main(int argc, char const *argv[])
{
    int opt = 0;
    do
    {
        cout << "Press 1 for Decimal to (Binary, Octal, Hexadecimal)\n";
        /* cout << "Press 2 for Binary to (Octal, Decimal, Hexadecimal)\n";
        cout << "Press 3 for Octal to (Binary, Decimal, Hexadecimal)\n";
        cout << "Press 4 for Hexadecimal to (Binary, Octal, Decimal)\n"; */
        cout << "Press 5 to quit.\n";
        cin >> opt;
        switch (opt)
        {
        case 1:
            deci2any();
            break;
        /* case 2:
            bin2any();
            break;
        case 3:
            oct2any();
            break;
        case 4:
            hex2any();
            break; */
        case 5:
            break;
        default:
            cout << "Select a valid option.\n";
        }
    } while (opt!=5);

    return 0;
}

void deci2any()
{
    int num = 0;
    cout << "Enter a decimal number to find its corresponding binary, octal and hexadecimal conversion.\n";
    cin >> num;
    cout << "The binary conversion is " << deci2bin(num) << endl;
    cout << "The octal conversion is " << deci2oct(num) << endl;
    cout << "The hexadecimal conversion is " << deci2hex(num) << endl;
}

string deci2bin(int num)
{
    string val = "";
    while (num != 0)
    {
        val = to_string(num % 2) + val;
        num /= 2;
    }
    return val;
}

string deci2oct(int num)
{
    string val = "";
    while (num != 0)
    {
        val = to_string(num % 8) + val;
        num /= 8;
    }
    return val;
}

string deci2hex(int num)
{
    string val = "";
    int temp = 0;
    while (num != 0)
    {
        temp = num % 16;
        if (temp < 10)
            val = to_string(temp) + val;
        else
            val = (char(temp + 55)) + val;
        num /= 16;
    }
    return val;
}