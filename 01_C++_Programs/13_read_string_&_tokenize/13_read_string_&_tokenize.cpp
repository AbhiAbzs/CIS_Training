/* 
 * Write a program to read a complete string abc | bcd | def | ghk & then tokenize it.
 **/

#include <iostream>
#include <string>
using namespace std;

main(int argc, char const *argv[])
{
    string input = "abc|bcd|def|ghi";
    string result;
    char ch;
    int pos_init = 0, pos_final = 0;
    cout << "Enter a string to tokenize it\n";
    getline(cin, input);
    cout << "Enter the delimeter character\n";
    ch = fgetc(stdin);

    while (pos_init < input.length())
    {
        pos_final = input.find(ch, pos_init);
        // cout<<"pos_init_final vals "<<pos_init<<pos_final<<endl;
        cout << input.substr(pos_init, pos_final) << "\t";
        pos_init = pos_final;
        // cout<<"\npos_init_final vals "<<pos_init<<pos_final<<endl;
    }
    return 0;
}
