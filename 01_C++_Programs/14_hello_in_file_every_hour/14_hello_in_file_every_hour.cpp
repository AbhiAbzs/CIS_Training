/*
 * Using time function in c++, write a program that creates a file at particular time and then append a line hello into it after 1 hour interval.
 * */

#include <iostream>
#include <unistd.h>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    fstream file;
    while (true)
    {
        sleep(3600);
        file.open("./hourly_write.txt", ios::app);
        file << "Hello\n";
        file.close();
    }
    return 0;
}
