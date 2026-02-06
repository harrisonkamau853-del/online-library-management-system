#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "User.h"
#include <vector>

class Library
{
private:
    std::vector<Book> books;
    std::vector<User> users;

public:
    void addBook(const Book &book);
    void addUser(const User &user);

    bool borrowBook(int userId, int bookId);
    bool returnBook(int userId, int bookId);
};

#endif
