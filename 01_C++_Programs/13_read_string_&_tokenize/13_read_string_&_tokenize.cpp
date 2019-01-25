/* 
 * Write a program to read a complete string abc | bcd | def | ghk & then tokenize it.
 **/

#include <iostream>
#include <string.h>
using namespace std;

main(int argc, char const *argv[])
{
    char str[] = "abc|bcd|def|ghi";
    cout<<"Enter the delimiter\n";
    char *token = strtok(str, "|"); 

    while (token != NULL) 
    { 
        printf("%s\n", token); 
        token = strtok(NULL, "|"); 
    } 
  
    return 0; 
    return 0;
}
