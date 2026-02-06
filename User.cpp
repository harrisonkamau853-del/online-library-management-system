#include "User.h"
#include <algorithm>

User::User(int id, std::string name)
    : userId(id), name(name) {}

int User::getId() const
{
    return userId;
}

std::string User::getName() const
{
    return name;
}

void User::borrowBook(int bookId)
{
    borrowedBooks.push_back(bookId);
}

void User::returnBook(int bookId)
{
    borrowedBooks.erase(
        std::remove(borrowedBooks.begin(), borrowedBooks.end(), bookId),
        borrowedBooks.end());
}
