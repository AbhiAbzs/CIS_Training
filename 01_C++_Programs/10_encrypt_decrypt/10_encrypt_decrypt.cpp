/* 
 * Write a program to tae data from user to encrypt and decrypt.
 **/

#include <iostream>
#include<stdio.h>
#include<string.h>
//#include<curses.h>
using namespace std;

void encrypt();
void decrypt();
bool isEncrypted = false;
main(int argc, char const *argv[])
{
    int opt = 0;
    do
    {
        cout << "Press 1 to encrypt.\n";
        cout << "Press 2 to decrypt.\n";
        cout << "Press 3 to exit.\n";
        cin >> opt;
        switch (opt)
        {
        case 1:
            encrypt();
            break;
        case 2:
            decrypt();
            break;
        case 3:
            break;
        default:
            cout << "Select a valid option.\n";
        }
    } while (opt != 3);
    return 0;
}

//Encryption logic
string input;
void encrypt()
{
    char ch;
    cout << "Give any input to encrypt it.\n";
    //getch();
    // fflush(stdin);
    cin.ignore();
    getline(cin, input);
    for (int i = 0; i < input.length(); i++)
    {
        input[i] -= 5;
    }
    isEncrypted = true;
    cout << input << endl;
    cout<<cin.get()<<endl;
}

//Decryption logic
void decrypt()
{
    if (isEncrypted) //if the user input is encrypted, then only decrypt.
    {
        for (int i = 0; i < input.length(); i++)
        {
            input[i] += 5;
        }
        isEncrypted=false;
        cout << input << endl;
    }
    else
        cout << "First encrypt the word.\n\n";
}
