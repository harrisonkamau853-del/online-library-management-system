#include <iostream>
#include "Library.h"

int main()
{
    Library lib;

    lib.addBook(Book(1, "C++ Basics", "Bjarne"));
    lib.addUser(User(101, "Alice"));

    std::cout << lib.borrowBook(101, 1) << std::endl;
    std::cout << lib.returnBook(101, 1) << std::endl;

    return 0;
}
