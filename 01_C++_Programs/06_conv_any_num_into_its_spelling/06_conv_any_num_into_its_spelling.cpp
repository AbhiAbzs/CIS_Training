/* 
 * Write a program to convert any given number into its spelling.
 * For ex:- "1004" should print "one thousand four".
 * */

#include <iostream>
#include <string>
#include<vector>
using namespace std;

//vector <string> num_word;
string convert_into_words(int);

main(int argc, char const *argv[])
{
    int num = 0;
    cout << "Enter a value to get it in the form of words.\n";
    cin >> num;
    cout << "The number you entered is -> " << convert_into_words(num);
    return 0;
}

string convert_into_words(int num)
{
    string data_set[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    int num_length = to_string(num).length();
    for (int i = num_length; i > 0; i--)
    {
        int temp = num % 10 * --i;
    }
}