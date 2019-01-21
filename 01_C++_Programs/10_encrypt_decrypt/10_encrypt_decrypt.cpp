/* 
 * Write a program to tae data from user to encrypt and decrypt.
 **/

#include <iostream>
//#include<curses.h>
using namespace std;

void encrypt();
void decrypt();

main(int argc, char const *argv[])
{
    int opt = 0;
    do
    {
        cout << "Press 1 to encrypt.\n";
        cout << "Press 2 to decrypt.\n";
        cout << "Press 3 to exit.\n";
        cin>>opt;
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
void encrypt()
{
    string input;
    cout << "Give any input to encrypt it.\n";
    //getch();
    getline(cin, input);
    for(int i=0; i<input.length();i++)
    {
        input[i]--;
    }
    cout<<input;
}

//Decryption logic
void decrypt()
{

}