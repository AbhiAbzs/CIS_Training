/*
 * Write a program to demonstrate pairs, set, list, array.
 * */

#include <iostream>
#include <array>
#include <list>
#include <set>
#include <string>
using namespace std;

void pair_logic(int, string);
void array_logic();
void list_logic();
void set_logic();

main(int argc, char const *argv[])
{
    pair_logic(12, "Abzs"); //could have passed user given input.
    array_logic();
    list_logic();
    set_logic();
    return 0;
}

void pair_logic(int roll, string name)
{
    pair<int, string> student;
    student = make_pair(roll, name);
    cout << "The values in the student pair are \n";
    cout << "Students roll no is\t" << student.first << endl;
    cout << "Students name is\t" << student.second << endl;
}


//Start of logic for Array
void array_logic()
{
}
//End of logic for Array

//Start of logic for List
void list_logic()
{
    int opt;
    void show_books_list(list<string>);
    void insert_book_at_last(list<string>);
    void remove_book_from_last(list<string>);
    list<string> fav_books; //created favourite books list
    do
    {
        cout << "Press 1 to show all books in the list.\n";
        cout << "Press 2 to insert a book at end.\n";
        cout << "Press 3 to remove a book from end.\n";
        cin >> opt;
        switch (opt)
        {
        case 1:
            show_books_list(fav_books);
            break;
        case 2:
            insert_book_at_last(fav_books);
            break;
        case 3:
            remove_book_from_last(fav_books);
            break;

        default:
            cout << "Select a valid option.\n";
        }
    } while (opt != 3);
}
void show_books_list(list<string> &books)
{

    if (books.empty())
        cout << "There is no books in the list.\n";
    else
    {
        cout << "My favourite books are\n";
        for (list<string>::iterator it = books.begin(); it != books.end(); it++)
        {
            cout << *it << endl;
        }
    }
}
void insert_book_at_last(list<string> book)
{
    string temp = "";
    cout << "Enter your favourite book name\n";
    getline(cin, temp);
    book.push_back(temp);
}
void remove_book_from_last(list <string> book)
{
    string temp = "";
    cout << "Enter a book name that you want to remove from favourite books.\n";
    getline(cin, temp);
    book.remove(temp);
}
//End of logic for List

//Start of logic for Set
void set_logic()
{
}
//End of logic for Set